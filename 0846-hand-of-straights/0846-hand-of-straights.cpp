/*
    Given int array, return true if can rearrange cards into groupSize consecutive
    Ex. hand = [1,2,3,6,2,3,4,7,8], groupSize = 3 -> true, [1,2,3],[2,3,4],[6,7,8]

    Loop thru ordered map, for a value, check groupSize consecutive & remove

    Time: O(n log n)
    Space: O(n)
*/

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        unordered_map<int, int> countMap;
        for (int card : hand) {
            countMap[card]++;
        }
        
        sort(hand.begin(), hand.end());
        
        for (int i = 0; i < hand.size(); i++) {
            if (countMap[hand[i]] == 0) {
                continue;
            }
            
            for (int j = 0; j < groupSize; j++) {
                int currCard = hand[i] + j;
                
                if (countMap[currCard] == 0) {
                    return false;
                }
                
                countMap[currCard]--;
            }
        }
        
        return true;
    }
};