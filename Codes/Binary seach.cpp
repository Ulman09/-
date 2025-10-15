#include <iostream>
#include <vector>

int binarySearchNew(const std::vector<int>& arr, int target) {
    int left = 0, right = static_cast<int>(arr.size()) - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    std::vector<int> data = {4, 9, 15, 22, 37, 48, 61, 73};
    int key = 37;
    int result = binarySearchNew(data, key);
    std::cout << "Исходный массив: ";
    for (int x : data) std::cout << x << " ";
    std::cout << "\nЭлемент " << key << (result != -1 ? " найден на позиции " + std::to_string(result) : " не найден") << std::endl;
    return 0;
}
