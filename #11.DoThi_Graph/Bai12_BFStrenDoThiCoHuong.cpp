// Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
// Hãy thực hiện in ra danh sách các đỉnh được duyệt theo thuật toán BFS(s).

#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    memset(visited, false, sizeof(visited));
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int v = q.front();
        cout << v << " ";
        q.pop();
        for (int x : dske[v]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main()
{
    nhap();
    BFS(s);
    return 0;
}