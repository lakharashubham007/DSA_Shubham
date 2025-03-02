import java.util.*;
import java.lang.*;
import java.io.*;


public class Main {
    public static void main(String[] args) {  
        int[] arr = {1, 2, 3, 4, 5, 6, 7, 8};

        int size = arr.length;

        int maxNum = Integer.MIN_VALUE;

        for(int i = 0; i < size; i++) {  
            if(arr[i] > maxNum) {
                maxNum = arr[i];
            }
        }

        System.out.println("Max num in array is " + maxNum);
    }
}
