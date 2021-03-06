package pack;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        Map<String, Integer> m = new LinkedHashMap<String, Integer>();
        for(int i = 1; i<=n; i++){
            String s = scan.next();
            if(m.containsKey(s)){
                int val = m.get(s);
                val = val + 1;
                m.put(s, val);
            }
            else{
                m.put(s, 1);
            }
        }
        Map<String, Integer> sm = sort(m);

        for (Map.Entry<String, Integer> entry : sm.entrySet())
            System.out.println(entry.getKey() + " " + entry.getValue());
    }

    private static Map<String, Integer> sort(Map<String, Integer> sm) {
        List<Map.Entry<String, Integer>> list = new LinkedList<Map.Entry<String, Integer>>(sm.entrySet());

        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                if(o1.getValue() == o2.getValue())
                    return (o1.getKey()).compareTo(o2.getKey());
                else
                    return (o2.getValue()).compareTo(o1.getValue());
            }
        });

        Map<String, Integer> smm = new LinkedHashMap<String, Integer>();

        for (Map.Entry<String, Integer> entry : list)
            smm.put(entry.getKey(), entry.getValue());
        return smm;
    }
}

