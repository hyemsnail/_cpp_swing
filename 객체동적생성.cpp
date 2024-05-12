#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) {
		radius = r;
	}
	double Area() {
		return 3.14 * radius * radius;
	}
};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 반지름 = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 반지름 = " << radius << endl;
}


int main() {

	Circle* p = new Circle;
	Circle* q = new Circle(20);
	cout << p->Area() << endl;
	cout << q->Area() << endl;
	delete p;
	delete q;




}
