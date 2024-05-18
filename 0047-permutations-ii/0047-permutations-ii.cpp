class Solution {
private: 
    void permuteUnique(vector<int>& nums, set<vector<int>>& set, int index){
        if(index == nums.size()){
            set.insert(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            permuteUnique(nums, set,  index+1);
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;

    //   sort(begin(nums),end(nums));
        set<vector<int>> set;
        permuteUnique(nums, set, 0);
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};