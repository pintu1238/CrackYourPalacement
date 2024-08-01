class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        //create an empty array to string the result
        string result="";
        while(!st.empty())
        {
            result=st.top()+result;
            st.pop();
        }
        return result;
    }
};