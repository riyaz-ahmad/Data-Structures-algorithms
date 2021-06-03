#include<bits/stdc++.h>

using namespace std;

#define S                        500
#define ll                       long lon int
#define ld                       long double
#define endl                     "\n"
#define mid(l,r)                 l+(r-l)/2
#define swap(a, b)     {int temp; temp = a; a = b; b = temp;}

void bubbleSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0;j<n-(i+1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
if(swapped == false) break;
    }
}

void print(int *a, int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}




int main(){
    clock_t begin = clock();
    //write your code here
    int * a = new int[S];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<" Enter "<<n<<" number of elements: "<<endl;
    for(int i=0; i<n;i++)
    cin>>a[i];
    cout<<" Unsorted Array: "<<endl;
    print(a, n);
    cout<<" Sorted Array: "<<endl;
    bubbleSort(a, n);
    print(a, n);
    #ifndef ONLINE_JUDGE 
	  clock_t end = clock();

	  cout<<endl<<endl<<"---------------------------------------------------"<<endl
                     <<"Executed In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms"<<endl
                     <<"-----------------------------------------------------"<<endl;
	#endif 
	return 0;

}