class Solution {
public:
    int lengthOfLastWord(string s) {
int length = 0;
        int i = s.size() - 1;
        while(i >= 0 and s[i] == ' ') i--; // ignoring the tailing whitespaces
        while(i >= 0 and s[i] != ' ') { // counting the length of thw word
            i--;
            length++;
        }

        return length;
    }
};