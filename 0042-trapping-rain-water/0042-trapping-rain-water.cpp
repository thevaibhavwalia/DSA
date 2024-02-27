class Solution {
public:
    
    vector<int> getLeft(vector<int>& heights,vector<int>& l){
        l[0]=heights[0];
        for(int i=1;i<heights.size();i++){
            l[i]=max(l[i-1],heights[i]);
            
        }
        
        return l;
        
    }
        vector<int> getRight(vector<int>& heights,vector<int>& r){
        r[heights.size()-1]=heights[heights.size()-1];
        for(int i=heights.size()-2;i>=0;i--){
            r[i]=max(r[i+1],heights[i]);
            
        }
        
        return r;
        
    }
    int trap(vector<int>& heights) {
        vector<int> l(heights.size());
        vector<int> r(heights.size());
        vector<int> left=getLeft(heights,l);
        vector<int> right=getRight(heights,r);
        
        int ans=0;
        for(int i=0;i<left.size();i++){
            ans+=min(left[i],right[i])-heights[i];
        }
        return ans;
    }
};