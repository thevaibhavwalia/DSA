class Solution {
public:
typedef pair<int,char> P;
    string reorganizeString(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']++;
            if(v[s[i]-'a'] > (s.length()+1)/2)
            {
                return "";
            }
        }  

        priority_queue<P> pq;

        for(char ch='a';ch<='z';ch++)
        {
            if(v[ch-'a']>0)
            {
                pq.push({v[ch-'a'],ch});
            }


        }

        string result="";
        while(pq.size()>=2)
        {
            auto P1=pq.top();
            pq.pop();
            auto P2=pq.top();
            pq.pop();

            result.push_back(P1.second);
            P1.first--;
            result.push_back(P2.second);
            P2.first--;

            if(P1.first >0)
            {
                pq.push(P1);
            }

            if(P2.first >0)
            {
                pq.push(P2);
            }


        }

        if(!pq.empty())
        {
            result.push_back(pq.top().second);
        }

        return result;
        

    }
};