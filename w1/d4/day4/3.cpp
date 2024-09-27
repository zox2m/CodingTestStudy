// 2조각에서 10조각까지 원하는대로 잘라줌
// slice 조각의 피자를 n 명이 최소 1개씩 먹을 때, 몇 판 필요?  
#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    return n % slice == 0 ? n/slice :  n / slice + 1;
}