class Solution {
public:
    string removeDuplicates(string s) {

        string ans ="";
        int n = s.length();

        for(int i =0; i<n; i++){
            char currCharacter = s[i];
            if(ans.empty()){
                ans.push_back(currCharacter);

            }else if (currCharacter == ans.back()){
                ans.pop_back();


            }else if (currCharacter != ans.back()){
                ans.push_back(currCharacter);
            }

        }
        return ans;
        
    }
};