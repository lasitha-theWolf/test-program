package inheritance;

public class bike extends vehicle {
	
	int year;
	public void showBikeDetails() {
		vehicleName = "honda";
		color = "red";
		wheels = 2;
		seats =1;
		year = 2002;
		
		System.out.println("Loading bike...");
		System.out.println("Car name : "+vehicleName);
		System.out.println("Car color : "+color);
		System.out.println("NUm of wheels : "+wheels);
		System.out.println("Seats : "+seats);
		System.out.println("Year : "+year);
		
		
	}

}
