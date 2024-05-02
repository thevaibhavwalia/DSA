

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for ( int i = digits.size()-1; i>=0 ;i--){
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i]=0;
              
            }
        }
        digits.push_back(0); // push_back adds number to end thats why 0 is added to end and first is changed with 1
        digits[0]=1;
        return digits;
        
        

        
        
    }
};