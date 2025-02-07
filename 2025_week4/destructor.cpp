#include <iostream> 
using namespace std;

#include <iostream> 
using namespace std;

class Rectangle { 
public:
	int width;
	int height; 
	Rectangle();
	Rectangle(int w, int h);
	~Rectangle(); //소멸자 선언
};

Rectangle::Rectangle() {
	width = 5;
	height = 9;
	cout << "밑변" << width << " 높이" << height << "인 직사각형 생성" << endl;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
	cout << "밑변" << width << " 높이" << height << "인 직사각형 생성" << endl;
}

Rectangle::~Rectangle() { //소멸자 구현
	cout << "밑변" << width << " 높이" << height << "인 직사각형 소멸" << endl;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 7);

}
