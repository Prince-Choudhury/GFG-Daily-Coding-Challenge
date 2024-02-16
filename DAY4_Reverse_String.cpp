#include<stack>
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        stack<int>st;
        for(int i = 0; i<str.length(); i++){
            st.push(str[i]);
        }
        
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};