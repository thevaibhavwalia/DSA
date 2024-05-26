class Solution {
public:
    string compressedString(string s) 
    {
        string ans;
       
        int i = 0, cnt = 0;
        while(s[i])
        {
            char first=s[i];
            while(s[i] == first)
            {
                cnt++;
                if(cnt == 9)
                {
                    ans += '9';
                    ans += first;
                    cnt = 0;
                }
                i++;
            }
            if(cnt)
            {
                ans += to_string(cnt);
                ans += first;
            }
            cnt = 0;
            // first = s[i];
        } 
        return ans;
    }
};