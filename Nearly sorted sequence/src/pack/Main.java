package pack;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code her

        Scanner q = new Scanner (System.in);
        int n = q.nextInt();
        int[] a = new int[n+10];

        for (int i = 1; i <= n; i++) {
            a[i] = q.nextInt();
        }

        for(int i = 2; i <= n; ++i){
            int j = i -1;
            int k = a[i];
            while(k < a[j] && j > 0){
                int y = a[j+1];
                a[j+1] = a[j];
                a[j] = y;
                j--;
            }

        }

        for(int i = 1; i <= n; ++i)
            System.out.print(a[i] + " ");
    }
}
