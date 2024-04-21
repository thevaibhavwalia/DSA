class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        int i=0;
        if(numRows == 1){
            return s;
        }
        bool flag=false;
        
        for(auto it : s){
            ans[i]+=it;
            if(i==0 || i==numRows-1){
                flag=!flag;
            }
            if(flag){
                i++;
            }
            else{
                i--;
            }
        }
        string res="";
        for(auto str:ans){
            res+=str;
        }
        return res;
        
        
    }
};