import java.util.*;
public class MinimalSquare {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
 
        while(t>0){
                int x = sc.nextInt();
                int y = sc.nextInt();
                int a,b;
                    if(x > y){
                        a = x;
                        b = y;
                    }else{
                        a = y;
                        b = x;
                    }
 
                    if(a>2*b){
                        System.out.println(a*a);
                    }else{
                        System.out.println(2*b*2*b);
                    }
                
                t--;
            }
            sc.close();
        }
}