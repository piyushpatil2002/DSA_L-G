class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>mp;
        for(int i=0; i<word1.size(); i++){
            mp[word1[i]]++;
            mp[word2[i]]--;
        }
        for(auto it: mp){
            if(it.second > 3 || it.second < -3){
                return false;
            }
        }
        return true;
    }
};