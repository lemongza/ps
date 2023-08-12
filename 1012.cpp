#include <iostream>
using namespace std;

int arr[51][51] = {
    0,
};
int check[51][51] = {
    0,
};
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int M, N, K, T;

bool dfs(int x, int y)
{
    if (check[y][x] == 1)
    {
        return false;
    }
    check[y][x] = 1;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < M && ny < N && arr[ny][nx] == 1)
        {
            dfs(nx, ny);
        }
    }
    return true;
}

int main()
{
    
    cin >> T;
    

    for (int t = 0; t < T; t++)
    {
        fill_n(arr[0],51*51,0);
        fill_n(check[0],51*51,0);

        int cnt = 0;
        cin >> M >> N >> K;

        for (int i = 0; i < K; i++)
        {
            int x, y = 0;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] == 1 && check[i][j] != 1)
                {
                    if(dfs(j, i))
                        cnt++;
                }
            }
        }
        cout << cnt <<"\n";
    }
}