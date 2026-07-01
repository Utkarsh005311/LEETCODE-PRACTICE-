#include <string>
#include <iostream>

class Solution {
public:
    std::string countAndSay(int n) {
        if (n == 1) return "1";
        
        std::string current = "1";
        
        // Loop from 2 up to n to build the string iteratively
        for (int i = 2; i <= n; i++) {
            std::string next_str = "";
            int count = 1;
            
            for (size_t j = 1; j <= current.length(); j++) {
                // If character changes or we hit the string boundary
                if (j == current.length() || current[j] != current[j - 1]) {
                    next_str += std::to_string(count) + current[j - 1];
                    count = 1; // Reset count
                } else {
                    count++;
                }
            }
            current = next_str; // Update string for the next sequence level
        }
        
        return current;
    }
};
