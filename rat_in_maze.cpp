#include<bits/stdc++.h>
using namespace std;

int paths = 0;
bool isSafe(int i, int j, int n, vector<vector<bool>>&visited){
    return (i>=0 and j>=0 and i<n and j<n and visited[i][j]==false);
}

void helper(int i, int j, int n, vector<vector<int>>&grid, vector<vector<bool>>&visited){
    //base case
    if(i==n-1 and j==n-1){
        paths++;
        return;
    }
    //recursion
    visited[i][j] = true;
    //for upward direction
    if(i-1<n and grid[i-1][j]==0)
        helper(i-1, j, n, grid, visited);
    //for downward direction
    if(i+1<n and grid[i+1][j]==0)
        helper(i+1, j, n, grid, visited);
    //for right direction
    if(j+1<n and grid[i][j+1]==0)
        helper(j+1, j, n, grid, visited);
    //for left direction
    if(j-1<n and grid[i+1][j]==0)
        helper(j-1, j, n, grid, visited);
    visited[i][j]=false;
    return;
}
 int countPaths(vector<vector<int>>&grid){
     int n = grid.size();
     vector<vector<bool>> visited (n, vector<bool>(n,false));
     helper(0,0,n,grid, visited);
     return paths;
 }

 int main(){
     int n;
     cin>>n;
     vector<vector<int> >grid(n,vector<int>(n,0));
     for(int i=0;i<n;i++)
        for(int j=0;i<n;i++)
            cin>>grid[i][j];
     cout<<"Paths"<<countPaths(grid);
    
    return 0;
 }