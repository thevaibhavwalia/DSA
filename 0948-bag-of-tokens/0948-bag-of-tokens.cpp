class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        int token=0;
        sort(begin(tokens),end(tokens));
        int i=0;
        int j=tokens.size()-1;

        if(tokens.empty() || tokens[0]>power){
            return 0;
        }
        if(tokens.size()==1){
            return power>=tokens[0]?1:0;
        }
        while(i <= j) {
            while(power >=tokens[i]){
                token++;
                ans=max(ans,token);
                power-=tokens[i];
                i++;
            }
            if(token>0 ){ 
                token--;
                power+=tokens[j];
                j--;
            }
           
        }

        return ans;
        
    }
};


// class Solution {
// public:
//     int bagOfTokensScore(vector<int>& tokens, int power) {
//         int ans=0;
//         int token=0;
//         sort(begin(tokens),end(tokens));
//         int i=0;
//         int j=tokens.size()-1;
//         if(tokens.empty() || tokens[0]>power){
//             return 0;
//         }

//         while(i <= j) {
//             while(power >=tokens[i]){
//                 token++;
//                 ans=max(ans,token);
//                 power-=tokens[i];
//                 i++;
//             }
//             if(token>0){
//                 token--;
//                 power+=tokens[j];
//                 j--;
//             }


//         }

//         return ans;
        
//     }
// };
