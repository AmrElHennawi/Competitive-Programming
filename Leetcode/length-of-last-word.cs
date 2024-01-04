public class Solution
{
    public int LengthOfLastWord(string s)
    {
        s = s.Trim();
        String[] strings = s.Split(" ");
        return strings[strings.Length - 1].Length;
    }
}