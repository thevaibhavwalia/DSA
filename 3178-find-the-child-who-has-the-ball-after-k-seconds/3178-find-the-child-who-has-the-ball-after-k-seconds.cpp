class Solution {
public:
    int numberOfChild(int n, int k) {
        if( n > k){
            return k;

        }
        int r=n-1;
        if((k/r)%2==1){
            return n-(k%r)-1;

        }
        else{
            return k%r;
        }
        

        
    }
};