#include <iostream>
 
int main() {
    int groups = 0;
 
    if (int n, prev; std::cin >> n && n > 0 && std::cin >> prev) {
        ++groups;
 
        for (int nr; --n && std::cin >> nr;) {
            if (prev == nr) continue;
            ++groups;
            prev = nr;
        }
    }
 
    std::cout << groups << '
';
}