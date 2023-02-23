#include <iostream>
using namespace std;

class student {
private:
	int mark1;
	int mark2;
	int mark3;

public:
	void setMark(int m1, int m2, int m3);
	float calAvg();
};
void student::setMark(int m1, int m2, int m3) {
	mark1 = m1;
	mark2 = m2;
	mark3 = m3;

}
float student::calAvg() {
	float avg;
	avg = (float)(mark1 + mark2 + mark3) / 3;
	return avg;
}
int main()
{
	student s1, s2;

	s1.setMark(12, 123, 43);
	s2.setMark(23, 324, 21);

	cout << "1st student avg = " << s1.calAvg() << endl;
	cout << "2nd student avg =" << s2.calAvg() << endl;

	return 0;
}