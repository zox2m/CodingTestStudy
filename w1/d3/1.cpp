// ���� ������ ���ϱ� 
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 % num2;
    return answer;
}

int mainnn() {

    cout<<solution(13, 5);

    return 0;
}