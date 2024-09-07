// Iterate over the string and check.
// If there are characters assigned them to temp and move forward.
// If space is encountered then break from above loop.
// Now check if temp size > 0
// If ans size is 0 then assign temp to the ans.
// Else do ans = temp+ " "+ans
// If space is encountered just move the pointer forward.

class Solution {
public:
    string reverseWords(string s) {

        int n = s.size();
       int  i = 0;
        string ans ="";

        while(i<n){
            string temp="";
            while(s[i]==' ' && i<n){
                i++;

            }while(s[i]!=' ' && i<n){
                temp +=s[i];  //temp me daal rhe na space encounter hone ke baad 
                i++;
            }
            if(temp.size()>0){

                if(ans.size()==0)
                ans = temp;
                else
                ans = temp + " "+ans;
            }
        }

        return ans;
        
    }
};