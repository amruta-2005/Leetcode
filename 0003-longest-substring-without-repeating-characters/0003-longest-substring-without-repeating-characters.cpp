class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
       int low=0;
       int high=0;
       int res=INT_MIN;
       while(high<s.size())
       {
           if(st.find(s[high])==st.end())
           {
                st.insert(s[high]);
                res=max(res,high-low+1);
                high++;
           }
            else
            {
                st.erase(s[low]);
                low++;
            }
       }
       if(s=="")
       {
        return 0;
       }
       return res;
    }
};