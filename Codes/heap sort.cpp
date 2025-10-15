#include <iostream>
#include <vector>

void heapifyNew(std::vector<int>& arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) largest = l;
    if (r < n && arr[r] > arr[largest]) largest = r;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapifyNew(arr, n, largest);
    }
}

void heapSortNew(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; --i)
        heapifyNew(arr, n, i);
    for (int i = n - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        heapifyNew(arr, i, 0);
    }
}

int main() {
    std::vector<int> data = {53, 12, 77, 3, 29, 64};
    std::cout << "До сортировки: ";
    for (int x : data) std::cout << x << " ";
    heapSortNew(data);
    std::cout << "\nПосле сортировки: ";
    for (int x : data) std::cout << x << " ";
    return 0;
}
