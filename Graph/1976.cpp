#include <iostream>
#include <vector>

using namespace std;
int p[201];
int city[201][201];
int find(int x)
{
    if (x == p[x])
        return x;
    return p[x] = find(p[x]);
}

void _union(int a, int b)
{
    a = find(a);
    b = find(b);

    p[b] = a;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            int x;
            cin >> x;
            city[i][j] = x;
        }
    }

    int plan[m];
    for (int i = 0; i < m; i++)
    {
        cin >> plan[i];
    }

    for (int i = 1; i < n + 1; i++)
    {
        p[i] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (city[i][j] == 1)
                _union(i, j);
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << p[i] << "\n";
    // }

    for (int i = 0; i < m - 1; i++)
    {
        if (find(plan[i]) == find(plan[i + 1]))
        {
            continue;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}