class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>vect;
        vector<int>arr(k);
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                sum+=mat[i][j];
                if(mat[i][j]==0)
                    break;
            }
            vect.push_back(make_pair(sum,i));
        }
        sort(vect.begin(),vect.end());
        for(int i=0;i<k;i++)
            arr[i]=vect[i].second;
        return arr;

    }
};
