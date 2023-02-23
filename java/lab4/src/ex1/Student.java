package ex1;

public class Student {
	
	
	int studentID;
	private String name;
	private String degree;
	private String mobile;
	
	private static int max=100;
	
	
	
	public Student(String name, String degree, String mobile) {
		
		
		this.name = name;
		this.degree = degree;
		this.mobile = mobile;
	}
	
	
	public static int getNextStudentID(){
		
		return max++;
		
	}

	public String getName() {
		return name;
	}


	public String getDegree() {
		return degree;
	}



	public String getMobile() {
		return mobile;
	}


	public void print() {
		
		System.out.println("Student ID :"+getNextStudentID());
		System.out.println("Student name :"+getName());
		System.out.println("Student degree :"+getDegree());
		System.out.println("Student mobile :"+getMobile());
	}

}
