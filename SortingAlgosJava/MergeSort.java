package JavaSortingAlgos;

public class MergeSort {
    public void mergeSort(int[] arr,int start,int end){
        if(start>=end) return;
        int mid = (start+end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start,mid, end);
    }

    public void merge(int[] arr,int start,int mid,int end){
        int[] leftarr = new int[mid-start+1];
        int[] rightarr = new int[end-mid];
        for(int i = 0 ; i <leftarr.length;++i){
            leftarr[i] = arr[start+i];
        }
        for(int i = 0 ; i < rightarr.length;++i){
            rightarr[i] = arr[mid+i+1];
        }
        int i = 0 , j = 0 ,k = start;
        while(i < leftarr.length && j < rightarr.length){
            if(leftarr[i]<rightarr[j]){
                arr[k]=leftarr[i];
                ++i;
            }else{
                arr[k]=rightarr[j];
                ++j;
            }
            ++k;
            }
            while (i<leftarr.length) {
                arr[k]=leftarr[i];
                ++i;
                ++k;
            }
            while (j<rightarr.length) {
                arr[k]=rightarr[j];
                ++j;
                ++k;
            }
        }
}
