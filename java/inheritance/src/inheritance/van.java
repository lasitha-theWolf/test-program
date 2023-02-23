package inheritance;

public class van extends vehicle{
	int doors;
	int capacity;
	
	
	public void loadVan() {
		vehicleName = "honda";
		color = "red";
		wheels = 2;
		seats =1;
		capacity = 2000;
		
		
		System.out.println("Car name : "+vehicleName);
		System.out.println("Car color : "+color);
		System.out.println("NUm of wheels : "+wheels);
		System.out.println("Seats : "+seats);
		System.out.println("Capacity : "+capacity);
		
		
	}

}
