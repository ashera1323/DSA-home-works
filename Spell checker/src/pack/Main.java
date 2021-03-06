package pack;

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), t = 0;
        Map<String, Integer> m = new LinkedHashMap<String, Integer>();
        for(int i = 1; i<=n; i++){
            String s = scan.next();
            if(!m.containsKey(s)) {
                t++;
                m.put(s, t);
            }
        }
        Map<String, Integer> sm = sort(m);

        int k = scan.nextInt(), l = 0;
        Map<String, Integer> mm = new LinkedHashMap<String, Integer>();
        for(int i = 1; i<=k; i++){
            String s = scan.next();
            if(!m.containsKey(s)) {
                l++;
                t++;
                mm.put(s, l);
                m.put(s,t);
            }
        }

        Map<String, Integer> sk = sort(mm);
        System.out.println(l);
        for (Map.Entry<String, Integer> entry : sk.entrySet())
            System.out.println(entry.getKey());
    }

    private static Map<String, Integer> sort(Map<String, Integer> sm) {
        List<Map.Entry<String, Integer>> list = new LinkedList<Map.Entry<String, Integer>>(sm.entrySet());

        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                if(o1.getValue() == o2.getValue())
                    return (o1.getKey()).compareTo(o2.getKey());
                else
                    return (o1.getValue()).compareTo(o2.getValue());
            }
        });

        Map<String, Integer> smm = new LinkedHashMap<String, Integer>();

        for (Map.Entry<String, Integer> entry : list)
            smm.put(entry.getKey(), entry.getValue());
        return smm;
    }
}
