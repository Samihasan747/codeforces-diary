import java.util.Scanner;
 
public class socks{
 
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int f,u;
 
        if(a > b)
        {
            f = b;
            u = (a-b)/2;
        }
        else
        {
            f = a;
            u = (b-a)/2;
        }
        System.out.print(f+" "+u);
        scan.close();
    }
}