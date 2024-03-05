class Solution {
public:
    string reverseWords(string S) {
        // Reverse the entire string
        reverse(S.begin(), S.end());

        int start = 0; // Start index of the current word
        int end = 0;   // End index of the current word
        int i = 0;     // Current index
        int n = S.size(); // Size of the string

        while (i < n) {
            // Skip leading spaces
            while (i < n && S[i] == ' ')
                i++;

            // Find the end of the current word
            while (i < n && S[i] != '.')
                S[end++] = S[i++];

            if (start < end) {
                // Reverse the current word
                reverse(S.begin() + start, S.begin() + end);

                // Add a space after the reversed word
                S[end++] = '.';

                // Update the start index for the next word
                start = end;
            }
            i++;
        }

        // Remove extra space at the end if present
        if (end > 0)
            S.resize(end - 1);

        return S;
    }
};