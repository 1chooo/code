#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        std::cout << a[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
