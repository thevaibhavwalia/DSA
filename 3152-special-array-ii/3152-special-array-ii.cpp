class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<pair<int,int>> problem;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i]%2==0&&nums[i+1]%2==0 )|| (nums[i]%2==1&&nums[i+1]%2==1)  ){
                problem.push_back({i,i+1});
            }
        }
 vector<bool> ans(queries.size(),true);
 int idx=0;
        for(auto it:queries){
            int from=it[0];
            int to=it[1];

            for(auto it : problem){
                if(it.first >= from && it.second <= to){
                    ans[idx]=false;
                    break;
                }

            }
            idx++;
        }

return ans;
         
    }
};
