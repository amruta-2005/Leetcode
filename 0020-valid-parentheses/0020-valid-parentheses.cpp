class Solution {
public:
    bool isValid(string s) {
        int len=s.length();
        stack<char> st;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
            
            char ch=st.top();
            st.pop();
            if(s[i]==')' && ch!='(' ||s[i]==']' && ch!='[' ||s[i]=='}' && ch!='{' ) return false;
            }
        }
        return st.empty();
    }
};