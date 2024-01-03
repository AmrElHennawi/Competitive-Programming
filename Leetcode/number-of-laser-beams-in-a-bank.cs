public class Solution
{
    public int NumberOfBeams(string[] bank)
    {
        int sum = 0;
        int prevRowCount = 0;
        for (int i = 0; i < bank.Length; i++)
        {
            int count = 0;
            for (int j = 0; j < bank[i].Length; j++)
            {
                if (bank[i][j] == '1')
                {
                    count++;
                }
            }
            if (count == 0) { continue; }
            sum += prevRowCount * count;
            prevRowCount = count;
        }
        return sum;
    }
}