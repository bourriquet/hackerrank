import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Map<String, String> tel = new HashMap<String, String>();
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i = 0; i < n; i++){
            String name = in.next();
            String phone = in.next();
            
            tel.put(name, phone);
        }
        while(in.hasNext()){
            String s = in.next();
            String num = tel.get(s);
            
            System.out.println((num != null) ? s + "=" + num : "Not found");
        }
        in.close();
    }
}
