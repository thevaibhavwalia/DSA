class Solution {
public:
    // static bool compareLength(const string &a, const string &b) {
    //     return a.length() < b.length();
    // }

    string check(string& temp, unordered_set<string>& st) {

        for(int i=1;i<=temp.length();i++){
            if(st.find(temp.substr(0,i)) !=st.end() ){
                return temp.substr(0,i);
            }
        }
        return temp;
        // for (int i = 0; i < dictionary.size(); i++) {
        //     string val = "";
        //     for (int j = 1; j <= temp.length(); j++) {
        //         if (temp.substr(0, j) == dictionary[i]) {
        //             val = temp.substr(0, j);
        //             // break; 
        //         }
        //     }
        //     if (val != "") {
        //         return val;
        //     }
        // }
        // return temp;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
  
        // sort(dictionary.begin(), dictionary.end(), compareLength);
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