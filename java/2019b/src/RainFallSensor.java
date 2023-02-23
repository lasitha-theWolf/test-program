
public class RainFallSensor implements ISensor {
	
	String name;
	
	public RainFallSensor(String name) {
		super();
		this.name = name;
	}

	@Override
	public void on() {
		// TODO Auto-generated method stub
		System.out.println("Rain Fall sensor switch on");
	}

	@Override
	public void off() {
		// TODO Auto-generated method stub
		System.out.println("Rain Fall sensor switch off");
	}

}
