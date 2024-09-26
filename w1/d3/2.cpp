// 중앙값 구하기 
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    sort(array.begin(), array.end());

    int answer = array[array.size()/2];
    return answer;
}

int main() {
    vector<int> arr = { 1, 2, 7, 10, 11 };
    cout << solution(arr);
    return 0;
}