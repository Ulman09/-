public class InterpolationSearchNew {
    public static int interpolationSearch(int[] arr, int target) {
        int lo = 0, hi = arr.length - 1;
        while (lo <= hi && target >= arr[lo] && target <= arr[hi]) {
            if (lo == hi) {
                return arr[lo] == target ? lo : -1;
            }
            int pos = lo + ((target - arr[lo]) * (hi - lo)) / (arr[hi] - arr[lo]);
            if (arr[pos] == target) return pos;
            if (arr[pos] < target) lo = pos + 1;
            else hi = pos - 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] data = {10, 20, 30, 40, 50, 60, 70, 80, 90};
        int key = 60;
        int result = interpolationSearch(data, key);
        System.out.println("Исходный массив: " + java.util.Arrays.toString(data));
        if (result != -1)
            System.out.println("Элемент " + key + " найден на позиции " + result);
        else
            System.out.println("Элемент " + key + " не найден");
    }
}
