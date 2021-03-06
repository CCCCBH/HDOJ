#include<iostream>
#include<cstring>
using namespace std;
int INF = 999999999;
int city[1001][1001], citywant[1001], dis[1001], book[1001];

int max(int a, int b) {
    return a > b ? a : b;
}
int main(void) {
    int T, S, D;
    int i, j, a, b, time;

    while (cin >> T >> S >> D) {
        for (i = 0; i < 1001; i++) {
            for (j = 0; j < 1001; j++) {
                if (i == j) {
                    city[i][j] = 0;
                } else {
                    city[i][j] = INF;
                }
            }
        }

        int n = 0;
        while (T--) {
            cin >> a >> b >> time;
            n = max(max(a, b), n);
            if (city[a][b] > time) {
                city[a][b] = city[b][a] = time;
            }
        }

        while (S--) {
            int s;
            cin >> s;
            city[0][s] = city[s][0] = 0;
        }

        memset(book, 0, sizeof(book));
        book[0] = 1;

        for (i = 0; i <= n; i++) {
            dis[i] = city[0][i];
        }

        //dijkstra
        for (i = 1; i <= n; i++) {
            int min = INF;
            int u, v;
            for (j = 0; j <= n; j++) {
                if (book[j] == 0 && dis[j] < min) {
                    min = dis[j];
                    u = j;
                }
            }

            book[u] = 1;

            for (v = 1; v <= n; v++) {
                if (book[v] == 0 && city[u][v] < INF) {
                    if (dis[v] > dis[u] + city[u][v]) {
                        dis[v] = dis[u] + city[u][v];
                    }
                }
            }
        }

        for (i = 0; i < D; i++) {
            cin >> citywant[i];
        }

        int num = dis[citywant[0]];
        for (i = 1; i < D; i++) {
            if (dis[citywant[i]] < num) {
                num = dis[citywant[i]];
            }
        }

        cout << num << endl;
    }
}

