package JavaSortingAlgos;

public class QuickSort {
    public void quickSort(int[] arr, int left, int right) {
        if(left>=right) return;
        int pivotElement = pivotIndex(arr,left,right);
        quickSort(arr, left, pivotElement-1);
        quickSort(arr, pivotElement+1, right);
    }
    private int pivotIndex(int[] arr, int start, int end) {
        int pivot = arr[end]; 
        int i = start, j = end - 1;
        while (i <= j) {  
            while (i <= j && arr[i] < pivot) { 
                ++i;
            }
            while (i <= j && arr[j] > pivot) { 
                --j;
            }
            if (i < j) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                ++i;
                --j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;

        return i;
    }
}
