#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> validStrings(int n) {
        N = n;
        vector<string> ans;
        solve(ans, "", 0);
        return ans;
    }

private:
    int N;

    bool one(const string& temp) {
        for (int i = 1; i < temp.length(); i++) {
            if (temp[i - 1] == '0' && temp[i] == '0') {
                return false;
            }
        }
        return true;
    }

    void solve(vector<string>& ans, string temp, int idx) {
        if (idx == N) {
            if(one(temp)){
     
                ans.push_back(temp);
                }
       
            return;
        }

        solve(ans,temp+'0',idx+1);
        solve(ans,temp+'1',idx+1);

        // if (temp.empty() || temp.back() == '1') {
        //     solve(ans, temp + '0', idx + 1);
        //     solve(ans, temp + '1', idx + 1);
        // } else if (temp.back() == '0') {
        //     solve(ans, temp + '1', idx + 1);
        // }
    }
};

