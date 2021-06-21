/*
    *This prgram implements the directed graph using the concepts of STL
*/

#include<bits/stdc++.h>
using namespace std;

//strcuture of a graph edge
struct Edge{
    int src, des;
};

//class of a graph edge
class Graph{
    public:
        //creating a vector of vectors to represent adjcency List
        vector<vector<int>> adjList;

        //constructor
        Graph(vector<Edge> const &edges, int N){
            //resize the vector to hold only N elements
            adjList.resize(N);

            //add edges to directed graph
            for(auto &edge:edges){
                //insert at end
                adjList[edge.src].push_back(edge.des);

                //for undirected graph
                //adjList[edge.des].push_back(edge.src);
            }//for loop ends here
        }//constructor ends here
};//class ends here

//function for printing the graph
void prntGraph(Graph const &graph, int N){
    for(int i=0;i<N;i++){
        //print current vertex number
        cout<<i<<"-->";
        
        //print all neighbours vertices of i
        for(int v:graph.adjList[i])
            cout<<v<<" ";
        cout<<endl;
    }//for loop ends here
}//function print graph ends here

int main(){
    //initialization of vector of edges'
    vector<Edge> edges = 
    {
        {0,1}, {0,4},{0,3},
        {1,2}, {1, 3}, {1,4},
        {2,0},{2,1}, {2,5},
        {3,2},{3,5},
        {4,5},{4,3},
        {5,4}
    };
    
    //total number of nodes in the graph
    int N = 6;
    
    //construct graph
    Graph graph(edges, N);

    //print the list
    prntGraph(graph, N);
    return 0;
}