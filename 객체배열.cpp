#include <iostream>
using namespace std;

class Circle {
private:
	int radius;//반지름
public:
	Circle() {
		radius = 2;
	}
	Circle(int r) {
		radius = r;

	}
	void setradius(int r) {
		radius = r;
	}
	double Area() {
		return 3.14 * radius * radius;
	}
	~Circle() { // 소멸자
	}
};



int main() {

	Circle circlearray[3];
	circlearray[0].setradius(10);
	circlearray[1].setradius(20);
	circlearray[2].setradius(30);
	
	for (int i = 0; i < 3; i++) {
		cout << circlearray[i].Area() << endl;
	}


}
