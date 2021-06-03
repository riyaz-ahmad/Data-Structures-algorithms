#include<bits/stdc++.h>
using namespace std;
#define N 100
int binary(int * arr, int data, int l, int r){
    
    int mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if(arr[mid]==data){
            return mid+1;
            break;
        }
        else
            if(arr[mid]<data)
                l = mid+1;
        else    
            r = mid-1;
    }
    return -1;
}

int main(){
    int *arr = new int[N];
    int n, data;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" number of elements "<<endl;
    for(int i=0; i<n;i++)
        cin>>arr[i];
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);
    //int data;
    cout<<"Enter the element you want to search: ";
    cin>>data;
    int res = binary(arr, data, l, r);
    if(res==-1)
     cout<<"Element not found"<<endl;
       
    else   
     cout<<"Element found at "<<res<<endl;
       


    return 0;
}
