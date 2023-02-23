package input;
import java.util.Scanner;

public class input {
	
	public void main(String args[]) {
		
		Scanner getinput = new Scanner(System.in);
		
		System.out.println("Enter your name : ");
		
		String name = getinput.next();
		
		System.out.println("Enter the age : ");
		int age = getinput.nextInt();
		
		System.out.println("Name : "+name+"\n Age : "+age);
	}
}
