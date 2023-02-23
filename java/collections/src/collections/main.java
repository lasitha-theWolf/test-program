package collections;

import java.util.ArrayList;
import java.util.Iterator;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayList<parent> arl= new ArrayList<>();
		
		parent p1 = new parent(12,232,32);
		parent p2 = new parent(21,32,34);
		
		arl.add(p1);
		arl.add(p2);
		
		Iterator itr= arl.iterator();
		
		while(itr.hasNext()) {
			
			System.out.println(((parent)itr.next()).a);
			
		}
		
		
		

	}

}
