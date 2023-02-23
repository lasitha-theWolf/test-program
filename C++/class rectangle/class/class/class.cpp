#include <iostream>
using namespace std;

class rectangle
{
private :
	int width;
	int length;

public :
	void setWidth(int no1);
	void setLenght(int no2);
	int calArea();
};
void rectangle :: setWidth(int no1)
{
	width = no1;
}
void rectangle:: setLenght(int no2)
{
	length = no2;
}
int rectangle::calArea()
{
	int area;
	area = width * length;

	return area;
}
int main()
{
	rectangle rec1, rec2;
	int w1, w2, l1, l2;
	cout << "Enter 1st rec width:";
	cin >> w1;
	rec1.setWidth(w1);
	cout << "Enter 1st rec length:";
	cin >> l1;
	rec1.setWidth(l1);

	cout << "Enter 2st rec length:";
	cin >> l2;
		rec2.setLenght(l2);

	cout << "Enter 2st rec width:";
	cin >> w2;
	rec2.setLenght(w2);

	cout << "rec1 area:" << rec1.calArea()<<endl;
	cout << "rec2 area:" << rec2.calArea() << endl;

	return 0;



	
}