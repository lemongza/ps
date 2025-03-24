#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            int x;
            cin >> x;
            stk.push(x);
        }
        else if (str == "pop")
        {
            if (stk.empty())
            {
                cout << "-1\n";
                continue;
            }
            cout << stk.top() << "\n";
            stk.pop();
        }
        else if (str == "top")
        {
            if (stk.empty())
            {
                cout << "-1\n";
                continue;
            }
            cout << stk.top() << "\n";
        }
        else if (str == "size")
        {
            cout << stk.size() << "\n";
        }
        else if (str == "empty")
        {
            if (stk.empty())
            {
                cout << "1\n";
                continue;
            }
            cout << "0\n";
        }
    }
}