
public class HumiditySensor implements ISensor{

	String senor;
	
	public HumiditySensor(String senor) {
		super();
		this.senor = senor;
	}

	@Override
	public void on() {
		// TODO Auto-generated method stub
		System.out.println(" HumiditySensor switch on" );
		
	}

	@Override
	public void off() {
		// TODO Auto-generated method stub
		System.out.println(" HumiditySensor switch off" );
		
	}
	

}
