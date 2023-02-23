#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class GuestVoter {
private :
	char name[20];
	string pWord;
	int num;
	string mail;
	string fb;

public :

	GuestVoter(char Uname[20], string pw, int pNum, string Umail);
	void setFeedback(string add);
	~GuestVoter();

};
GuestVoter::GuestVoter(char Uname[20], string pw, int pNum, string Umail) {
	strcpy(name, Uname);
	pWord = pw;
	num = pNum;
	mail = Umail;
}
void GuestVoter::setFeedback(string add) {
	fb = add;
}
GuestVoter :: ~GuestVoter() {
	cout << "Guest Voter destructor running"<<endl;
}
int main() {

	GuestVoter* g1;

	g1 = new GuestVoter("Nethi", 123456, 076451445, "nethisha@gmail.com");


	g1->setFeedback("Good");

	delete g1;

	return 0;


}