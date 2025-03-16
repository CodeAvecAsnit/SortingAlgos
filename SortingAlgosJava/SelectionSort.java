package JavaSortingAlgos;

public class SelectionSort {
    public void selectionSort(int[] arr){
        for(int i = 0 ; i < arr.length-1;++i){
            int small = i;
            for(int j = i+1;j<arr.length;++j){
                if(arr[small]>arr[j]){
                    small = j;
                }
            }
            if(small!=i){
                int temp = arr[i];
                arr[i]=arr[small];
                arr[small]=temp;
            }
        }
    }
}
