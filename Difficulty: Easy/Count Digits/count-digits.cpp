class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int count = 0;
        int original = n;  // Store original number
        
        while(n > 0) {  // Changed to n > 0
            int digit = n % 10;
            
            // Skip if digit is 0 (can't divide by zero)
            if(digit != 0) {
                // Check if original number is divisible by digit
                if(original % digit == 0) {
                    count++;
                }
            }
            n /= 10;  // Remove last digit
        }
        
        return count;
    }
};