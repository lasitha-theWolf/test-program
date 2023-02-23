package overloading;

public class Emloyee {
	
	int empID;
	String name;
	String degree;
	
	
	public Emloyee(int empID, String name, String degree) {
		super();
		this.empID = empID;
		this.name = name;
		this.degree = degree;
	}
	
	public Emloyee(int empID, String name) {
		
		this.empID=empID;
		this.name=name;
		
	}
	
	

}
