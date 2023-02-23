
public class employee extends company {
	
	int emid;
	String name;
	
	public void print(int emid, String name) {
		this.emid =emid;
		this.name =name;
		
		System.out.println("Company name : "+cname+ "Employee id : "+emid+"Name : "+name);
		
	}

}
