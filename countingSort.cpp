#include<bits/stdc++.h>

using namespace std;

#define S                        500
#define ll                       long long int
#define ld                       long double
#define endl                     "\n"
#define mid(l,r)                 l+(r-l)/2
#define swap(a, b)     {int temp; temp = a; a = b; b = temp;}

void printArray(int *a, int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void countingsort(int * arr, int n){
    int *output = new int[S];
    int *count = new int[S];

    int max = arr[0];

    //finding the maximum of the array
    for (int i = 0; i < n; i++){
        if(arr[i]>max)
            max = arr[i];
    }

    for(int i=0;i<=max;i++)
        count[i] = 0;

    
    //store count of each element
    for(int i=0;i<n;i++)
        count[arr[i]]++;

    //store the cummulative sum
    for(int i=1;i<=max;i++){
        count[i] += count [i-1];
        
    }
    
    for(int i = n-1;i>=0;i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i] = output [i];

}



int main(){
    clock_t begin = clock();
    //write your code here
    int * arr = new int [S];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements of an array:"<<endl;
    for(int i=0; i<n;i++)
        cin>>arr[i];
    cout<<"=============Unsorted Array=============="<<endl;
    printArray(arr, n);

    cout<<"==============Sorted Array=================="<<endl;
    countingsort(arr, n);
    printArray(arr, n);


    #ifndef ONLINE_JUDGE 
	clock_t end = clock();
	cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;

}