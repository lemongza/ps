#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<char> result;
    int n;
    stack<int> stk;
    int current = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while(current<=a){
            stk.push(current);
            result.push_back('+');
            current+=1;
        }
        if(stk.top()==a)
        {
            stk.pop();
            result.push_back('-');
        }
        else{
            cout<<"NO";
            return 0;
        }

    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }
}