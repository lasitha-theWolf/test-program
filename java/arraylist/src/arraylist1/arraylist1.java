package arraylist1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class arraylist1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		ArrayList<String> arl1 = new ArrayList<>();
		
		arl1.add("kamal");
		arl1.add("pakaya");
		arl1.add("utto");
		
		
		System.out.println(arl1);
		System.out.println("size of the ArrayList : "+arl1.size()+"\n");
		
		
		//arraylsit eke tiayana value eka delete krnna meken plwn
		arl1.remove(1);
		
		//arraylist eke tiayana value ekin eka print wenw
		Iterator itr = arl1.iterator();
		
		while(itr.hasNext()) { //check for the next elements
			System.out.println("list : "+itr.next());
		}
		
		//sort  (e kiynne ekama wachana tiayana arralist eka labata avith print wenw
		
		arl1.add("pakaya");
		arl1.add("utto");
		
		Collections.sort(arl1);
		
		
		System.out.println("collections : "+arl1);
		
		

	}

}
