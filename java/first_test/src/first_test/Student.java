package first_test;

public class Student {
	
	private int id;
	private String name;
	private double mark;
	
	public Student() {
		id =12121212;
		name ="lasitha";
		mark=21;
	}
	public Student(int id, String name, double mark) {
		this.id = id;
		this.name =name;  //this kiyana key word eka dnne attridute ekai variable ekai ekma namin dmma.this eka etkota dnne attridute ekata
		this.mark= mark;
	}
	
	public void show() {
		System.out.println("Your id is "+this.id);
		System.out.println("Your name is "+this.name);
		System.out.println("Your mark is "+this.mark);
 
	}
}
