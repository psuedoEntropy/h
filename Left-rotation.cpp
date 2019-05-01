#include <bits/stdc++.h>

int main() {

    int n, d, input = 0;
    std::cin >> n >> d;
    std::vector<int> arr;

    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        arr.push_back(input);
    }

    int j = 0;
    std::vector<int> outArr(n);

    for (int i = 0; i < n; ++i) {
        j = (i + n - d)%n;
        outArr[j] = arr[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cout << outArr[i] << " ";
    }

}
