// ÆÑÅä¸®¾ó
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int fac = 1;
    for (int i = 2; i <= n; i++)
    {
        fac *= i;
        if (fac > n) return i - 1;
        else if (fac == n) return i;
    }
    return 1;
}