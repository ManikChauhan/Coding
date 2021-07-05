class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>> res(img);
        int count;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=img[i][j];
                count=1;
                
                if(i-1>=0){
                    res[i][j]+=img[i-1][j];
                    count++;
                }
                
                if(i+1<m){
                    res[i][j]+=img[i+1][j];
                    count++;
                }
               
                if(j-1>=0){
                    res[i][j]+=img[i][j-1];
                    count++;
                }
                
                if(j+1<n){
                    res[i][j]+=img[i][j+1];
                    count++;
                }
               
                if(i-1>=0 && j-1>=0){
                    res[i][j]+=img[i-1][j-1];
                    count++;
                }
               
                if(i-1>=0 && j+1<n){
                    res[i][j]+=img[i-1][j+1];
                    count++;
                }
               
                if(i+1<m && j-1>=0){
                    res[i][j]+=img[i+1][j-1];
                    count++;
                }
                
                if(i+1<m && j+1<n){
                    res[i][j]+=img[i+1][j+1];
                    count++;
                }
                res[i][j] /= count;
            }
        }
        return res;
    
    }
};