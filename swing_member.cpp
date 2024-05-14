#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Information {
private:
	string name;
	string p_number; // 전화번호
public:
	Information() {} // 기본 생성자
	Information(string name, string p_number) { // 받는 이름과 전화번호의 생성자
		this->name = name;
		this->p_number = p_number;

	}
	string getname() { // 반환하는 역할
		return name;
	}
	string getnumber() { // 반환하는 역할
		return p_number;
	}

};
bool Check(vector<Information>* member, string* name, string* p_number) { 
	for (size_t i = 0; i < member->size(); ++i)                             // 전체 벡터 동안 반복을 해야 한다고 해서 for
	if (member->at(i).getname() == *name && member->at(i).getnumber() == *p_number) {  // 벡터 member가 i번째 요소의 이름과 전화번호가 일치하는지 확인
		return true;                                                       
	}                                                                     
	return false;
}

int main() {
	vector<Information> member; // 이름과 전화번호를 저장하는 vector member 선언
	int n;
	string name;
	string p_number;

	while (1) {
		cout << "***** SWING 회원 정보 관리 프로그램 *****" << endl << endl;
		cout << "1.회원가입" << endl;
		cout << "2.로그인" << endl;
		cout << "3.회원 정보 수정" << endl;
		cout << "4.종료" << endl << endl;
		cout << "번호를 입력하세요:";
		cin >> n;
		cout << endl;

		switch (n) {
		case 1:
			cout << "***** 회원가입을 진행합니다 *****" << endl << endl;
			cout << "이름을 입력하세요:";
			cin >> name;
			cout << "전화번호를 입력하세요:";
			cin >> p_number;
			if (Check(&member,&name,&p_number)) {
				cout << "이미 등록된 정보입니다." << endl << endl;
				break;
			}
			else {
				member.push_back(Information(name, p_number));// 벡터 member에 회원 추가
				cout << endl << "회원가입이 완료되었습니다." << endl << endl;
				break;
			}
		

		case 2:
			cout << "***** 로그인을 진행합니다 *****" << endl << endl;
			cout << "이름을 입력하세요:";
			cin >> name;
			cout << "전화번호를 입력하세요:";
			cin >> p_number;
			cout << endl << endl;
			if (Check(&member, &name, &p_number)) {
				cout << "로그인이 완료되었습니다." << endl << endl << "**** SWING " << name << "님을 응원합니다 *****" << endl << endl;
				break;

			}
			else {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
				break;
			}

		

		case 3:
			cout << "***** 회원 정보 수정을 진행합니다 *****" << endl << endl;
			cout << "현재 회원 정보" << endl;
			cout << "이름:";
			cin >> name;
			cout << "전화번호";
			cin >> p_number;
			cout << endl << endl;

			if (Check(&member, &name, &p_number)) {
				
				cout << "새로운 회원 정보" << endl;
				cout << "이름 :";
				cin >> name;
				cout << "전화번호 : ";
				cin >> p_number;
				cout << endl << endl << "회원 정보 수정이 완료되었습니다";
				break;
			}
			else {
				cout << "회원 정보가 일치하지 않습니다." << endl << endl;
				break;
			}
	

		case 4:
			cout << "SWING 회원 정보 관리 프로그램을 종료합니다." << endl;
			return 0;

		default:
			cout << "정확한 번호를 입력해주세요" << endl;

			break;
		






		}
	}

}
