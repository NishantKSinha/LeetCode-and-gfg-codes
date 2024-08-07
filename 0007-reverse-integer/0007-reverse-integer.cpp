class Solution {
public:
    int reverse(int x) {
        int temp = 0 ;
       long ans = 0;
        while (x!=0) {
            temp = x % 10 ;
            ans = ans * 10 + temp ; 
            x = x / 10 ; 
        }
        if (x < 0){
            ans=-ans ;
        }
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        return ans ;
    }
};