class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans;
        for(int i=0; i<n; i++){
            if(nums[i] != i){
                ans=i;
                break;
            }    
        }
        return ans;
        // int ans=0;
        // for(int i=0; i<=nums.size(); i++){
        //    if(find(begin(nums),end(nums),i) == end(nums)){
        //         ans=i;
        //         break;
        //     }
        // }
        // return ans;
    
    }
};