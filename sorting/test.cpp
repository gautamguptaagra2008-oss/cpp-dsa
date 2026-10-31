#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3, 1, 2};
    ranges::sort(v);
    for (int x : v) cout << x << " ";
    cout << "\n";
}