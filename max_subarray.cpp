class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int ans = std::numeric_limits<int>::min();
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            sum+=nums[i];
            ans = std::max(ans, sum);
            if(sum < 0)
                sum = 0;
        }
        return ans;
        
    }
};
};