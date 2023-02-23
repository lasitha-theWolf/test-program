package array;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String[] names = {"kamal", "ksun","pakaya","utto"};
		int[] marks= {12,321,13,123};
		
		System.out.println("First name : "+names[0]);
		System.out.println("Fist mark : "+marks[0]);
		System.out.println("Array length : " +names.length+"\n");
		
		int d;
		
		for(d=0; d<names.length;d++) {
			
			System.out.println("name : "+names[d]);
			System.out.println("mark : "+marks[d]);
		}
		
		//for each
		//meken wenne names kiyna eke ewwa eken eka i ekata yana eka
		
		for(String i:names) {
			
			System.out.println("New names :"+i);
			
			
		}

	}

}
