#include <iostream>
#include <map>
#include <list>
using namespace std;

int main() {
    int n; //number of vertices
    int m; //number of edges

    cin >> n; //6
    cin >> m; //5

    map<int,list<pair<int,int>>> adjList; //undirected graph

    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));
    }

    for(auto it:adjList){
        cout << it.first << " : ";
        for(auto j:it.second)cout <<"(" << j.first <<" (weight: " << j.second << ")) ";
        cout << endl;
    }



    return 0;
}