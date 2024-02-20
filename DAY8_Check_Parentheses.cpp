#include<stack>
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<int>st;
        for(int i = 0; i<x.length(); i++){
            char ch = x[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            
            else{
                
                if(!st.empty()){
                    
                    if(ch == ')' && st.top() == '('){
                        st.pop();
                    }
                
                    else if(ch == '}' && st.top() == '{'){
                        st.pop();
                    }
                
                    else if(ch == ']' && st.top() == '['){
                        st.pop();
                    }
                
                    else{
                        return false;
                    }
                    
                }
                
                else{
                    return false;
                }
            }
        }
        
        if(st.size() == 0){
            return true;
        }
        else{
            return false;
        }
    }

};