#include<bits/stdc++.h>

using namespace std;

#define N 50

int binarySearch(int *arr, int n, int target){
    int l = 0;
    int r = n-1;
    while(l<=r){
        int mid = l+(r-l);
        if(arr[mid] == target) return mid+1;
        else if(arr[mid]>target)
            r = mid -1;
        else    
            l = mid+1;
    }
    return -1;
}

int main(){
    int n, target;
    int *a = new int[N];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"ENter the taget element: ";
    cin>>target;
    int res = binarySearch(a, n,target);
    if(res==-1) cout<<endl<<"Element not found"<<endl;
    else    cout<<" "<<target<<" found at index: "<<res;

    return 0;
}