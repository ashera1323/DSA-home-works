package pack;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        Stack<Character> ans = new Stack<Character>();
        Stack<Character> q = new Stack<Character>();
        Stack<Character> st = new Stack<Character>();
        Stack<Integer> rev = new Stack<Integer>();

        int[] prior = new int[1000];
        prior['+'] = 2;
        prior['-'] = 2;
        prior['*'] = 3;
        prior['/'] = 3;
        for(int i = 0; i<s.length(); i++){
            if (s.charAt(i) == ' ')
                continue;
            if(s.charAt(i) <= 57 && s.charAt(i) >= 48) {
                ans.push(s.charAt(i));
                if(i+1 != s.length()  && s.charAt(i+1) <= 57 && s.charAt(i+1) >= 48)
                    continue;
                else
                    ans.push(' ');
            }

            else if (s.charAt(i) == '(')
                st.push(s.charAt(i));

            else if(s.charAt(i) == ')'){
                while(st.peek()!= '('){
                    ans.push(st.peek());
                    ans.push(' ');
                    st.pop();
                }
                st.pop();
            }

            else{
                while(!st.empty() && st.peek() != '(' && prior[st.peek()] >= prior[s.charAt(i)]){
                    ans.push(st.peek());
                    ans.push(' ');
                    st.pop();
                }
                st.push(s.charAt(i));
            }
        }

        while(!st.empty()){
            ans.push(st.peek());
            ans.push(' ');
            st.pop();
        }

        while(!ans.empty()){
            q.push(ans.peek());
            ans.pop();
        }

        while(!q.empty()){
            char y = q.peek();
            int n = 0;
            if(y <= 57 && y >= 48){
                while(y <= 57 && y >= 48){
                    n = n * 10;
                    n = n + (y - '0');
                    q.pop();
                    y = q.peek();
                }
                rev.push(n);
            }
            if(q.peek() == '+'){
                int a = rev.peek();
                rev.pop();
                int b = rev.peek();
                rev.pop();
                a = a + b;
                rev.push(a);
            }

            if(q.peek() == '-'){
                int a = rev.peek();
                rev.pop();
                int b = rev.peek();
                rev.pop();
                a = b - a;
                rev.push(a);
            }

            if(q.peek() == '*'){
                int a = rev.peek();
                rev.pop();
                int b = rev.peek();
                rev.pop();
                a = a * b;
                rev.push(a);
            }

            if(q.peek() == '/'){
                int a = rev.peek();
                rev.pop();
                int b = rev.peek();
                rev.pop();
                a = b / a;
                rev.push(a);
            }
            q.pop();
        }
        System.out.print(rev.peek());
    }
}


