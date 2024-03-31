class Solution {
public:
int solve(int x){
    int  ans=0;
    int  back=0;
    while(x > 0){
        back =x%10;

        ans+=back;

        x/=10;

    }
    return ans;
}
    int sumOfTheDigitsOfHarshadNumber(int x) {

        int sum=solve(x);
        if(x%sum == 0){
            return sum;
        }
        return -1;

        
    }
};