class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        unordered_set<string> st(begin(wordList),end(wordList));
        q.push({beginWord,1});
        st.erase(beginWord);
        while(!q.empty()){
            auto front=q.front().first;
            int ans=q.front().second;
            q.pop();

            if(front == endWord){
                return ans;
            }

            for(int i=0;i<front.size();i++){
                char ch=front[i];

                for(char p='a';p<='z';p++){
                    front[i]=p;
                    if(st.find(front)!=st.end()){
                        st.erase(front);
                        q.push({front,ans+1});
                    }
                }

                front[i]=ch;

            }
        }

        return 0;
        
    }
};