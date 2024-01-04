public class Solution
{
    public int MinOperations(int[] nums)
    {
        int sum = 0;
        Dictionary<int, int> mp = new Dictionary<int, int>();
        foreach (int num in nums)
        {
            if (!mp.ContainsKey(num))
                mp[num] = 1;
            else
                mp[num]++;
        }
        foreach (var kvp in mp)
        {
            if (kvp.Value == 1)
                return -1;
            else if (kvp.Value % 3 != 0)
                sum += (kvp.Value / 3) + 1;
            else
                sum += kvp.Value / 3;
        }
        return sum;
    }
}