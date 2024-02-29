class Solution {
public:
    bool isVow(char c){
        char ch=tolower(c);
        
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    string reverseVowels(string s) {
        vector<char> v;
        for(int i=0;i<s.length();i++){
            if(isVow(s[i])){
                v.push_back(s[i]);
            }
        } 
        reverse(begin(v),end(v));
    int j=0;
        for(int i=0;i<s.length();i++){
            if(isVow(s[i])){
                s[i]=v[j];
                j++;
            }
        }
        return s;
        
    }
};