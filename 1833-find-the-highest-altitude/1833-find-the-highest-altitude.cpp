class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0;
        int high = curr;
        for(int i=0; i<gain.size(); i++){
            curr+=gain[i];
            high=max(curr , high);
        }
        return high;
    }
};