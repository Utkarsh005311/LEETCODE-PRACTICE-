class Solution {
public:
    string reverseVowels(string s) {
        int l=s.length();
        string vowels="aeiou";
        int i=0;
        int j=l-1;
        while(i<=j)
        {
            if(vowels.contains(tolower(s[i]))&&vowels.contains(tolower(s[j])))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(vowels.contains(tolower(s[i])))
            {
                j--;
            }
            else if(vowels.contains(tolower(s[j])))
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
        return s;
    }
};