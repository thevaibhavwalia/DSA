class Twitter {
vector<pair<int,int>> v;
unordered_map<int,set<int>> umap;
public:
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        v.push_back({userId,tweetId});
        
    }
    
   vector<int> getNewsFeed(int userId) {
    vector<int> ans;
    for(int i = v.size() - 1; i >= 0 && ans.size() < 10; i--) {
        if(v[i].first == userId || umap[userId].count(v[i].first)) {
            ans.push_back(v[i].second);
        }
    }
    return ans;
}
    
    void follow(int followerId, int followeeId) {
        umap[followerId].insert(followeeId);
        
    }
    
    void unfollow(int followerId, int followeeId) {
        umap[followerId].erase(followeeId);
        
    }
};
