import java.util.Scanner;

public class input2{

	
	public static void main(String args[]){

		
	int num1;
int num2;
int num3;
	int max,min;
	Scanner my = new Scanner(System.in);
	
	System.out.print("Enter 1st num:");
	num1 = my.nextInt();
	System.out.print("Enter the 2nd num:");
	num2 = my.nextInt();
	System.out.print("Enter 3rd num:");
	num3 =my.nextInt();
	
	if(num1>num2){
		if(num1>num3){
		max = num1;
		if(num2>num3){
			min =num3;}
		else{
			min=num2;}
		
		}
		else{
			max = num3;
			min=num2;
	}
}
	else{
	if(num2>num3){
	max =num2;
	if(num1>num3){
		min=num3;}
	
}
	else{
	min=num1;
	}
else{
	max =num3;
	min =num1;}


}	
	}
}