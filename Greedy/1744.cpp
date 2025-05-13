// 수 묶기
// 0 -> 음수 제일 큰거 없애기
// 1 -> 더하는게 더 유리함

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> pos;
    vector<int> neg;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            total += 1;
        }
        else if (x > 1)
        {
            pos.push_back(x);
        }
        else if (x <= 0)
        {
            neg.push_back(x);
        }
    }

    sort(pos.begin(), pos.end(), greater<>()); // 양수 내림차순
    sort(neg.begin(), neg.end());

    for (int i = 0; i + 1 < pos.size(); i += 2)
    {
        total += pos[i] * pos[i + 1];
    }
    if (pos.size() % 2 == 1) //마지막 하나 남은것
        total += pos.back();

    for (int i = 0; i + 1 < neg.size(); i += 2)
    {
        total += neg[i] * neg[i + 1];
    }
    if (neg.size() % 2 == 1) //마지막 하나 남은 것 (0인 경우 포함)
        total += neg.back();

    cout << total << "\n";
}