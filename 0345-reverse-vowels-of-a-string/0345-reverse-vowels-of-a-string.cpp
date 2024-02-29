class Solution {
public:
    bool isVow(char c){
        char ch=tolower(c);
        
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i < j){
            while(i<j && !isVow(s[i])){
                i++;
            }
             while(i<j && !isVow(s[j])){
                j--;
            }
            
            if(i < j){
                swap(s[i], s[j]);
                i++;
                j--;
                
            }
        
   
          
        }
        
        return s;
        
    }
};