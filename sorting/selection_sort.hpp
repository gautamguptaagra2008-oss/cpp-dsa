#pragma once
#include <utility>
#include <vector>

// Approach: har round mein unsorted hisse ka sabse chhota element dhundo
// aur use us hisse ki pehli position par swap kar do.
// Time: O(n^2) best, average aur worst teeno mein. Space: O(1).
// Stable nahi hai.
inline void selectionSort(std::vector<int>& a) {
    for (size_t i = 0; i + 1 < a.size(); ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < a.size(); ++j) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(a[i], a[minIndex]);
        }
    }
}