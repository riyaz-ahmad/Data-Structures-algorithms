#include<bits/stdc++.h>
#define N 100
using namespace std;

int main(){
    int arr[N];
    int n,data, pos;
    bool flag = false;
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<endl;
    cout<<"Enter the data element: ";
    cin>>data;
    cout<<endl;
    

    for(int i=0;i<n;i++){
        if(arr[i] == data){
          //  cout<<" "<<data<<" Found at index "<<i+1<<endl;
            flag = true;
            pos = i+   1;
            break;
        }
    }
    if(flag) cout<< data<<" element found at position "<<pos<<endl;
    else cout<<"Element not found";
    

return 0;

}