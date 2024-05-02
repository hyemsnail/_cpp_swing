#include <iostream>
using namespace std;


int total(int *ing_total, int semitotal) { // ing_total은 주문가격에 따라 계속 올라가는 값이다. 주문하면 할수록 가격이 점점 올라가는 것이니까 현재진행중이니까... ~ing_total이라고 지음.... 
                                          // semitotal은 주문한 개수의 따른 각 메뉴의 가격이다. 
    *ing_total += semitotal;// ing_total 내부의 값은 semitotal이 계속 더해지는 것이다. 
    return *ing_total;
}

int main()
{
    string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
    int prices[] = { 3500, 4000, 4200, 4300, 4500 };

    

    int ing_total = 0; // ing_total을 선언 0으로 초기화






    while (1) {
        cout << endl << endl;
        cout << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl << endl;
        for (int i = 0; i < 5; ++i) { 

            cout << i + 1 << ". " << menu[i] << " (" << prices[i] << "원)" << endl;
        }
        cout << "구매하실 라면 번호를 입력해 주세요(종료는 0) :";  // 초기화면은 for를 이용해서 만들어봄 

        int ramyeon;
        cin >> ramyeon;
        if (ramyeon == 0) {


            break; // 0 입력하면 종료하고 총 가격 출력하러 마지막 줄로 감
        }
        else if (ramyeon < 1 || ramyeon > 5) { // 범위에서 벗어난 숫자를 입력하였을 때
            cout << "제대로 된 숫자를 입력해주세요." << endl << endl;
            continue;
        }


        char answer;
        int n;
        cout << menu[ramyeon - 1] << "을(를) 구매하시겠습니까?(Y/N)";
        cin >> answer;
        if (answer == 'Y') { // Y 라고 하면
            cout << "구매하실 라면 개수를 입력해 주세요: ";
            cin >> n;
            cout << menu[ramyeon - 1] << n << "개를 구매하셨습니다." << endl;
            int semitotal = prices[ramyeon - 1] * n; // 각 메뉴를 계산했을 때 가격을 semitotal 이라고 지음

            cout << "가격은" << semitotal << "원 입니다.";
            
           
           ing_total =  total(&ing_total, semitotal); // total 함수를 호출하여 *ing_total(ing_total의 내부의 값)을 올린 채 ing_total에게 그것을 준다. 

        }
        else if (answer == 'N') {
            continue; // 처음으로 돌아감
        }




    }

    cout << "총 가격은" << ing_total  << "원 입니다." << endl; // 총 누적 금액 출력


    return 0;
}

