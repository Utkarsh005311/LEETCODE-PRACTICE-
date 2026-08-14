#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int maximumLengthSubstring(std::string s) {
        std::unordered_map<char, int> char_counts;
        int max_len = 0;
        int left = 0;
        
        for (int right = 0; right < s.length();right++) {
            // Add the current character to the frequency map
            char_counts[s[right]]++;
            
            // Shrink the window from the left if the character appears 3 times
            while (char_counts[s[right]] > 2) {
                char_counts[s[left]]--;
                left++;
            }
            
            // Update the maximum valid window length
            max_len = std::max(max_len, right - left + 1);
        }
        
        return max_len;
    }
};
