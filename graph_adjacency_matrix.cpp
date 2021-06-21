/*
    *This program represts implementation of Graph using the adjacency Matrix
*/

#include<bits/stdc++.h>

using namespace std;

int verArr [20][20]; //adjancency matrix 
int count  = 0;

//fuction for diplaying the matrix

void display(int v){
    int i ,j;
    for(i=0;i<v;i++){
        for(j =0;j<v;j++){
            cout<<verArr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//function for adding the edge into the matrix
void addEdge(int u, int v){
    verArr[u][v] = 1;
    verArr[v][u] = 1;
}

int main(){
    int v;
    cout<<"Enter the number of verticies: ";
    cin>>v;
    addEdge(0,4);
    addEdge(1,4);
    addEdge(2,4);
    addEdge(3,4);
    addEdge(5,4);
    addEdge(0,3);
    addEdge(0,5);
    addEdge(5,4);
    addEdge(1,2);
    addEdge(3,1);
    addEdge(4,0);
    display(v);
    return 0;
}