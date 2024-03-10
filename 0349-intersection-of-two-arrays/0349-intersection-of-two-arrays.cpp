class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>  ans1;
        set<int> st,ans;
        for(auto it:nums1){
            st.insert(it);
        }

        for(auto it:nums2){
            if(st.find(it)!=st.end()){
                ans.insert(it);
            }
        }
       for(auto it : ans){
           ans1.push_back(it);
       }

       return ans1;
        
    }
};