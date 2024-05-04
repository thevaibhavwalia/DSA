class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;
        int j=people.size()-1;
        int ans=0;
        sort(begin(people),end(people));
        while( i <= j){
            if(people[i]+ people[j] <= limit){
                ans++;
                i++;
                j--;
            }
            else if(  people[i] > limit){
                break;
            }
            else if (people[j] <= limit){
                ans++;
                j--;
            }
        
        }
        return ans;
        
    }
};