#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int operNum;
    string oper;
    int value;
    queue<int> myQueue;

    cin >> operNum;
    while (operNum--)
    {
        cin >> oper;

        if (oper == "push")
        {
            cin >> value;
            myQueue.push(value);
        }
        else if (oper == "pop")
        {
            if (myQueue.empty())
                cout << -1 << "\n";
            else
            {
                cout << myQueue.front() << "\n";
                myQueue.pop();
            }
        }
        else if (oper == "size")
        {
            cout << myQueue.size() << "\n";
        }
        else if (oper == "empty")
        {
            cout << (int)myQueue.empty() << "\n";
        }
        else if (oper == "front")
        {
            if (myQueue.empty())
                cout << -1 << "\n";
            else
                cout << myQueue.front() << "\n";
        }
        else if (oper == "back")
        {
            if (myQueue.empty())
                cout << -1 << "\n";
            else
                cout << myQueue.back() << "\n";
        }
    }
    return 0;
}
