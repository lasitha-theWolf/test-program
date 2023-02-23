package polymorphism;

class bike{
	
	void run() {
		System.out.println("Bike is runnning");
	}
	
	
}
class yamaha extends bike{
	void run() {
		System.out.println("yamaha running");
	}
}


public class main {

	public static void main(String[] args) {
		//polyee = many morphism= forms
		
		bike b =new yamaha(); //upcasting method
		

	}

}
