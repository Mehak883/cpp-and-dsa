#include<iostream>
#include<vector>
#include<list>
using namespace std;
// class Graph{
// int v;
// vector<list<int>> adj;
// public:
// Graph(int v){
//     this->v=v;
//     adj.resize(v);
// }
// };
void addedge(vector<int> adj[],int u,int v){
    adj[v].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int> adj[],int V){
    for(int v=0;v<V;v++){
        cout<<"\nadjacency list of vetex "<<V<<"\n head";
        for(auto x : adj[v]){
            cout<<"-> "<<x;
            cout<<"\n";
        }
    }
}
int main(){
    cout<<"how many vertixe you want to enter : ";
    int V;
    cin>>V;
    vector<int> adj[V];
    addedge(adj,0,1);
    addedge(adj,0,4);
    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,3);
    printgraph(adj,V);

    return 0;
}