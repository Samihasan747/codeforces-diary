import java.util.*;
 
public class Maximum{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt=1,maxx=1;
        int[] arr = new int[n];
 
        for(int i=0 ; i<n ; i++){
            arr[i] = sc.nextInt();
        }
 
 
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i] < arr[i+1]){
                cnt++;
            }else{
                cnt=1;
            }
 
            if(cnt > maxx){
                maxx = cnt;
            }
        }
 
        System.out.println(maxx);
 
        sc.close();
    }
}