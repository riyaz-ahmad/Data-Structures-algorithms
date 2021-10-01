/*
name : sorting methods.cpp
written by : Riyaz Ahmad.
date : 2014/april/18.
simple template
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#include<dos.h>


using namespace std;

	  class sortingmethods
	  {
	  public :
                void bubblesort()
                    {   
					  double long arr[5000]; 
					  	double long n=5000;
                    cout<<"\n ** Bubble Sorting Algorithm ** \n\n";
                    for(int i=0;i<n;i++)
                    arr[i]=rand()%10000;
                          	//timer begins here
        	                clock_t start = clock();
       	
                             for( int i=1;i<n ;i++ )
                               {

                               for( int j=0; j<n-1; j++)
                                  {
                                      if(arr[j] > arr[j+1])
                                        {
                                           int temp;
                                           temp = arr[j];
                                            arr[j] = arr[j+1];
                                           arr[j+1] = temp;
                      
                                        }
     
                                  }
                               }
                                  //timer ends here
                                  clock_t ends = clock();
                                   cout << "Running Time in Seconds : ";
                                   cout << (double) (ends - start) / CLOCKS_PER_SEC << endl;
								   cout<<"\n\n"; 
                          }
void selectionsort()
{
		double long a[5000];
		double long m=5000;
	cout<<"\n ** Selection Sorting Algorithm ** \n\n";
	for(int i=0;i<m;i++)
	a[i]=rand()%10000;
	       	//timer begins here
        	clock_t start = clock();
	int min,t;
	for(int i=0;i<m-1;i++)
	{
		min=i;
		for(int j=i+1;j<m;j++)
		if(a[j]<a[min])
		min=j;
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	 clock_t ends = clock();
                cout << "Running Time in Seconds : ";
                cout << (double) (ends - start) / CLOCKS_PER_SEC << endl;
                cout<<"\n\n";
	 //timer ends here
}
void insertionsort()
{
	double long abb[5000];
	double long b=5000;
	cout<<"\n ** Insertion Sorting Algorithm ** \n\n";
	for(int i=0;i<b;i++)
	abb[i]=1542+rand()%3124;
		clock_t start = clock();
	int i;
	for(i=1;i<b;i++)
	{
		int t;
		t=abb[i];
		int j=i;
		while(abb[j-1]>t && j>0)
		{
			abb[j]=abb[j-1];
			--j;
		}
		abb[j]=t;
	}
	 clock_t ends = clock();
                cout << "Running Time in Seconds : ";
                cout << (double) (ends - start) / CLOCKS_PER_SEC << endl;
}
};
main()
{
   sortingmethods func;
   func.bubblesort();
   func.selectionsort();
   func.insertionsort();
   cout<<"\n\n\n";
   cout<<"**************************************************************************\n";
   cout<<" Note :  All the functions above were used to sorting 5000 numbers, \n         you can use more than that number, just change the value of \n         size of the array and it's numbers. \n";
   cout<<"**************************************************************************\n\n\n";
   cout<<" If you noticed the less execution time for these functions,\n is the insertion sorting algorithm then selection sorting algorithm,\n and after all the bubble sorting algorithm. \n";
   getch();
}
