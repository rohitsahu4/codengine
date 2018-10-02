//solution for birthday problem by sumit
import java.util.Scanner;
class Birthday {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    System.out.println("enter number of square");
    int n = in.nextInt();
    System.out.println("enter number");
    int x[] = new int[n];
    for(int i=0;i<n;i++){
      x[i] = in.nextInt();
    }
    System.out.println("enter date and month");
    int date,month;
    date = in.nextInt();
    month = in.nextInt();

    int sum=0,count=0,loopcount=0;
    for(int j=0;j<n;j++){
      for(int i= j;i<month+j;i++){
        if(i>=n){break;}
        sum= sum+x[i];
        loopcount++;
      }
      if(sum==date && loopcount==month ){
        count++;
      }
      sum=0;
      loopcount=0;
    }
    System.out.println("possible way to serve");
    System.out.println(count);
  }
}

