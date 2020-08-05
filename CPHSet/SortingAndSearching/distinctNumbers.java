import java.util.Arrays;
import java.util.Scanner;

public class distinctNumbers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        for(int i = 0; i < n; i++) x[i] = sc.nextInt();
        Arrays.sort(x);
        int count = 1;
        for(int i = 0; i < n-1; i++){
            if (x[i+1] != x[i]) count++;
        }
        System.out.println(count);
    }
}
