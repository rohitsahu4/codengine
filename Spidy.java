import java.util.Scanner;
public class Birthday{
  public static int birthday(int s[],int d,int m){
    int count=0;
    for(int i=0;i<s.length;i++){
      int loopcount =1,sum=0;
      for(int j =i;loopcount<=m &&j<s.length;j++){
        sum = sum + s[j];
        if(loopcount==m && sum ==d ){
          count++;
          break;
        }
        loopcount++;
      }
      }
      return count;
  }
  public static void main(String args[]){
    int n,date,month;
    Scanner in = new Scanner(System.in);
    System.out.println("Enter the number of squares in the chocolate bar");
    n = in.nextInt();
    int s[] = new int[n];
    System.out.println("Enter the numbers on the Chocolate square wave");
    for(int i = 0; i<n;i++){
      s[i] = in.nextInt();
    }
    System.out.println("Enter date and months");
    date = in.nextInt();
    month = in.nextInt();
    System.out.println(birthday(s,date,month));
  }
}
