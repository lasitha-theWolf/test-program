#include <iostream>
using namespace std;

class rectangel {
private:

	int width;
	int height;

public:
	void setwidth(int w1);
	void setheight(int h1);
	int calArea();
};

void rectangel::setwidth(int w1) {
	width = w1;
}
void rectangel::setheight(int h1) {
	height = h1;
}
int rectangel::calArea() {
	int area = width * height;
	return area;
}
int main()
{
	rectangel rec1, rec2;

	rec1.setheight(10);
	rec1.setwidth(20);

	rec2.setheight(120);
	rec2.setwidth(220);

	cout <<"First Rectangle area = " << rec1.calArea() << endl;
	cout <<" First Rectangle area = "<< rec2.calArea() << endl;

	return 0;


}