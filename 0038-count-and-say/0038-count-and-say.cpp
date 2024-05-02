class Solution {
public:
string solve(int n){
    if(n==1){
        return "1";
    }
    string say =solve(n-1);

    string temp="";
    for(int i=0;i<say.length();i++){
        int count=1;
        char ch=say[i];
        while(i < say.length() && say[i]==say[i+1]){
            count++;
            i++;
        }

        temp+=to_string(count)+string(1,ch);

    }
    return temp;
}
    string countAndSay(int n) {
        return solve(n);
        
    }
};