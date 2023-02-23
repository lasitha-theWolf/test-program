class EM{
	String name;
	static String managerName;
	static int worikngHours;
	
	public void display() {
		
		System.out.println("Emloyee name : " +this.name);
		System.out.println("Manager name : "+managerName);
	}
	public static void showWorkHours() {
		System.out.println("Working hours : "+worikngHours);
	}
}

public class Employee {
	
	public static void main(String args[]) {
		
		EM.managerName = "Mr. janith";
		
		EM e1 = new EM();
		
		e1.name = "kalana";
		
		EM e2 = new EM();
		EM.worikngHours =60;
		e2.name = "lasitha";
		
		e1.display();
		System.out.println();
		e2.display();
		System.out.println();
		EM.showWorkHours();
		
		
	}
}

