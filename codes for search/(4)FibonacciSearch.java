public class FibonacciSearch {
    public static int fibonacciSearch(int[] arr, int x) {
        int n = arr.length;
        int fibM2 = 0;
        int fibM1 = 1;
        int fibM = fibM2 + fibM1;

        while (fibM < n) {
            fibM2 = fibM1;
            fibM1 = fibM;
            fibM = fibM2 + fibM1;
        }

        int offset = -1;
        while (fibM > 1) {
            int i = Math.min(offset + fibM2, n - 1);

            if (arr[i] < x) {
                fibM = fibM1;
                fibM1 = fibM2;
                fibM2 = fibM - fibM1;
                offset = i;
            } else if (arr[i] > x) {
                fibM = fibM2;
                fibM1 = fibM1 - fibM2;
                fibM2 = fibM - fibM1;
            } else {
                return i;
            }
        }

        if (fibM1 == 1 && offset + 1 < n && arr[offset + 1] == x) {
            return offset + 1;
        }

        return -1;
    }
}
