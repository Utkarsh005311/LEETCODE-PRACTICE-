class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
int n = digits.size();
    
    // Traverse the vector backwards (from the last digit to the first)
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++; // Increments the current digit
            return digits; // No carry over needed, we are done!
        }
        // If the digit is 9, it becomes 0 and the loop carries over to the next digit
        digits[i] = 0;
    }
    
    // If the loop completely finished, it means the number was something like [9, 9, 9] -> [0, 0, 0]
    // We need to insert a '1' at the very front to make it [1, 0, 0, 0]
    digits.insert(digits.begin(), 1);
    return digits;
    }
};