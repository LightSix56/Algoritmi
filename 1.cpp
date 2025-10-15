#include <utility>

void selectionSort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        size_t min_index = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(arr[i], arr[min_index]);
        }
    }
}
