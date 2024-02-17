/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insertSorted(stack<int> &st, int &Element)
{
    // Base Case
    if (st.empty() || Element > st.top())
    {
        st.push(Element);
        return;
    }

    // Solve one case
    int temp = st.top();
    st.pop();
    // Recursion
    insertSorted(st, Element);
    // Backtrack
    st.push(temp);
}

void SortedStack::sort()
{
    if (!s.empty())
    {
        int temp = s.top();
        s.pop();
        sort();
        insertSorted(s, temp);
    }
}