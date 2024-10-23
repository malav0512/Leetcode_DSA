/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
 // Allocate memory for the new array
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int)); // Extra space for potential carry

    // Initialize carry to 1 because we are adding one
    int carry = 1;

    // Traverse the array from the end to the beginning
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        if (sum == 10) {
            result[i + 1] = 0;  // If sum is 10, set the digit to 0
            carry = 1;           // Carry over 1 to the next position
        } else {
            result[i + 1] = sum; // No carry required, set the digit to the sum
            carry = 0;           // No carry forward
        }
    }

    // After the loop, check if we still have a carry (meaning we need an extra digit)
    if (carry == 1) {
        result[0] = 1;  // Set the first digit to 1 (e.g., 999 + 1 = 1000)
        *returnSize = digitsSize + 1;
        return result;
    } else {
        // If no carry, we don't need the extra space in result[0]
        *returnSize = digitsSize;
        return result + 1;  // Return a pointer to the part of the array that matters
    }
}