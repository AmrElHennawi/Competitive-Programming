public class Solution
{
    public int LengthOfLIS(int[] nums)
    {
        int maxLen = 1;
        int[] dp = new int[nums.Length];
        for (int i = 0; i < nums.Length; i++)
        {
            dp[i] = 1;
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    dp[i] = Math.Max(dp[i], dp[j] + 1);
                }
            }

            maxLen = Math.Max(maxLen, dp[i]);
        }
        return maxLen;
    }
}