#define _CRT_SECURE_NO_WARNINGS //비주얼 스튜디오에서 strcpy로 인한 오류를 막기 위한 선언문
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	int id;
	char* name;
public:
	Person(int id, const char* name) {
		this->id = id;
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
	Person(const Person& p); // 복사 생성자
	
	char* showName() {
		return name;
	}

};

Person::Person(const Person& p) { // 복사 생성자
	this->id = p.id; // id 값 복사
	int len = strlen(p.name);// name의 문자 개수
	this->name = new char [len+1]; // name을 위한 공간 핟당
	strcpy(this->name, p.name); // name의 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 name은 " << this->name << endl;
}

int main() {
	Person swing(2, "cpp");
	Person swing2(swing);

	cout << "swing의 name" << swing.showName() << endl;
	cout << "swing2의 name" << swing2.showName() << endl;
	return 0;
}
