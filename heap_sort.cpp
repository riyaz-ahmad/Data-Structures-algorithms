#include<bits/stdc++.h>
using namespace std;

//heapifyinh the tree
void heapify(int arr[], int n, int i){
    int largest = i; //largest as root
    int l = 2*i+1;//left child
    int r = 2*i+2;//right child

    if(l<n && arr[l]>arr[largest]) //lest child is greater than root
        largest = l;
    if(r<n && arr[n]>arr[largest])//if right child is greater than root
        largest = r;
        //if root is not largest
    if(largest != i){
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n , largest);
    }
}

//heap sort function
void heap_sort(int arr[], int n){
    //build the heap
    for(int i = (n-1)/2; i>=0; i++)
        heapify(arr, n , i);
    for(int i = n-1; i>0;i--){
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i , 0);
    }
}

//print the array
void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    clock_t begin = clock();

    int arr[] = {12,11,13,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array: "<<endl;
    printArray(arr, n);
    heap_sort(arr, n);
    cout<<"Sorted Array: "<<endl;
    printArray(arr, n);


    clock_t end = clock();
	cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    return 0;
}