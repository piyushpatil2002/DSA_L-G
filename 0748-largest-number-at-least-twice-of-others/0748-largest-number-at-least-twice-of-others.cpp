class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = 0;
        int temp = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                temp = i;
            }

        }
        for(int i=0; i<nums.size(); i++){
            if(temp != i && (nums[i] * 2) > maxi){
                return -1;
            }
        }
        return temp;
    }
};