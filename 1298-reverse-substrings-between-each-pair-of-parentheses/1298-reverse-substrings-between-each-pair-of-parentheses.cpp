class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i] !=')'){
                st.push(s[i]);

            }
            else{
                string val="";
                while(!st.empty() && st.top()!='('){
                    val+=st.top();
                    st.pop();
                }
                if(st.top() =='('){
                    st.pop();
                }
                for(int ch=0;ch<val.length();ch++){
                    st.push(val[ch]);
                }



            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;

        
    }
};