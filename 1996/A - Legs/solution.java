import java.util.Scanner;
 
public class Legs {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
 
        int t = scan.nextInt();
        while(t>0){
            int n = scan.nextInt();
            int legs = 0;  
            
            legs+=n/4;
            n=n-(legs*4);
            legs+=n/2;
 
            System.out.println(legs);
            t--;
        }
        scan.close();
    }
}