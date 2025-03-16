package JavaSortingAlgos;

import java.util.Random;

public class RandomizedQuickSort {
    public void quickSort(int[] arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int pivot = randomPivot(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }

    private int randomPivot(int[] arr, int left, int right) {
        Random random = new Random();
        int pivotIndex = random.nextInt(right - left + 1) + left;
        swap(arr, pivotIndex, right);
        int pivotValue = arr[right];
        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] < pivotValue) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, right);
        return i + 1;
    }

    private void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}