
public class RainFaiiSensor implements ISensor{
		
	String senor;
	
	public RainFaiiSensor(String senor) {
		
		this.senor = senor;
	}

	@Override
	public void on() {
		// TODO Auto-generated method stub
		System.out.println("RainFaiiSensor switch on" );
		
	}

	@Override
	public void off() {
		// TODO Auto-generated method stub
		System.out.println("Rain Fall sensor switch off");
		
	}
	
	

}
