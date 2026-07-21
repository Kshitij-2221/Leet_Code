#include <string.h>

int lengthOfLongestSubstring(char* s) {

    int freq[256] = {0};
    int start = 0;
    int end = 0;
    int maxLen = 0;

    int n = strlen(s);

    while (end < n) {

        if (freq[s[end]] == 0) {

            freq[s[end]]++;

            int len = end - start + 1;
            if (len > maxLen)
                maxLen = len;

            end++;
        }
        else {

            freq[s[start]]--;
            start++;
        }
    }

    return maxLen;
}