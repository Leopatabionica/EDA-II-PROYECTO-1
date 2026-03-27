public class MergeSort {

    public static int operaciones = 0;

    static void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    static void merge(int arr[], int left, int mid, int right) {

        //System.out.println("Nueva iteración: ");
        //System.out.println("left =" + left + "mid =" + mid + "right = " + right);


        int n1 = mid - left + 1;
        int n2 = right - mid;

        int L[] = new int[n1];
        int R[] = new int[n2];

        for (int i = 0; i < n1; ++i){
            L[i] = arr[left + i];
            operaciones++;
        }
        for (int j = 0; j < n2; ++j){
            R[j] = arr[mid + 1 + j];
            operaciones++;
        }

        int i = 0, j = 0;

        int k = left;
        while (i < n1 && j < n2) {
            operaciones++;

            if (L[i] <= R[j]) {
                operaciones++;
                arr[k] = L[i];
                operaciones++;
                i++;
            } else {
                operaciones++;
                arr[k] = R[j];
                operaciones++;
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = L[i];
            operaciones++;
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = R[j];
            operaciones++;
            j++;
            k++;
        }

        //System.out.print("Resultado de la iteración: ");
        //printArray(arr);
    }

    static void mergeSort(int arr[], int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }
    }
}
