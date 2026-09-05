// n x ( n = no of child x = max wt carray)
// array no of wt 
// 2 seat x<=
// n = 10 x = 15
// 9 8 8 9 10 8 5 8 7 10

//5 7 8 8 8 8 9 9 10 10
import java.util.*;
public class Main {
    
    
    static int solve(int[] arr, int N, int X) {
       
        int l = 0, h = N - 1;
        int ans = 0;
        while (l<=h) {
            
            if (arr[l] + arr[h] <= X) {
                ans++;
                l++;
                h--;
            }else { 
                ans++;
                h--;
            }
        }
        return ans;
        
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int X = sc.nextInt();
        
        int[] arr = new int[N];
        
        for(int i = 0;i < N;i++) {
            arr[i] = sc.nextInt();
        }
         Arrays.sort(arr);
       
        System.out.println(solve(arr, N, X));
    }
    
}