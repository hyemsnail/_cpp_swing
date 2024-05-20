#include <iostream> // 전처리문
using namespace std;
int main() { //main 함수

	cout << "1.문자열 입력 받기"<< endl;
	char a[100]; // char형 변수 선언 
	cout << "a 입력:"; //"a 입력"을 출력
	cin >> a; // a를 입력
	cout << "a의 내용은.." << a << endl; // "a의 내용은.." a라고 출력
	cout << endl;

	cout << "2. 띄어 쓴 두 문자열을 두 변수에 입력 받기"<< endl;
	char b[100]{}, d[100]; // b와 d를 변수 선언 배열은 넉넉하게 100씩
	cout << "a,b 입력:"; // "a,b입력"을 출력
	cin >> b >> d; // b와 d를 입력 , 연산자로 구분
	cout << "a의 내용은.." << b << endl; // "a의 내용은.." 출력
	cout << "b의 내용은.." << d << endl; // "b의 내용은.." 출력
	cout << endl;

	cout << "3. 공백이 포함된 문자열 입력 받기" << endl;
	char c[100]; // char형 변수 선언 
	getchar();// 입력 버퍼에 null값을 비움
	cout << "c 입력:"; //"c 입력"을 출력
	cin.getline(c, 100); // 공백을 포함한 값을 입력
	cout << "c의 내용은.." << c << endl; // "c의 내용은.." c라고 출력


	return 0; //프로그램 종료
}
