#include <iostream> 
using namespace std;

class Rectangle { // Rectangle 클래스 선언
public:
	int width; //멤버 변수
	int height; //멤버 변수
	int area(); //멤버 함수
	Rectangle(int w, int h);
};

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}

int Rectangle::area() {
	return width * height;
}

int main() {
	Rectangle rect1; // 오류
	cout << "직사각형1의 면적은 " << rect1.area() << endl;
	Rectangle rect2(3, 7);
	cout << "직사각형2의 면적은 " << rect2.area() << endl;
}
