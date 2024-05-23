#include <iostream>
using namespace std;

int main() {
    int n;
    int seat[10][6] = { 0 }; // 행렬의 모든 숫자 0
    int adultwhole = 0, teenwhole = 0; // 어른과 청소년의 수
    int total = 0; // 계산한 총액
    int f; // 변경좌석 열
    int g; // 변경좌석 행
    int h, y; // 처음 예약하는 좌석 열, 행
    int change_total; // 바꾸는 좌석 갯수

    // 프로그램을 종료할 때까지 반복, while (1)로 무한반복
    while (1) {
        cout << endl;
        cout << "**영화 예약 시스템**" << endl << endl;
        cout << "1. 좌석 예약" << endl;
        cout << "2. 예약 변경" << endl;
        cout << "3. 프로그램 종료" << endl;
        cout << "번호를 입력하세요: ";
        cin >> n;
        cout << endl;

        if (n == 1) {
            cout << "1 2 3 4 5 6" << endl;
            cout << "-----------" << endl << endl;

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " "; // 좌석표 출력
                }
                cout << endl;
            }

            int a, b; // 각각 성인과 청소년 수 입력
            cout << endl << "성인(14000원): ";
            cin >> a;
            cout << endl;
            cout << "청소년(11000원): ";
            cin >> b;

            // 입력받은 성인과 청소년 수를 누적해야 한다.....
            adultwhole += a;// 입력한 a만큼 더하는 것
            teenwhole += b;// 입력한 b만큼 더하는 것

            int totalseats = a + b; //totalseats 는 총 예약한 좌석 수

            for (int k = 0; k < totalseats; k++) {
                cout << endl << "몇열, 몇번째 좌석을 예약하시겠습니까?:" << endl;
                cin >> h >> y; // 몇열, 몇번째 입력

                if (h >= 1 && h <= 10 && y >= 1 && y <= 6) {// h 1이상 10이하, y 1이상 6이하
                    if (seat[y - 1][h - 1] == 0) {// 행 열 순서이기 때문에 h 와 y의 순서를 뒤집었다. 좌석 입력을 할 때는 열을 먼저 입력하기 때문이다. 
                        cout << endl;
                        cout << "예약되었습니다." << endl;
                        seat[y - 1][h - 1] = 1;// 예약 된거는 1로 바꾼다.
                    }
                    else {
                        cout << endl;
                        cout << "이미 예약되었습니다. 다른 좌석을 선택하세요." << endl;
                        k--;// 반복문에서 숫자가 안 더해지도록 빼주는 역할이다
                    }
                }
                else {
                    cout << endl;
                    cout << "예약가능한 좌석이 아닙니다. 다시 입력하세요." << endl;
                    k--;// 반복문에서 숫자가 안 더해지도록 빼주는 역할이다. 
                }
            }
            cout << endl;// 다시 좌석표 출력
            cout << "1 2 3 4 5 6" << endl;
            cout << "-----------" << endl << endl;

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (n == 2) {
            // 현재 좌석표 출력
            cout << "1 2 3 4 5 6" << endl;
            cout << "-----------" << endl << endl;

            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " "; // 현재 상황 반영한 좌석표 출력
                }
                cout << endl; // 한 행 출력 후 개행문자 추가
            }
            // 좌석 바꾸기
            cout << "바꿀 좌석의 갯수를 입력하세요:";
            cin >> change_total;
            for (int i = 0; i < change_total; i++) {
                cout << "현재 좌석과 바꿀 좌석을 입력하세요" << endl;
                cout << "현재 좌석(N열 M번째): ";
                cin >> h >> y;
                if (h >= 1 && h <= 10 && y >= 1 && y <= 6) {// h 1이상 10이하, y 1이상 6이하
                    if (seat[y - 1][h - 1] == 1) {//행 열 순서이기 때문에 h 와 y의 순서를 뒤집었다. 좌석 입력을 할 때는 열을 먼저 입력하기 때문이다. 
                        int f, g;
                        cout << "변경 좌석(n열. m번째): ";
                        cin >> f >> g;
                        if (f >= 1 && f <= 10 && g >= 1 && g <= 6) {// 조금 전 h,y 변수에서와 같은 방법이다
                            if (seat[g - 1][f - 1] == 0) {// 조금 전 h,y 변수에서와 같은 방법이다
                                cout << "좌석이 변경되었습니다." << endl;
                                seat[g - 1][f - 1] = 1;
                                seat[y - 1][h - 1] = 0; // 기존 좌석을 비움
                            }
                            else {
                                cout << " 이미 예약되었습니다.다른 좌석을 선택하세요." << endl;
                                i--; // 다른 좌석을 선택하도록 반복횟수를 줄임
                            }
                        }
                        else {
                            cout << "잘못된 좌석 번호입니다. 다시 입력하세요." << endl;
                            i--; // 다른 좌석을 선택하도록 반복횟수를 줄임
                        }
                    }
                    else {
                        cout << "현재 좌석이 틀렸습니다. 다시 입력해주세요" << endl;
                        i--;
                    }
                }
            }
            cout << endl << endl;// 다시 좌석표 출력
            cout << "1 2 3 4 5 6" << endl;
            cout << "-----------" << endl << endl;

            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 6; j++) {
                    cout << seat[i][j] << " ";
                }
                cout << endl;
            }
               
        }
        else if (n == 3) {
            // 총액 계산하고 끝내기
            total = adultwhole * 14000 + teenwhole * 11000;
            cout << endl;
            cout << "총 " << total << "원 입니다." << endl;

            // 프로그램 종료
            return 0;
        }
        else { // n에 1,2,3이 아닌 다른 숫자를 입력했을 때
            cout << "올바른 숫자를 입력해주세요." << endl << endl;
        }
    }
}
