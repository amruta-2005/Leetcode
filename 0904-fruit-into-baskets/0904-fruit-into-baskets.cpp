class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int res=0;
        unordered_map<int,int> freq;
        for(int high=0;high<fruits.size();high++)
        {
            freq[fruits[high]]++;
            while(freq.size()>2)
            {
                freq[fruits[low]]--;
                if(freq[fruits[low]]==0)
                {
                    freq.erase(fruits[low]);
                }
                  low++;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};