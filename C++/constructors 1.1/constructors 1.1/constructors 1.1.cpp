#include <iostream>
using namespace std;

class recta {
private:
	int width;
	int lengeth;
public :
	recta();
	recta(int l, int w);
	void setrecta();
	void display();
	int getwidth();
	int getlegth();
};
recta::recta() {
	lengeth = 0;
	width = 0;

}
recta::recta(int l, int w) {
	lengeth = l;
	width = w;

}
void recta::display() {
	cout << lengeth << endl << width << endl;
}
int recta ::getwidth() {

	return width;
	
}
int recta ::getlegth() {

	return lengeth;

}
int main() {
	recta rec1;
	recta rec2(12, 43);
	rec1.display();
	rec2.display();
	cout << endl << endl << "1st width : " << rec1.getwidth() << endl;
	cout << endl << endl << "1st lengeth : " << rec1.getlegth() << endl<<endl;

	cout << endl << endl << "2st width : " << rec2.getwidth() << endl;
	cout << endl << endl << "2st lengeth : " << rec2.getlegth() << endl << endl;



	return 0;
}