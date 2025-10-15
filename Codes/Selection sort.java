public class SelectionSortNew {
    public static void sort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minPos]) {
                    minPos = j;
                }
            }
            int tmp = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = tmp;
        }
    }

    public static void main(String[] args) {
        int[] data = {45, 29, 6, 18, 33};
        System.out.println("До сортировки: " + java.util.Arrays.toString(data));
        sort(data);
        System.out.println("После сортировки: " + java.util.Arrays.toString(data));
    }
}
