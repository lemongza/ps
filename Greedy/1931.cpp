// 회의실 배정
// 종료 시간이 빠른 순으로 정렬

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++)
    {
        cin >> times[i].first >> times[i].second;
    }

    // 종료 시간이 빠른 순으로 정렬 (종료 시간이 같다면, 시작 시간이 빠른순 )
    sort(times.begin(), times.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second; });

    int total = 0;
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        // 시작 시간이 이전 회의 끝나는 시간보다 크거나 같아야한다 (1,4)->(4,6) 가능
        if (times[i].first >= curr)
        {
            total++;
            curr = times[i].second;
        }
    }
    cout << total << "\n";
}