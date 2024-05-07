class Solution {
public:
bool solve(int n){
    if(n==0){
         return false;
    }
    if(n==1){
        
        return true;
    }
    bool two=false,three=false,five=false;
if(n%2==0){

     two=solve(n/2);
}
else if(n%3==0){

     three=solve(n/3);
}
else if(n%5==0){

     five=solve(n/5);
}

    return two||three||five;
}
    bool isUgly(int n) {
        return solve(n);
        
    }
};