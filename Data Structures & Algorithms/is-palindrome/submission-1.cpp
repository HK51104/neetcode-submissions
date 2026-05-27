class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) {
            return true;  // Empty string is considered a palindrome
        }

        int fp = 0;  // Front pointer (starts at the beginning)
        int rp = s.length() - 1;  // Rear pointer (starts at the end)

        while (fp < rp) {
            // Skip non-alphanumeric characters from the front (fp)
            while (fp < rp && !isAlphanumeric(s[fp])) {
                fp++;
            }

            // Skip non-alphanumeric characters from the rear (rp)
            while (fp < rp && !isAlphanumeric(s[rp])) {
                rp--;
            }

            // Compare characters at front and rear, case-insensitively
            if (tolower(s[fp]) != tolower(s[rp])) {
                return false;  // Not a palindrome if characters don't match
            }

            fp++;  // Move front pointer forward
            rp--;  // Move rear pointer backward
        }

        return true;  // The string is a palindrome
    }

private:
    // Define the isAlphanumeric function here
    bool isAlphanumeric(char c) {
        return (c >= 'A' && c <= 'Z') || 
               (c >= 'a' && c <= 'z') || 
               (c >= '0' && c <= '9');
    }
};
