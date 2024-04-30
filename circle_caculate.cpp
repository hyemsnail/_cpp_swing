#include <iostream>
using namespace std;

class f_circle { // 평면 원 클래스, flat circle
private:
    int radius; // 반지름

public:
    //기본 생성자
    f_circle() {}
    // 생성자
    f_circle(int r) {
        radius = r;
        cout << "***평면 원 계산기 접속***" << endl << endl;
    }

    // 소멸자
    ~f_circle() {
        cout << "평면 원 계산기 종료..." << endl << endl;
    }

    // 넓이
    double area() {
        return radius * radius * 3.14;
    }

    // 둘레
    double round() {
        return radius * 2 * 3.14;

    }
};

class cylinder {
private:
    int height; // 원기둥 높이
    int radius; // 원기둥 반지름
public:

    //생성자
    cylinder(int h, int r) {
        height = h;
        radius = r;
        cout << "***원기둥 계산기 접속***" << endl << endl; 
    }
    //소멸자
    ~cylinder() {
        cout << "원기둥 계산기 종료..." << endl << endl;

    }

    //겉넓이
    double surface() {
        return 2 * 3.14 * radius * height + 2 * 3.14 * radius * radius; // 원기둥 겉넓이 계산

    }
    //부피
    double volume() {
        return 3.14 * radius * radius * height; // 원기둥 부피 계산

    }
};
class cone {
private:
    int height; // 원뿔 높이
    int radius; // 원뿔 반지름
public:

    //생성자
    cone(int h, int r) {
        height = h;
        radius = r;
        cout << "***원뿔 부피 계산기 접속***" << endl << endl;

    }
    //소멸자
    ~cone() {
        cout << "원뿔 부피 계산기 종료..." << endl << endl;

    }
    //부피
    double volume() {
        return 3.14 * radius * radius * height * 1 / 3; // 원뿔 부피 계산

    }
};
class sphere {
private:
    int radius;
public:

    //생성자
    sphere(int r) {
        radius = r;
        cout << "***구 계산기 접속***" << endl << endl;

    }
    // 소멸자
    ~sphere() {
        cout << "구 계산기 종료..." << endl << endl;

    }
    //겉넓이
    double surface() {
        return 4 * 3.14 * radius * radius;

    }
    //부피
    double volume() {
        return 4 / 3 * 3.14 * radius * radius * radius;

    }
};
int main() {

    int n;
    
    while (1) {

        int radius;
        int height;
        cout << "원하는 계산을 선택하세요" << endl;
        cout << "1. 원의 넓이 계산" << endl;
        cout << "2. 원의 둘레 계산" << endl;
        cout << "3. 원기둥의 부피 계산" << endl;
        cout << "4. 원기둥의 겉넓이 계산" << endl;
        cout << "5. 원뿔의 부피 계산" << endl;
        cout << "6. 구의 부피 계산" << endl;
        cout << "7. 구의 겉넓이 계산" << endl;
        cout << "8. 종료" << endl;
        cout << "선택:";
        cin >> n;
        cout << endl;

        switch (n) {
            
        case 1: //평면 원 넓이
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            {
                f_circle c1(radius); // c1 객체 생성, 생성자 호출 , 반지름 radius를 넣어 초기화
                cout << "평면원의 넓이:" << c1.area() << endl << endl;
            } // 이거 중괄호로 안 감싸면 '초기화가 생략되었다'는 오류가 뜬다. 
            break;
        case 2://원의 둘레
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            {
                f_circle c2(radius); // c2 객체 생성, 생성자 호출 , 반지름 radius를 넣어 초기화
                cout << "평면원의 둘레:" << c2.round() << endl << endl;
            }
            break;
        case 3://원기둥 부피
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            cout << "높이 입력:";
            cin >> height;
            cout << endl;
            {
                cylinder c3(height, radius); //c3 객체 생성, 생성자 호출, 높이 height, 반지름 radius를 넣어 초기화
                cout << "원기둥의 부피:" << c3.volume() << endl << endl;
            }
            break;
        case 4://원기둥 겉넓이
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            cout << "높이 입력:";
            cin >> height;
            cout << endl;
            {
                cylinder c4(height, radius); //c4 객체 생성, 생성자 호출, 높이 height, 반지름 radius를 넣어 초기화
                cout << "원기둥의 겉넓이:" << c4.surface() << endl << endl;
            }
            break;
        case 5://원뿔 부피
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            cout << "높이 입력:";
            cin >> height;
            {
                cone c5(height, radius);
                cout << "원뿔의 부피:" << c5.volume() << endl << endl;
            }
            break;
        case 6://구의 부피
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            {
                sphere c6(radius);
                cout << "구의 부피:" << c6.volume() << endl << endl;
            }
            break;
        case 7://구의 겉넓이
            cout << "반지름 입력:";
            cin >> radius;
            cout << endl;
            {
                sphere c7(radius);
                cout << "구의 겉넓이:" << c7.surface() << endl << endl;
            }
            break;
        case 8:
            cout << "프로그램을 종료합니다" << endl;
            return 0; // 8입력하면 바로 위에 문구 띄우고 프로그램 종료
        default: // 1~8 이외에 숫자를 입력했을 때 
            cout << "잘못된 숫자입니다." << endl << endl; 


        }
    }
}
