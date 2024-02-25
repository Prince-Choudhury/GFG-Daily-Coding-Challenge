class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int>ans;
        
        queue<int>secondQ;
        int size = q.size();
        
        //Push first half element from first queue to second queue
        for(int i = 0; i<size/2; i++){
            int temp = q.front();
            q.pop();
            secondQ.push(temp);
        }
        
        //Merge
        for(int i = 0; i<size/2; i++){
            int temp1 = secondQ.front();
            secondQ.pop();
            q.push(temp1);
            
            int temp2 = q.front();
            q.pop();
            q.push(temp2);
        }
        
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
        }
        
        return ans;
    }
};