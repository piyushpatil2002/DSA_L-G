class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int temp=x;
        if(x<0){
            return false;
        }

        while(x>0){
        // rev=0;
        int lastdig=x%10;
        if(rev<INT_MIN/10 || rev>INT_MAX/10){
                return false;
            }
        rev=(rev*10)+lastdig;
        x=x/10;
        }
        // cout<<rev;
        return rev == temp;
   
    }
};