char* longestPalindrome(char* s) {
    int len = strlen(s);

    if (len < 2)
        return s;

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < len; i++) {
        // Odd length palindrome
        int left = i;
        int right = i;

        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while (left >= 0 && right < len && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }

    char* result = (char*)malloc((maxLen + 1) * sizeof(char));

    for (int i = 0; i < maxLen; i++) {
        result[i] = s[start + i];
    }

    result[maxLen] = '\0';

    return result;
}