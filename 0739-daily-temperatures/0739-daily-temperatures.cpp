class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans;
        stack<pair<int,int>>st;
        st.push({temperatures[n-1],n-1});
        ans.push_back(0);
        for(int i=temperatures.size()-2; i>=0; i--){
            while(!st.empty()){
                auto res = st.top();
                if(res.first > temperatures[i]){
                    ans.push_back(res.second-i);
                    break;
                }
                else{
                    st.pop();
                }
            }
            if(st.empty()){
                ans.push_back(0);
            }
            st.push({temperatures[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};