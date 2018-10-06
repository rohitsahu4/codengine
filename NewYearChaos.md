import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the minimumBribes function below.
    static void minimumBribes(int[] q) {
        int n = q.length;
        int count = 0;
        int dif = 0;
        for(int i = 0; i < n; i++){
            if(q[i] == n){
                dif = (n-1) - i;
                switch(dif)
                {
                    case 0:
                        n--;
                        i = -1;
                        break;
                    case 1:
                        q[i] = q[i+1];
                        q[i+1] = n;
                        count++;
                        n--;
                        i = -1;
                        break;
                    case 2:
                        q[i] = q[i+1];
                        q[i+1] = q[i+2];
                        q[i+2] = n;
                        count += 2;
                        i = -1;
                        n--;
                        break;
                    default:
                        System.out.println("Too chaotic");
                        return;
                    }
            }
            if(n == 0)
                    break;

        }
        System.out.println(count);
        return;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] q = new int[n];

            String[] qItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int i = 0; i < n; i++) {
                int qItem = Integer.parseInt(qItems[i]);
                q[i] = qItem;
            }

            minimumBribes(q);
        }

        scanner.close();
    }
}
