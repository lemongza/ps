// 후위 표기식2
#include <iostream>
#include <string>
#include <stack>
#include <iomanip>

using namespace std;

int main()
{
    stack<double> stk;
    string str;
    int n;
    double res;
    cin >> n;
    cin >> str;
    int val[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    int idx = 0;
    // cout << str[idx] << "\n";
    while (str[idx])
    {

        if (str[idx] >= 'A' && str[idx] <= 'Z')
        {
            int n;
            n = val[int(str[idx]) - 65];
            // cout << n << "\n";
            stk.push(n);
        }
        else
        {
            if (str[idx] == '*')
            {
                double a, b;
                b = stk.top();
                stk.pop();
                a = stk.top();
                stk.pop();
                // cout << a << "op" << b << "\n";
                stk.push(a * b);
                // cout << double(stk.top()) << "\n";
            }
            else if (str[idx] == '+')
            {
                double a, b;
                b = stk.top();
                stk.pop();
                a = stk.top();
                stk.pop();
                stk.push(a + b);
                // cout << double(stk.top()) << "\n";
            }
            else if (str[idx] == '-')
            {
                double a, b;
                b = stk.top();
                stk.pop();
                a = stk.top();
                stk.pop();
                stk.push(a - b);
                // cout << double(stk.top()) << "\n";
            }
            else if (str[idx] == '/')
            {
                double a, b;
                b = stk.top();
                stk.pop();
                a = stk.top();
                stk.pop();
                stk.push(a / b);
                // cout << double(stk.top()) << "\n";
            }
        }

        idx++;
    }

    cout << fixed << setprecision(2) << double(stk.top()) << "\n";
}
