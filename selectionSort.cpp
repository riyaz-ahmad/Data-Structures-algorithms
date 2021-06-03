#include<bits/stdc++.h>

using namespace std;
#define N 50




void selection_sort(int * a, int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(a[j]<a[min])
                min = j;
        }
        if(min != i){
            int t = a[min];
            a[min] = a[i];
            a[i] = t;
        }
    }
    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;

}

int main(){
    int n;
    int * arr = new int[N];
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter "<<n<<" number of elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Unsorted Array: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    selection_sort(arr, n);

    return 0;
}