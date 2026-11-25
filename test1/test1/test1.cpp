#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::string text;
    std::getline(std::cin, text);

    std::map<char, int> freq;
    for (char c : text) {
        ++freq[c];
    }

    std::vector<std::pair<char, int>> items(freq.begin(), freq.end());
    std::stable_sort(items.begin(), items.end(),
        [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            return a.second > b.second;
        });

    for (const auto& item : items) {
        std::cout << item.first << ": " << item.second << std::endl;
    }
    return 0;
}