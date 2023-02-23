package paperA;

import java.util.ArrayList;

public class Tcalculation <T extends Number>{
	
	ArrayList<T> numList = new ArrayList<>();
	
	public void append(T value) {
		numList.add(value);
		
	}
	public void average(T value) {
		double tot = 0 ;
		
		for(T value : numList) {
			tot += value.doubleValue();
		}
		
		return tot/numList.size();
		
	}
	
}
