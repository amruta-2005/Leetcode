class Solution {
public:
    int characterReplacement(string s, int k) {
       int right=0;
       int left=0;
       int maxFreq=0;
       int maxLen=0;
       int hash[26]={0};
       while(right<s.size())
       {
            hash[s[right]-'A']++;
            maxFreq=max(maxFreq,hash[s[right]-'A']);
            while((right-left+1)-maxFreq>k)
            {
                hash[s[left]-'A']--;
                left++;
                maxFreq=0;
                for(int i=0;i<26;i++)
                {
                    maxFreq=max(maxFreq,hash[i]);
                   
                }
            }
            maxLen=max(maxLen,right-left+1);
            right++; 
       }
       return maxLen;
    }
};