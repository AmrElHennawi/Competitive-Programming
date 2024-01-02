public class Solution
{
    public IList<IList<int>> FindMatrix(int[] nums)
    {
        List<int> numberList = nums.ToList();
        IList<IList<int>> result = new List<IList<int>>();

        while (numberList.Count > 0)
        {
            List<int> uniqueElements = new List<int>();

            for (int i = 0; i < numberList.Count; i++)
            {
                if (!uniqueElements.Contains(numberList[i]))
                {
                    uniqueElements.Add(numberList[i]);
                    numberList.RemoveAt(i);
                    i--;
                }
            }

            result.Add(uniqueElements);
        }

        return result;
    }
}