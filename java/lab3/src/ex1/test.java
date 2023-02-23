package ex1;

public class test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Student s1 = new Student("lasitha", "re123123","malabe");
		//s1.name ="lasitha";
		//s1.ditno ="it2112";
		//s1.address="123321sad";   //student eke variable dala tiayana nisa mekata gnna plwn.
		                           //private variable kiyla dala tibboth gnna baa
		                                                                                                   
		Student s2 = new Student("dil","ew31223","matale");
		//s2.name ="dilshan";
		//s2.ditno="23223";
		//s2.address ="312312fsd";
		
		//print value
		
		System.out.println("name : "+s1.name+"\n ditno :"+s1.ditno+" \n address :"+s1.address);
		System.out.println("name : "+s2.name+"\n ditno :"+s2.ditno+" \n address :"+s2.address);
		
	}

}
