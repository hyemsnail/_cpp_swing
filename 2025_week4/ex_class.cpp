#include <iostream> 
using namespace std;

class Rectangle { // Rectangle 클래스 선언
public:
	int width; //멤버 변수
	int height; //멤버 변수
	int area(); //멤버 함수
};

int Rectangle::area() {
	return width * height;
}

int main() {
	Rectangle rect1;
	rect1.width = 2;
	rect1.height = 5;
	cout << "직사각형1의 면적은 " << rect1.area() << endl;
	Rectangle rect2;
	rect2.width = 3;
	rect2.height = 7;
	cout << "직사각형2의 면적은 " << rect2.area() << endl;
}
