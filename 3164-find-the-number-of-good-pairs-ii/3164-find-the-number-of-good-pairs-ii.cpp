class Solution {
public:
    long long numberOfPairs(vector<int>& a, vector<int>& b, int k) {
        unordered_map<int, int> mp;
        for (int n : b) {
            mp[n * k]++;
        }
        long long ans = 0;
        for (int n : a) {
            for (int i = 1; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    int c = n / i;

                    if (mp.count(i)) {
                        ans += mp[i];
                    }
                    if (c != i && mp.count(c)) {
                        ans += mp[c];
                    }
                }
            }
        }
        return ans;
    }
};