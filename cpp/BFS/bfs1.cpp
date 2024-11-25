#include<bits/stdc++.h>
using namespace std;
    const int maxv = 100;
    int adjlist[maxv][maxv];
    int adjsize[maxv];
    bool visited[maxv];
void bfs(int start, int vertices){
    queue<int> q;
    q.push(start);
        visited[start]=true;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            cout<<node;
            for(int i = 0 ; i < adjsize[node];i++){
            int neighbours = adjlist[node][i];
                if(!visited[neighbours]){
                    visited[neighbours] = true;
                    q.push(neighbours);
                }
            }
    }
cout<<endl;
    }

int main (){
    int vertices,edges;
cout<<"Enter number of vertices and edges";
cin>>vertices>>edges;
for(int i=0;i<vertices;i++)
{
adjsize[i]=0;
visited[i]=false;
}
cout<<"edge (u,v)";
        int u, v;
for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        if (u < 0 || u >= vertices || v < 0 || v >= vertices) {
            cout << "Error: Invalid edge (" << u << ", " << v << ")." << endl;
            return 1;
        }
}
adjlist[u][adjsize[u]++]=v;
adjlist[v][adjsize[v]++]=u;



int startnode;
cout<<"Enter starting node";
cin>>startnode;
bfs(startnode,vertices);
return 0;
}