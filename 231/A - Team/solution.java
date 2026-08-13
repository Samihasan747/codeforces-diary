import java.util.Scanner;
 
public class Team {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num, a, b, c, count = 0;
 
        num = scan.nextInt();
 
        for (int i = 0; i < num; i++) 
        {
            a = scan.nextInt();
            b = scan.nextInt();
            c = scan.nextInt();
            if (a + b + c > 1) {
                count = count + 1;
            } 
        }
        System.out.println(count);
    }
}