class Solution {
public:
    int cntone(int num){
        int cnt=0;
        while(num > 0){
            if(num % 2 == 1){
                cnt++;
            }
            num /= 2;
        }
        return cnt;
    }
    vector<int> countBits(int n){
        vector<int>ans;
        for(int i=0; i<=n; i++){
            ans.push_back(cntone(i));
        }
        return ans;
    }
};