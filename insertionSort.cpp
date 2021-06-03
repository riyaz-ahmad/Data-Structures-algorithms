#include<bits/stdc++.h>

using namespace std;

#define S                        500
#define ll                       long long int
#define ld                       long double
#define endl                     "\n"
#define mid(l,r)                 l+(r-l)/2
#define swap(a, b)     {int temp; temp = a; a = b; b = temp;}


void print(ll *a, ll n){
    for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void insertionSort(ll *a, ll n){
    //loop for iterating through the loop i.e number of passes
    for(ll i=1;i<n; i++){
        ll key = a[i];
        ll j = i-1;
        //for comparing the elements
        while(j>=0 && key <= a[j]){
            a[j+1] = a[j];
            j--;
        }//while ends here
    }//for loop ends here

}// function ends here




int main(){
    clock_t begin = clock();
    //write your code here
    ll a[S];
    ll n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" number of elements: "<<endl;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<"Unsotred Array: "<<endl;
    print(a, n);
    cout<<"Sorted Array "<<endl;
    insertionSort(a, n);
    print(a, n);








    #ifndef ONLINE_JUDGE 
	  clock_t end = clock();
	  cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
	#endif 
	return 0;

}