class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 1;
        while(i < n){
            if(nums[i-1] != nums[i]){
                return false;
            }
            i+=2;
        }
        return true;
    }
};