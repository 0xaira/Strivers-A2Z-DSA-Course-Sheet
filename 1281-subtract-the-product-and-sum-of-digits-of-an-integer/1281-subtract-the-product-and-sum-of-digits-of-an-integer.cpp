class Solution {
    public:
    int subtractProductAndSum(int n) {                            
       int pd=1;
        int sum=0;
       
        while(n!=0){
        int rem = n%10;
         pd=rem*pd;
         sum= sum+rem;
        n = n/10;
        }
        int res=pd-sum;
        return res;
         }
};