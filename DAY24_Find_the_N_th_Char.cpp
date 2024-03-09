class Solution {
public:
    char nthCharacter(string s, int r, int n) {
        // code here

        while (r != 0) {
            string temp = ""; // Create a temporary string to store the updated version after each iteration

            for (int i = 0; i < s.length(); i++) {
                
                if(temp.size() > n){
                    break;
                }
                
                if (s[i] == '1') {
                    temp += "10";
                } 
                else if (s[i] == '0') {
                    temp += "01";
                } 
                else {
                    temp += s[i];
                }
            }

            s = temp; // Update the original string with the new version
            r--;
        }

        return s[n];
    }
};