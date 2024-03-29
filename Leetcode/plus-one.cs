public class Solution
{
    public int[] PlusOne(int[] digits)
    {
        int carry = 1;
        for (int i = digits.Length - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry == 0)
        {
            return digits;
        }
        int[] result = new int[digits.Length + 1];
        Array.Copy(digits, 0, result, 1, digits.Length);
        result[0] = carry;
        return result;
    }
}