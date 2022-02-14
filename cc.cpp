#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second

int n, m, k, a, b, c;
vector<pair<int, int>> adj[100000];
int d[100000][2];

void dijkstra(int w)
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

    pq.push({0, {w, 0}});

    for (int i = 0; i < n; i++)
    {
        d[i][0] = d[i][1] = 1e9;
    }

    d[w][0] = 0;

    pair<int, pair<int, int>> g;

    while (!pq.empty())
    {
        g = pq.top();
        pq.pop();
        if (g.ft != d[g.sd.ft][g.sd.sd])
        {
            continue;
        }
        for (pair<int, int> u : adj[g.sd.ft])
        {
            if (g.sd.sd == 0 && g.ft + u.sd < d[u.ft][1])
            {
                d[u.ft][1] = g.ft + u.sd;
                pq.push({d[u.ft][1], {u.ft, 1}});
            }

            a = (g.ft) % (2 * k);

            if (a <= k - 1)
            {
                if (g.ft + u.sd < d[u.ft][g.sd.sd])
                {
                    d[u.ft][g.sd.sd] = g.ft + u.sd;
                    pq.push({d[u.ft][g.sd.sd], {u.ft, g.sd.sd}});
                }
            }
            else
            {
                if (g.ft + u.sd + 2 * k - a < d[u.ft][g.sd.sd])
                {
                    d[u.ft][g.sd.sd] = g.ft + u.sd + 2 * k - a;
                    pq.push({d[u.ft][g.sd.sd], {u.ft, g.sd.sd}});
                }
            }
        }
    }
}

int main()
{
    /*


3
5 5 5
1 2 3
2 3 4
2 4 6
3 5 8
4 5 7
4 3 4
1 2 7
2 3 4
3 4 3
5 6 5
1 3 1
1 5 10
3 4 4
3 2 2
2 4 1
5 4 3





    */
    ios_base::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    cin.tie(NULL);
    cout.tie(NULL);
    int t, cur = 0;
    cin >> t;

    while (t--)
    {
        cur++;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
        {
            adj[i].clear();
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            a--;
            b--;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }
        dijkstra(0);
        cout << "#" << cur << " " << min(d[n - 1][0], d[n - 1][1]) << "\n";
    }

    return 0;
}