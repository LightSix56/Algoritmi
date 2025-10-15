#include <vector>

int interpolationSearch(const std::vector<int>& arr, int lo, int hi, int x) {
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        // Проверка, чтобы избежать деления на ноль
        if (arr[hi] == arr[lo]) {
            if (arr[lo] == x) return lo;
            return -1;
        }

        int pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));

        if (arr[pos] == x) {
            return pos;
        }
        if (arr[pos] < x) {
            return interpolationSearch(arr, pos + 1, hi, x);
        }
        if (arr[pos] > x) {
            return interpolationSearch(arr, lo, pos - 1, x);
        }
    }
    return -1;
}
