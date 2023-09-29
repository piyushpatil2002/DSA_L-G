class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr = true;
        bool decre = true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                decre = false;
            }
            else if(nums[i] < nums[i-1]){   
                incr = false;
            }
        }
        return incr || decre;
    }
};