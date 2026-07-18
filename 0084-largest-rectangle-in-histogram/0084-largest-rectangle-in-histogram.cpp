class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> nse=findNSE(heights);
        vector<int> pse=findPREV(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++)
        {
            int widht=nse[i]-pse[i]-1;
            maxi=max(maxi,heights[i]*widht);
        }
        return maxi;
    }
    vector<int> findNSE(vector<int> &heights)
    {
        stack<int> st;
        int n=heights.size();
        vector<int> res(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            res[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return res;
    }
    vector<int> findPREV(vector<int> &heights)
    {
        stack<int> st;
        int n=heights.size();
        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            res[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return res;
    }
};