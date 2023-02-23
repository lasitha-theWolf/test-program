package ex1;

public class StudentApp {
	
	public static void main(String args[]){
		
		int i;
		
		Student studentarray[] = new Student[5];
		
		
		for(i=0; i<5; i++) {
		
		studentarray[i] = new Student("kamal","it","54545454");
		studentarray[i].print();
		System.out.println();
		
	
	}
	}

}
