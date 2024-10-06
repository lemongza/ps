#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

    
        string s;
        getline(cin,s,'.');
        stack<char> stk;
        char c = '.';
        bool ans = true;


    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '.')
        {
            if (s[i] == '[')
            {
                stk.push('[');
            }
            else if (s[i] == '(')
            {
                stk.push('(');
            }
            else if (s[i] == ']')
            {
                if (stk.top() == '[')
                {
                    stk.pop();
                }
                else
                {
                    ans = false;
                }
            }

            else if (s[i] == ')')
            {
                if (stk.top() == '(')
                {
                    stk.pop();
                    continue;
                }
                else
                {
                    ans = false;
                }
            }
        }
        else
        {
            if (ans)
            {
                cout << "yes\n";
            }
            else
            {
                cout << "no\n";
            }

            ans = true;
        }
    }

    
    
    return 0;
}
