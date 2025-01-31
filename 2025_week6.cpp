#include <iostream>
#include <vector>
#include <algorithm> // sort, find

using namespace std;

// 템플릿 함수: 벡터 출력
template <typename T>
void printVector(vector<T>& vec) { 
    typename vector<T>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) { // auto 대신 반복자 타입 명시
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1. 정수형 벡터 생성 및 출력
    vector<int> numbers;
    numbers.push_back(4);
    numbers.push_back(7);
    numbers.push_back(1);
    numbers.push_back(8);
    numbers.push_back(3);
    numbers.push_back(9);

    cout << "기존 숫자들: ";
    printVector(numbers);

    // 2. STL sort를 사용하여 벡터 정렬
    sort(numbers.begin(), numbers.end());
    cout << "정렬된 숫자들: ";
    printVector(numbers);

    // 3. 특정 값 검색 (find)
    int target = 7;
    vector<int>::iterator it = find(numbers.begin(), numbers.end(), target); 
    if (it != numbers.end()) {
        cout << target << " 의 index: " << distance(numbers.begin(), it) << endl;
    }
    else {
        cout << target << " not found in the vector." << endl;
    }

    // 4. 문자열 벡터 정렬
    vector<string> fruits;
    fruits.push_back("banana");
    fruits.push_back("apple");
    fruits.push_back("grape");
    fruits.push_back("orange");

    cout << "\n기존 과일들: ";
    printVector(fruits);

    sort(fruits.begin(), fruits.end());
    cout << "정렬된 과일들: ";
    printVector(fruits);

    // 5. 특정 문자열 검색
    string fruitTarget = "apple";
    vector<string>::iterator fruitIt = find(fruits.begin(), fruits.end(), fruitTarget); // auto 대신 명시적 타입
    if (fruitIt != fruits.end()) {
        cout << fruitTarget << " 의 index: " << distance(fruits.begin(), fruitIt) << endl;
    }
    else {
        cout << fruitTarget << " not found in the vector." << endl;
    }

    return 0;
}
