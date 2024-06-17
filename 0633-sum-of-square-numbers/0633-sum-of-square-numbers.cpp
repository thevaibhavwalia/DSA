class Solution {
public:
    bool judgeSquareSum(int c) {
        long l=0;
        long r=sqrt(c);
        while(l <= r){
            long long  val=l*l + r*r;
            if(val == c){
                return true;
            }
            else if(val > c){
                r--;
            }
            else{
                l++;
            }
        }
    
        return false;
        
    }
};