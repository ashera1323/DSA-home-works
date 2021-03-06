package pack;

import java.util.*;

    public class Main {
        public static void main(String[] args) {
            Scanner scan = new Scanner(System.in);
            String s = scan.nextLine();
            Stack<Character> st = new Stack<Character>();
            int[] prior = new int[1000];
            prior['+'] = 2;
            prior['-'] = 2;
            prior['*'] = 3;
            prior['/'] = 3;
            for(int i = 0; i<s.length(); i++){
                if (s.charAt(i) == ' ')
                    continue;
                if(s.charAt(i) <= 57 && s.charAt(i) >= 48) {
                    System.out.print(s.charAt(i));
                    if(i+1 != s.length()  && s.charAt(i+1) <= 57 && s.charAt(i+1) >= 48)
                        continue;
                    else
                        System.out.print(" ");
                }

                else if (s.charAt(i) == '(')
                    st.push(s.charAt(i));

                else if(s.charAt(i) == ')'){
                    while(st.peek()!= '('){
                        System.out.print(st.peek() + " ");
                        st.pop();
                    }
                    st.pop();
                }

                else{
                    while(!st.empty() && st.peek() != '(' && prior[st.peek()] >= prior[s.charAt(i)]){
                        System.out.print(st.peek() + " ");
                        st.pop();
                    }
                    st.push(s.charAt(i));
                }
            }

            while(!st.empty()){
                System.out.print(st.peek() + " ");
                st.pop();
            }
        }
    }
