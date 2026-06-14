class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
   unordered_map<char, int> min_freq;
        
        // Step 1: Initialize with the first word
        for (auto c : words[0]) {
            min_freq[c] += 1;
        }
        
        // DECLARE TEMP OUTSIDE: Reused for every word
        unordered_map<char, int> temp; 
        
        // Step 2: Loop through every subsequent word
        for (int i = 1; i < words.size(); ++i) {
            temp.clear(); // Clear before processing the new word
            
            // Your loop running character-by-character
            for (auto c : words[i]) {
                // Caps the character count to what min_freq allows
                if (temp[c] < min_freq[c]) {
                    temp[c] += 1; 
                }
            }
            
            // Simultaneously overwrite the base map with the current word's counts
            min_freq = temp; 
            
            // Early exit optimization if no common characters remain
            if (min_freq.empty()) return {};
        }
         vector<string> result;
        for (auto& pair : min_freq) {
            char ch = pair.first;
            int count = pair.second;
            while (count > 0) {
                result.push_back(string(1, ch));
                count--;
            }
        }
        
        return result;
    }
};
