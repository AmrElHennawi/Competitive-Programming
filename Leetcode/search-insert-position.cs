public class Solution
{
    public int SearchInsert(int[] nums, int target)
    {
        int leftIndex = 0;
        int rightIndex = nums.Length;

        while (leftIndex < rightIndex)
        {
            int midIndex = leftIndex + (rightIndex - leftIndex) / 2;

            if (target < nums[midIndex])
            {
                rightIndex = midIndex;
            }
            else
            {
                leftIndex = midIndex + 1;
            }
        }

        if (leftIndex > 0 && target == nums[leftIndex - 1])
        {
            return leftIndex - 1;
        }
        else
        {
            return leftIndex;
        }
    }
}