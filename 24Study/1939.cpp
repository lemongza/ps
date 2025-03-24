#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int n, m;

int bfs(vector<vector<pair<int, int> > > v, int start, int end, int w)
{
    queue<int> q;
    q.push(start);
    vector<int> visit(n + 1, 0);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        if (visit[curr] == 1)
        {
            continue;
        }
        else
        {
            visit[curr] = 1;
        }
        if (curr == end)
            return 1;
        for (int i = 0; i < v[curr].size(); i++)
        {
            if (w <= v[curr][i].second) //second 중량
            {                             
                q.push(v[curr][i].first); // 연결된 섬 Push
            }
        }
    }
    return 0;
}

int main()
{
    cin >> n >> m;
    vector<vector<pair<int, int> > > v(n + 1);
    int a, b, c;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }

    int s, e;
    cin >> s >> e;
    int l = 0;
    int r = 1000000000;
    int ans = 0;

    while (l <= r)
    {
        int mid = r-(r-l) / 2 ; //여기서 시간초과임
        // int mid = r+1/2 -> 시간초과;

        if (bfs(v,s,e,mid)==1)
        {
            ans=mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout << ans << "\n";
}
