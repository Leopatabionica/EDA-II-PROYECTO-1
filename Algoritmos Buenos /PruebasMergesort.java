import java.util.Random;

public class PruebasMergesort{

    public static void main(String args[]){

        for(int n =100; n<=5000; n+= 100)
        {
            int[] arr = generarArreglosAleatorio(n);

            MergeSort.operaciones = 0;

            MergeSort.mergeSort(arr, 0, arr.length - 1);

            System.out.println("n= " + n + " -> operaciones = " + MergeSort.operaciones);

        }
    }

    static int[] generarArreglosAleatorio(int n){
        int[] arr = new int[n];
        java.util.Random rand = new java.util.Random();

        for(int i =0; i<n; i++){
            arr[i] = rand.nextInt(2500);
        }
        return arr;
    }
}
