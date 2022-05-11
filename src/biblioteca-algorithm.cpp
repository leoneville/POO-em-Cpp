#include <iostream>
#include <algorithm>

int main() {
    int v[] = {5, 4, 3, 2, 1};

    std::sort(v, v+5);

    for (int i = 0; i < 5; i++) {
        std::cout << v[i] << std::endl;
    }
}