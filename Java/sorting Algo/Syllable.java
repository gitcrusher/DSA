import java.util.*;
public class Syllable {
    public static int syllable(String d) {
        char e[] ={'a','i','e','o','u'};
        for(int i= 0;i < d.length();i++){
            for(int j = 0 ; i< 5; j++){
                if(d.CharAt(j)==e[i]){
            }
    }
}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine().trim();
        String b = sc.nextLine().trim();
        String c = sc.nextLine().trim();
        int n = syllable(a);
        int m = syllable(b);
        int l = syllable(c);
        
        sc.close();
    }
}
