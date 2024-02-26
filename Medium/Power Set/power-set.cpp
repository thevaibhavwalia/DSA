//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	void solve(string& s,string temp,vector<string>& ans,int idx,int n){
	    if(idx>=n){
	        if(temp.size()!=0){
	            
	        ans.push_back(temp);
	        }
	        return ;
	    }
	    temp.push_back(s[idx]);
	    solve(s,temp,ans,idx+1,n);
	    temp.pop_back();
	    solve(s,temp,ans,idx+1,n);
	}
		vector<string> AllPossibleStrings(string s){
		    string temp="";
		    int n=s.length();
		    vector<string> ans;
		    solve(s,temp,ans,0,n);
		    sort(begin(ans),end(ans));
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends