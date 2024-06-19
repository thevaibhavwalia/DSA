class Solution {
public:
long long bouquets(vector<int> &arr , long long day , long long k){
    long long n = arr.size();
    long long ans = 0;
    long long currSum = 0;
    for (long long i=0 ; i<n ; i++){
        if (arr[i] <= day){
            currSum++;
            if (currSum == k){
                ans++;
                currSum = 0;
            }
        }
        else{
            currSum = 0;
        }
    }
    return ans;
}

long long minDays(vector<int>& bloomDay, long long m, long long k) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n = bloomDay.size();
    if (n<m*k) return -1;
    long long s=1 , e=*max_element(bloomDay.begin() , bloomDay.end());
    long long ans = INT_MAX;
    while (s<=e){
        long long mid = (s+e)/2;
        long long possibleBouquets = bouquets(bloomDay,mid,k);
        if (possibleBouquets >= m){
            ans = min(ans , mid);
            e=mid-1;
        }
        else s=mid+1;
    }
    if (ans == INT_MAX) return -1;
    return ans;
}
};