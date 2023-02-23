#include <iostream>
using namespace std;

class student {
private:
	string name;
	int id;

public:
	student();    // constructor part 
	void setdetails(string a, int b);
	void display();
};
student::student() {
	cout << "Student details" << endl;    // constructor part
}
void student::setdetails(string a, int b) {
	name = a;
	id = b;
}
void  student::display() {
	cout << "name : " << name << endl;
	cout << "ID : " << id << endl<<endl;
}
int main() {

	student s1;     

	s1.setdetails("pakaya", 123231);
	s1.display();

	student s2;                                //object ekak hadana hamaparama constructor eka run wela eke tiyana eka display wenwa
	//s2.setdetails("Hutta", 1232);
//	s2.display();

	return 0;
}
