// 카드 정렬하기

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    // vector<int> v;
    // queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    // 정렬 기준 greater (최소힙, 작은 값이 top)
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int total = 0;

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a + b);
        total += a + b;
    }
    cout << total << "\n";
}