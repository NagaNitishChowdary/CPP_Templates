vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    // Code here
    // WE TAKE MIN - HEAP IE PRIORITY QUEUE
    // priority_queue{dist,node}
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq ;
    vector<int> dist(V,1e9) ;
    dist[S] = 0 ;
    pq.push({0,S}) ;
    
    while(!pq.empty()){
        int dis = pq.top().first ;
        int node = pq.top().second ;
        pq.pop() ;
        
        for(auto it:adj[node]){
            int edgeWeight = it[1] ;
            int adjNode = it[0] ;
            if(dis + edgeWeight < dist[adjNode]){
                dist[adjNode] = dis + edgeWeight ;
                pq.push({dist[adjNode] , adjNode}) ;
            }
        }
    }
    for(int i=0 ; i<V ; i++){
        for(auto it:adj[i]){
            for(auto vctr:it) cout << vctr << " " ;
            cout << endl ;    
        }
    }

    return dist ;
}
