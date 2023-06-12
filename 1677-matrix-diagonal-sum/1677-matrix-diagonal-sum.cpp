class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ans = 0;    
        for(int i=0; i<n; i++){
            for(int j=0; j<mat[i].size(); j++){
                if(i == j){
                    ans+=mat[i][j];
                }
                if(i + j == n-1 && i != j){
                    ans+=mat[i][j];
                }
            }
        }
        cout<<n;
        return ans;
    
    }
};