#include <unordered_map>

class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        std::unordered_map<int, int> frequencyMap;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int complement = k - arr[i];

            if (frequencyMap.find(complement) != frequencyMap.end()) {
                count += frequencyMap[complement];
            }

            frequencyMap[arr[i]]++;
        }

        return count;
    }
};
