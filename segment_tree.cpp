#include<bits/stdc++.h>

using namespace std;

/*
    1. a[] is the input array
    2. st[] is the segment tree array
    3. ss is starting index
    4. se is the ending index
    5. si is the index of segment tree array
*/

void buildST(int a[], int st[], int ss,int se, int si){
    //case of leaf nodes
    if(se==ss){
        st[si] = ss;
        return;
    }

    int mid = ss+(se-ss)/2;
    buildST(a,st,ss,mid,si*2+1);//left tree part
    buildST(a,st,mid+1,se,si*2+2);//right tree part
    st[si] = st[si*2+1]+st[si*2+2];
    return;
}

int main(){
    int a[] = {1,3,5,7,9,11};
    int n = sizeof(a)/sizeof(a[0]);
    int st[4*n]={};
    for(int i=0;i<4*n;i++)
        cout<<st[i]<<" ";
    cout<<endl;
    /*cout<<"Enter size of array: ";
    cin>>n;
    
    cout<<"Etner "<<n<<" number of elements"<<endl;
    for(int i=0; i<n;i++)
        cin>>a[i];*/

    
    buildST(a, st, 0, n-1, 0);
    for(int i=0;i<4*n;i++)
        cout<<st[i]<<" ";
    return 0;
}