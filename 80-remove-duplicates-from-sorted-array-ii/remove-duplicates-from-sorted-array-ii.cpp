class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int j = 0;        // Pointer to place the next valid number
        int count = 1;    // Tracks the count of the current number

        for (int i = 1; i < nums.size(); i++) {
            // Check if the current number is a duplicate
            if (nums[i] == nums[j]) {
                count++;
            } else {
                count = 1; // Found a new number, reset count
            }

            // If the count is 2 or less, it's a valid element
            if (count <= 2) {
                j++;           // Move the write pointer forward
                nums[j] = nums[i]; // Write the number
            }
        }

        return j + 1; // Size is the last index + 1
    }
};
