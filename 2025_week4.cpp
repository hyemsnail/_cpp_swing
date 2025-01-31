#include <iostream>
using namespace std;

class square { // 정사각형 클래스, square
private:
    int side ; // 변

public:
    //기본 생성자
    square() {}
    // 생성자
    square(int s) {
        side = s;
        cout << "***정사각형 계산기 접속***" << endl << endl;
    }

    // 소멸자
    ~square() {
        cout << "정사각형 계산기 종료..." << endl << endl;
    }

    // 넓이
    double area() {
        return side * side;
    }

};

class triangle {
private:
    int side; // 정삼각형 한 변의 길이
public:

    //생성자
    triangle(int s) {
        side = s;
        cout << "***정삼각형 계산기 접속***" << endl << endl;
    }
    //소멸자
    ~triangle() {
        cout << "정삼각형 계산기 종료..." << endl << endl;

    }
    //넓이
    double area() {
        return side * side * 1 / 2;
    }
};

class cube {
private:
    int side; // 정육면체 한 변 길이
public:

    //생성자
    cube(int s) {
        side = s;
        cout << "***정육면체 계산기 접속***" << endl << endl;

    }
    //소멸자
    ~cube() {
        cout << "정육면체 계산기 종료..." << endl << endl;

    }
    //부피
    double volume() {
        return side * side * side; // 정육면체 부피 계산

    }
    //겉넓이
    double surface() {
        return side * side * 6; //정육면체 겉넓이 계산
    }
};
class pyramid {
private:
    int side;
    int height;
public:

    //생성자
    pyramid(int s, int h) {
        side = s;
        height = h;
        cout << "***정사각뿔 부피 계산기 접속***" << endl << endl;

    }
    // 소멸자
    ~pyramid() {
        cout << "정사각뿔 부피 계산기 종료..." << endl << endl;

    }
    //부피
    double volume() {
        return side * side * height * 1 / 3; //정사각뿔 부피 계산

    }
    //겉넓이
    double surface() {
        return side * side + side * height * 2;
    }
};
int main() {

    int n;

    while (1) {

        int side;
        int height;
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 정사각형 넓이 계산" << endl;
        cout << "2. 정삼각형 넓이 계산" << endl;
        cout << "3. 정육면체 부피 계산" << endl;
        cout << "4. 정육면체 겉넓이 계산" << endl;
        cout << "5. 정사각뿔 부피 계산" << endl;
        cout << "6. 정사각뿔 겉넓이 계산" << endl;
        cout << "7. 종료" << endl;
        cout << "선택:";
        cin >> n;
        cout << endl;

        switch (n) {

        case 1: //정사각형 넓이
            cout << "변의 길이 입력:";
            cin >> side;
            cout << endl;
            {
                square c1(side); // c1 객체 생성, 생성자 호출 , 한 변 side를 넣어 초기화
                cout << "정사각형의 넓이:" << c1.area() << endl << endl;
            } // 이거 중괄호로 안 감싸면 '초기화가 생략되었다'는 오류가 뜬다. 
            break;
        case 2://정삼각형 넓이
            cout << "변의 길이 입력:";
            cin >> side;
            cout << endl;
            {
                triangle c2(side); // c2 객체 생성, 생성자 호출 , 한 변 side를 넣어 초기화
                cout << "정삼각형의 넓이:" << c2.area() << endl << endl;
            }
            break;
        case 3://정육면체 부피
            cout << "변의 길이 입력:";
            cin >> side;
            cout << endl;
            {
                cube c3(side); //c3 객체 생성, 생성자 호출, 한 변 side를 넣어 초기화
                cout << "정육면체 부피:" << c3.volume() << endl << endl;
            }
            break;
        case 4://정육면체 겉넓이
            cout << "변의 길이 입력:";
            cin >> side;
            cout << endl;
            {
                cube c4(side); //c4 객체 생성, 생성자 호출, 한 변 side를 넣어 초기화
                cout << "정육면체 겉넓이:" << c4.surface() << endl << endl;
            }
            break;
        case 5://정사각뿔 부피
            cout << "사각형 한 변의 길이 입력:";
            cin >> side;
            cout << endl;
            cout << "높이 입력:";
            cin >> height;
            {
                pyramid c5(side, height);
                cout << "정사각뿔의 부피:" << c5.volume() << endl << endl;
            }
            break;
        case 6://정사각뿔 겉넓이
            cout << "사각형 한 변의 길이 입력:";
            cin >> side;
            cout << endl;
            cout << "높이 입력:";
            cin >> height;
            {
                pyramid c6(side, height);
                cout << "정사각뿔의 겉넓이:" << c6.surface() << endl << endl;
            }
            break;
        case 7:
            cout << "프로그램을 종료합니다" << endl;
            return 0; // 7입력하면 바로 위에 문구 띄우고 프로그램 종료
        default: // 1~7 이외에 숫자를 입력했을 때 
            cout << "잘못된 숫자입니다." << endl << endl;


        }
    }
}
