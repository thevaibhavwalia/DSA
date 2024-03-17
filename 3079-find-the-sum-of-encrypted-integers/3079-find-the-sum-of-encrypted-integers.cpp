class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int maxi=0;
            int size=0;
            while(nums[i] >= 1){
                int digit=nums[i]%10;
                maxi=max(maxi,digit);
                nums[i]=nums[i]/10;
                size++;
            }
            string pr="";
            for(int p=0;p<size;p++){
                string num=to_string(maxi);
                pr+=num;
            }
            ans+=stoi(pr);

        }

        return ans;
        
    }
};