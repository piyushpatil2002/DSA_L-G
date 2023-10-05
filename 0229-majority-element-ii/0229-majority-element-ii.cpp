class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>v;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it: mp){
            if(it.second > n / 3){
                v.push_back(it.first);
            }
        }
        return v;
    }
};