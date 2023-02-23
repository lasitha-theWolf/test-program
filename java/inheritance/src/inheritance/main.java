package inheritance;

public class main {
	public static void main(String args[]) {
		
		car c1 = new car();
		bike b1 =  new bike();
		van van1 = new van();
		
		c1.start();
		c1.accelerate();
		c1.vehicleBreak();
		c1.showCarDetails();
		System.out.println();
		
		
		b1.start();
		b1.accelerate();
		b1.vehicleBreak();
		b1.showBikeDetails();
		System.out.println();
		
		van1.start();
		van1.loadVan();
		System.out.println();
		

		
	}
}
