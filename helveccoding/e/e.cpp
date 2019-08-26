#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAX 100

const int INF = 1e9;

vector<pair<int, int>> graph[MAX];
vector<int> dist(MAX, INF);
int path[MAX];
bool visited[MAX];
int N;

void printMST()
{
    int max = 0;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if(dist[i]>max)
        {
            max=dist[i];
        }
    }
    cout<<max;

}
struct option
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        return a.second > b.second;
    }
};
void Prims(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, option> pq;
    pq.push(make_pair(src, 0));
    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().first;
        pq.pop();
        visited[u] = true;
        for (int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i].first;
            int w = graph[u][i].second;
            pair<int, int> neighbor = graph[u][i];
            if (!visited[v] && dist[v] > w)
            {
                dist[v] = w;
                pq.push(make_pair(v, w));
                path[v] = u;
            }
        }
    }
}

int main()
{
    freopen("e.inp", "r", stdin);
    freopen("e.out", "w", stdout);
    int M, u, v, w;
    cin >> N >> M;
    memset(path, -1, sizeof(path));
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v >> w;
        graph[u - 1].push_back(make_pair(v - 1, w));
        graph[v - 1].push_back(make_pair(u - 1, w));
    }
    int s = 0;
    Prims(s);
    printMST();
    return 0;
}