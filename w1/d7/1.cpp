#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    string no = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        if (letter[0] != my_string[i]) answer += my_string[i];
    }
    return answer;
}