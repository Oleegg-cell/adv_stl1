#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    if (!(cin >> n)) {
    }

    set<int> uniqueNumbers;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        uniqueNumbers.insert(value);
    }
    for (auto it = uniqueNumbers.rbegin(); it != uniqueNumbers.rend(); ++it) {
        cout << *it << '\n';
    }
}