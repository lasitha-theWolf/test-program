import java.util.Scanner;
public class input{
	
	public static void main(String args[]){
	
	int length;
	int width;
	float cal;
	Scanner myScanner = new Scanner(System.in);
	System.out.print("Enter the legth :");
	length = myScanner.nextInt();

	System.out.print("Enter the width :");
	width = myScanner.nextInt();
	

	cal = (float)(length * width)/2;

	System.out.print("Cal = " +cal);	
	               
	
}
}