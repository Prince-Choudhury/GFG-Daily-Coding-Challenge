class Solution {
    stack<pair<int, int>> s;
    int minEle;

public:
    int getMin() {
        if (s.empty())
            return -1; 
        return s.top().second;
    }

    int pop() {
        if (s.empty())
            return -1; 
        int topEle = s.top().first;
        s.pop();
        return topEle;
    }

    void push(int x) {
        if (s.empty()) {
            s.push({x, x});
        } 
        else {
            int currentMin = min(x, s.top().second);
            s.push({x, currentMin});
        }
    }
};