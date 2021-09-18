//in this program we will generate all the permuatatons of a string  using the concept of backtracking
#include<bits/stdc++.h>
using namespace std;
void permute(string s, int l, int r){
    //base case
    if(l==r)
        cout<<s<<endl;
    else{
        for(int i=l; i<r;i++){
            //swap
            swap(s[l], s[i]);
            //recusrion
            permute(s,l+1,r);
            //backtarck
            swap(s[l], s[i]);
        }
    }

}

int main(){
    string s = "abc";
    int l = 0;
    int r = s.length();
    permute(s,l,r);
    return 0;
}