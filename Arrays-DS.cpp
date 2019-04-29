#include <bits/stdc++.h>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    std::vector<int> reversedArray;

    for (int i = a.size() - 1; i >= 0; --i) {
        reversedArray.push_back(a[i]);
    }
    return reversedArray;
}

int main() {
    int count = 0;
    int input = 0;

    std::cin >> count;
    std::vector<int> arr;

    for (int i = 0; i < count; ++i) {
        std::cin >> input;
        arr.push_back(input);
    }

    std::vector<int> rarray = reverseArray(arr);

    for (int i = 0; i < rarray.size(); ++i) {
        std::cout << rarray[i] << " ";
    }

    return 0;
}

