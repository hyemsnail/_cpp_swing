#include <iostream>
#include <vector>
#include <algorithm> // sort, find

using namespace std; // std:: 생략 가능

// 템플릿 함수: 벡터 내용을 출력
template <typename T>
void printVector(vector<T>& vec) { // const 제거
    for (typename vector<T>::iterator it = vec.begin(); it != vec.end(); ++it) { // auto 대신 명시적 타입 선언
        cout << *it << " ";
    }
    cout << endl;
}

// 템플릿 함수: 벡터에서 값 찾기
template <typename T>
bool findInVector(vector<T>& vec, T value) { // const 제거
    typename vector<T>::iterator it = find(vec.begin(), vec.end(), value); // auto 대신 명시적 타입 선언
    return it != vec.end();
}

int main() {
    // 정수형 벡터 생성 및 초기화
    vector<int> intVec = { 5, 2, 9, 1, 6 };
    cout << "Original intVec: ";
    printVector(intVec);

    // STL sort 사용: 정렬
    sort(intVec.begin(), intVec.end());
    cout << "Sorted intVec: ";
    printVector(intVec);

    // 템플릿 함수로 값 검색
    int target = 9;
    if (findInVector(intVec, target)) {
        cout << target << " found in intVec!" << endl;
    }
    else {
        cout << target << " not found in intVec!" << endl;
    }

    // 문자열 벡터 생성 및 처리
    vector<string> strVec;
    strVec.push_back("apple");
    strVec.push_back("orange");
    strVec.push_back("banana");
    strVec.push_back("grape");

    cout << "\nOriginal strVec: ";
    printVector(strVec);

    // STL sort 사용: 알파벳순 정렬
    sort(strVec.begin(), strVec.end());
    cout << "Sorted strVec: ";
    printVector(strVec);

    string strTarget = "banana";
    if (findInVector(strVec, strTarget)) {
        cout << strTarget << " found in strVec!" << endl;
    }
    else {
        cout << strTarget << " not found in strVec!" << endl;
    }

    return 0;
