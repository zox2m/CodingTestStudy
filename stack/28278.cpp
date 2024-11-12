#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int operNum; 
    int oper;
    int value;
    stack<int> myStack;

    cin >> operNum;
    while(operNum--)
    {
        cin >> oper;
        switch(oper)
        {
            case 1:
                cin >> value;
                myStack.push(value);
                break;
            case 2:
                if(myStack.empty()) cout <<-1<<"\n";
                else
                {
                    cout << myStack.top() << "\n";
                    myStack.pop();
                }
                break;
            case 3:
                cout << myStack.size() << "\n";
                break;
            case 4:
                cout << myStack.empty() <<"\n";
                break;
            case 5:
                if(myStack.empty()) cout <<-1 <<"\n";
                else cout << myStack.top()<<"\n";
                break;
        }
    }
    return 0;
}