class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int original=n;
        int sum=0;
        while(n>0){
            int dig=n%10;
            int fact=1;
            for(int i=1;i<=dig;i++){
                fact=fact*i;
            }
            sum=sum+fact;
            n=n/10;
        }
        string  a=to_string(original);
        string b=to_string(sum);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return(a==b);
        
    }
};