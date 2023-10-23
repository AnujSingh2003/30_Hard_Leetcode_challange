class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n==1)return true; 
       if(n<=0)return false;
       double res=log(n)/log(4);
       if(res==int(res)){
           return true;
       }
       return false;
    }
};