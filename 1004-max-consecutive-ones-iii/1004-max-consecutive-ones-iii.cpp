class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int right=0;
       int left=0;
       int countZero=0;
       int maxLen=0;
       while(right<nums.size())
       {
            
            if(nums[right]==0)  countZero++;
                if(countZero>k)
                {
                    if(nums[left]==0)
                          countZero--;
                          left++;
                }
                  
            if(countZero<=k)
            {
                int len=right-left+1;
                maxLen=max(len,maxLen);
            }
            right++;
       }
       return maxLen;
    }
};