
public interface animale {
	
	//interface ekk abstract ekk wenw wgema static class ekkuth wenw
	//eka nisa object ekk hdnna baa
	
	void talk();
	void run();
	
	default void newmethod() {
		//default and static method vitri run wenne interface ekk athule
		
		System.out.println("Interface eke default eka run wenw utto");
	}
	static void newstatic() {
		System.out.println("Static eka utto");
	}

}
