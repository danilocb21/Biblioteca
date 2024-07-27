// Dijkstra
//
// Econtra o menor caminho do vértice de index s até os outros vértices
//
// O(n^2)

const int INF = 0x3f3f3f3f;
vector<vector<pair<int, int>>> adj; // {to, weight}

int dijkstra(int s, vector<int> &dist, vector<int> &pred) {
    int n = adj.size();
    dist.assign(n, INF);
    pred.assign(n, -1);
    vector<bool> vis(n, false);
    
    dist[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            // procura o nó não visitado de menor caminho
            if (!vis[j] && (v == -1 || dist[j] < dist[v])) v = j;
        }
        
        if (dist[v] == INF) break;
        
        vis[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            
            if (dist[v] + len < d[to]) {
                d[to] = d[v] + len;
                pred[to] = v;
            }
        }
    }
}

