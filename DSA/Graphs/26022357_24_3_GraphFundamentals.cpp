/* 
A graph G = (V,E) consisr of:
V -> Set of Vertices(nodes) -> An individual object in Graph
E -> Set of edges connecting pairs of vertices
*/

#include <iostream>
#include <map>
#include <list>
using namespace std;

int main() {
    int n = 6; //number of vertices
    int m = 5; //number of edges

    // cin >> n; //6
    // cin >> m; //5

    map<int,list<int>> adjList; //undirected graph

    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(auto it:adjList){
        cout << it.first << " : ";
        for(int j:it.second)cout << j << " ";
        cout << endl;
    }



    return 0;
}