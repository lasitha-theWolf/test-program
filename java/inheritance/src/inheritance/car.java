package inheritance;

public class car extends vehicle {
	int doors;
	
	public void showCarDetails() {
		vehicleName = "toyoto";
		color = "red";
		wheels = 4;
		seats =5;
		doors=4;
		
		System.out.println("Loading car...");
		System.out.println("Car name : "+vehicleName);
		System.out.println("Car color : "+color);
		System.out.println("NUm of wheels : "+wheels);
		System.out.println("Seats : "+seats);
		System.out.println("Doors : "+doors);
		
	}
}
