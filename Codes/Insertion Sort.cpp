#include <iostream>
#include <vector>

void insertionSortNew(std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); ++i) {
        int current = v[i];
        int j = static_cast<int>(i) - 1;
        while (j >= 0 && v[j] > current) {
            v[j + 1] = v[j];
            --j;
        }
        v[j + 1] = current;
    }
}

int main() {
    std::vector<int> data = {7, 39, 2, 50, 16};
    std::cout << "До сортировки: ";
    for (int x : data) std::cout << x << " ";
    insertionSortNew(data);
    std::cout << "\nПосле сортировки: ";
    for (int x : data) std::cout << x << " ";
    return 0;
}
