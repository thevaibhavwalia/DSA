class Solution {
public:
    string getSmallestString(string s, int k) {
        if(k==0){
            return s;
        }
        string t="";

     
        int n=s.length();
        for(int i=0;i<n;i++){
            int clock=s[i]-'a';
            int anti= 'z'-s[i]+1;
            if(s[i]=='a'){
                t+='a';
            }
            else if(min(clock,anti) <= k){
                t+='a';
                k-=min(clock,anti);

            }
            else{
                char ch=s[i];
                int size=k;
                for(int j=0;j<size;j++){
                    ch--;
                    k--;
                }
                t+=ch;
            }
        }
        

        return t;

    }
};