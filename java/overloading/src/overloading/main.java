package overloading;

public class main {

	public static void main(String[] args) {
		
		Emloyee em1= new Emloyee(132312, "kamal", "se");
		Emloyee em2=new Emloyee(312312,"nimal");
		
		System.out.println("Id : "+em1.empID +" name :"+em1.name+" degree : "+em1.degree);
		System.out.println("Id : "+em2.empID +" name :"+em2.name);

	}

}
