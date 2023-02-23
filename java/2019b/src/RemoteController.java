
public class RemoteController {
	
	private int Switch;
	private ISensor[] ISensor;
	private IMotionTracker[] IMotionTracker;
	
	public RemoteController(int switch1, ISensor[] iSensor, IMotionTracker[] iMotionTracker) {
		
		Switch = switch1;
		ISensor = iSensor;
		IMotionTracker = iMotionTracker;
	}
	
	
	public int getSwitch() {
		return Switch;
	}


	public void setSwitch(int switch1) {
		Switch = switch1;
	}


	public ISensor[] getISensor() {
		return ISensor;
	}


	public void setISensor(ISensor[] iSensor) {
		ISensor = iSensor;
	}


	public IMotionTracker[] getIMotionTracker() {
		return IMotionTracker;
	}


	public void setIMotionTracker(IMotionTracker[] iMotionTracker) {
		IMotionTracker = iMotionTracker;
	}


	public void startService() {
		
		if(this.Switch==0) {
			ISensor[0].on();
			
		}
		else {
			ISensor[1].off();
		}

	}
	public void stopService() {
		ISensor[0].off();
		
	}
	
	public void locationService() {
		IMotionTracker[0].displayLocation();
	}
	
	

}
