package paperA;

public class SatelliteDemo {

	public static void main(String[] args) {
		
		
		 ISatellite navigationSatellite = new NavigationSatellite("Ravana-01");
		 IGeoLocation locationTracker1 = new SatelliteLocation("Sri lanka");
		 ISatellite droneSatellite = new DroneSatellite("Ravana-02");
		 IGeoLocation locationTracker2 = new SatelliteLocation("Russian");
		 
		 ISatellite[] satelliteArray = new ISatellite[] {navigationSatellite,droneSatellite};
		 IGeoLocation[] trackerArray = new IGeoLocation[] {locationTracker1,locationTracker2};
		 
		 SatelliteCenter satelliteCenter = new SatelliteCenter(0,satelliteArray,trackerArray);
	}

}
