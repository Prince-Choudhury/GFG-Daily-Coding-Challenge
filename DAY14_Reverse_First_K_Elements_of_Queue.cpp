class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>st;
        int n = q.size();
        
        //Push first k element from queue to stack
        for(int i = 0; i<k; i++){
            int temp = q.front();
            q.pop();
            st.push(temp);
        }
        
        //Push K elements from stack to queue
        while(!st.empty()){
            int temp = st.top();
            st.pop();
            q.push(temp);
        }
        
        //Push and pop n - k elements
        for(int i =0; i<n-k;i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        
        return q;
        
    }
};