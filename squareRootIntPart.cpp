#include<bits/stdc++.h>
using namespace std;
#define N 50
/* This function return the integer part of the square root a number using binary search*/

int squareRoot(int n){
    int l=1;
    int r=n-1;
    int ans = -1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(m*m == n) return m;//perfect square
        else if( m*m > n)
            r = m-1;
        else{
            ans = m;
            l = m+1;
        }
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Square Root's Int part is "<<squareRoot(n)<<endl;

    return 0;
}