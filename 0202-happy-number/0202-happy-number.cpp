class Solution {
public:
    bool isHappy(int n) {
        while(true){
            int square=0;
        while(n>0){
            int digit=n%10;
            square+=digit*digit;
            n=n/10;
        }
        n=square;
       
    if(n==1){
        return true;
    }
    if(n==4){
        return false;
      }
     }
 }
};