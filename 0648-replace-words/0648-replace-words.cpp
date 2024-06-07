class Solution {
public:


    string check(string& temp, unordered_set<string>& st) {

        for(int i=1;i<=temp.length();i++){
            if(st.find(temp.substr(0,i)) !=st.end() ){
                return temp.substr(0,i);
            }
        }
        return temp;

    }

    string replaceWords(vector<string>& dictionary, string sentence) {
  
       
        unordered_set<string> st;
        for(auto it: dictionary){
            st.insert(it);
        }

        int i = 0;
        int n = sentence.length();
        string ans = "";
        
        while (i < n) {
            string temp = "";
        
            while (i < n && sentence[i] != ' ') {
                temp += sentence[i];
                i++;
            }
       
            ans += check(temp,st);
   
            
 
            while (i < n && sentence[i] == ' ') {
                ans += ' ';
                i++;
            }
        }

        return ans;
    }
};