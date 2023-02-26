#include <bits/stdc++.h>
#include "iostream"

using namespace std;

const int N = 100000;
string out[] = {"none", "any", "at least one"};
vector<array<int, 3>> edges[N];
int parent[N], Rank[N];

int findSet(int v) { return parent[v] == v ? v : parent[v] = findSet(parent[v]); }


// Disjoint Set data structure

void join(int a, int b) {
    a = findSet(a); // get parent for a
    b = findSet(b); // get parent for b

    if (a == b)
        return;

    if (Rank[a] < Rank[b])
        swap(a, b);

    parent[b] = a;
    Rank[a] += Rank[b];
}


int main() {

    int nodes, vertexes;
    cin >> nodes >> vertexes;

    for (int i = 0; i <= nodes; i++)
        Rank[i] = 1, parent[i] = i;

    for (int i = 0; i < vertexes; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[w].push_back({u, v, i});
    }
    return 0;
}
