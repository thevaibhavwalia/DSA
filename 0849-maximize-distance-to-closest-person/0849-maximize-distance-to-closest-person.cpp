class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> index;
        for (int i = 0; i < seats.size(); i++) {
            if (seats[i] == 1) {
                index.push_back(i);
            }
        }
        int k=0;
        int beginning=0;
     while (seats[k]==0)
        {
            beginning++;
            k++;
        }
        int ans=0;
        if(index.size()==1){
            int left=seats.size()-index[0]-1;
            int right=seats.size()-left-1;

            ans= max(left,right);

        }
        int dis = INT_MIN;
        for (int i = 0; i < index.size() - 1; i++) {
            if (index[i + 1] - index[i] > dis) {
                dis = index[i + 1] - index[i];
            }
        }
      int end = 0;
        k = seats.size() - 1;
        while (k >= 0 && seats[k] == 0) {
            end++;
            k--;
        }


      return max({dis/2,ans,beginning,end});
    }
};