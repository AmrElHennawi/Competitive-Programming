public class Solution
{
    public int StrStr(string haystack, string needle)
    {
        int firstOcurance = -1;
        for (int i = 0; i < haystack.Length; i++)
        {
            bool found = false;
            if (haystack[i] == needle[0])
            {
                firstOcurance = i;
                for (int j = 0; j < needle.Length; j++)
                {
                    if (!(i + j >= haystack.Length || haystack[i + j] != needle[j]))
                    {
                        found = true;
                    }
                    else
                    {
                        found = false;
                        break;
                    }
                }
                if (found)
                {
                    return firstOcurance;
                }
                else
                {
                    firstOcurance = -1;
                }
            }
        }
        return firstOcurance;
    }
}