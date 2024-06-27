class Solution {
public:
    int solve(unordered_set<int>& forbidden, unordered_map<int, unordered_map<int, int>>& memo, int pos, int a, int b, int x, bool back) {
 
        if (pos == x) return 0;
        if (pos < 0 || pos > 6000 || forbidden.count(pos)) return INT_MAX;

 
        if (memo[pos][back] != 0) return memo[pos][back];


        forbidden.insert(pos);


        int forward = solve(forbidden, memo, pos + a, a, b, x, false);
        int backward = back ? INT_MAX : solve(forbidden, memo, pos - b, a, b, x, true);

        
        forbidden.erase(pos);

        
        memo[pos][back] = min(forward, backward) == INT_MAX ? INT_MAX : 1 + min(forward, backward);

        return memo[pos][back];
    }

    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_set<int> forbidden_set(forbidden.begin(), forbidden.end());
        unordered_map<int, unordered_map<int, int>> memo;
        int result = solve(forbidden_set, memo, 0, a, b, x, false);
        return result == INT_MAX ? -1 : result;
    }
};