package pack;
import java.util.*;

public class Main {
    static int n,W;

    static int max(int a, int b){
        if(a > b)
            return a;
        return b;
    }

    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();

        Stack<Integer> st = new Stack<>();

        int[] w = new int[2000];
        int[] c = new int[2000];
        int[][] dp = new int[2000][10200];

        W = scan.nextInt();
        for(int i = 1; i <= n ; ++i)
            w[i] = scan.nextInt();

        for(int i = 1; i <= n; ++i)
            c[i] = scan.nextInt();


        for(int i = 1 ; i <= n; ++i){
            for(int j = 0; j <= W; ++j){
                if(w[i] > j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+ c[i]);
            }
        }

        int y = W;
        for(int i = n; i > 0; i --){
            if(y >= w[i])
                if(dp[i-1][y-w[i]] + c[i] == dp[i][y]){
                    st.push(i);
                    y -= w[i];
                }
        }

        System.out.println(st.size());

        while(!st.isEmpty()){
            System.out.print(st.peek() + " ");
            st.pop();
        }
    }
}