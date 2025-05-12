// 잃어버린 괄호
// 식의 값을 최소로 만드려면 ? '-' 뒤에 () 안에 값이 크도록 다 묶어버리자

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{

    string input;
    cin >> input;

    vector<string> v;
    stringstream ss(input); // 문자열을 스트림처럼 다루게 해줌
    string token;

    // 첫번째 등장하는 '-' 기준으로 나누기
    while (getline(ss, token, '-'))
    {
        v.push_back(token);
        // cout << token << endl;
    }
    int ans = 0;
    stringstream ss2(v[0]);
    string token2;

    // 앞에 등장하는 덩어리 + 계산
    while (getline(ss2, token2, '+'))
    {
        ans += stoi(token2);
    }

    // 나머지 괄호로 묶어서 - 계산
    for (int i = 1; i < v.size(); ++i)
    {
        stringstream ss3(v[i]);
        while (getline(ss3, token2, '+'))
        {
            ans -= stoi(token2);
        }
    }

    cout << ans << "\n";
}
