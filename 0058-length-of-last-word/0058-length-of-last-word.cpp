class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag = false;
        for(int i =s.size()-1; i>=0; i--){
            if(s[i] >= 'a' && s[i] <= 'z' ||
                s[i] >= 'A' && s[i] <= 'Z'){
                    count++;
                    flag = true;
                }
            else if(flag == true){
                return count;
            }
        }
        
        return count;
    }
};