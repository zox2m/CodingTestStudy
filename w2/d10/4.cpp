// 배열 회전시키기 
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    int temp;

    if (direction == "right")
    {
        temp = numbers.back();

        for (int i = numbers.size(); i > 0; i--)
        {
            numbers[i] = numbers[i - 1];

        }
        numbers.front() = temp;
    }

    else
    {
        temp = numbers.front();

        for (int i = 0; i < numbers.size() - 1; i++)
        {
            numbers[i] = numbers[i + 1];
        }
        numbers.back() = temp;
    }

    return numbers;
}