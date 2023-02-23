package paperA;

public class SatelliteCenter {
	
	private int option;
	private String[] Satellite;
	private String[] IGeoLocation;

	
	public SatelliteCenter(int option, String[] satellite, String[] iGeoLocation) {
		super();
		this.option = option;
		Satellite = satellite;
		IGeoLocation = iGeoLocation;
	}

	public SatelliteCenter(int option2, ISatellite[] satelliteArray, paperA.IGeoLocation[] trackerArray) {
		// TODO Auto-generated constructor stub
	}

	public void startService() {
		
		if(this.option == 0) {
			
			NavigationSatellite ns = new NavigationSatellite(null);
			ns.activate();
		}
		else {
			DroneSatellite ds = new DroneSatellite(null);
			ds.activate();
		}
		
	}
	
	public void stopService() {
		
		if(this.option == 0) {
			
			NavigationSatellite ns = new NavigationSatellite(null);
			ns.deactivate();
		}
		else {
			DroneSatellite ds = new DroneSatellite(null);
			ds.deactivate();
		}
		
	}
	
	public void locationService() {
		SatelliteLocation satelliteLocation = new SatelliteLocation(null);
		satelliteLocation.displayLocation();
	}
	
	
	
	
}
