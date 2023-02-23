package thread;

public class main {

	public static void main(String[] args) {
		
		
		Mythread t=new Mythread();
		t.start();
		
		for(int i=0;i<10;i++) {
			System.out.println("Insdie the main thread :"+i);
		}
		

	}

}
