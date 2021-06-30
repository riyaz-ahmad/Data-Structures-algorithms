#include<bits/stdc++.h>
using namespace std;


//class for designing heap as an abt
class min_heap{
    private:
        //use a vector of int to implement a heap
        vector<int> heap;
        int left_child(int p);
        int right_child(int p);
        int parent(int child);
        void up_heapify(int id);
        void down_heapify(int id);
    public:
        min_heap(){}
        void insert(int element);
        void delete_min();
        int extract_min();
        void display_heap();
        int heap_size();
};

//return size of heap
int min_heap::heap_size(){
    return heap.size();
}

//insert an element into the heap
void min_heap::insert(int element){
    heap.push_back(element);
    up_heapify(heap.size()-1);
}

//delete an element from the heap
void min_heap::delete_min(){
    if(heap.size()==0){
        cout<<"Heap is Empty"<<endl;
        return;
    }
    //assigning the child to root node
    heap[0] = heap.at(heap.size()-1);
    heap.pop_back();
    down_heapify(0);
    cout<<"Element Deleted"<<endl;
}

//extract minimum element
int min_heap::extract_min(){
    if(heap.size()==0)
        return -1;
    else    
        return heap.front();
}

//display the heap
void min_heap::display_heap(){
    vector<int> :: iterator pos = heap.begin();
    cout<<"Heap-->";
    while(pos != heap.end()){
        cout<<*pos<<" ";
        pos++;
    }
    cout<<endl;
}

//return left child
int min_heap::left_child(int p){
    int l = 2 * p + 1;
    if(l<heap.size())
        return l;
    else
        return -1;
}

//return the right child
int min_heap::right_child(int p){
    int r = 2 * p + 2;
    if(r<heap.size())
        return r;
    else
        return -1;
}

//return the parent 
int min_heap :: parent(int child){
    int p = (child-1)/2;
    if(child==0)
        return -1;
    else    
        return p;
}

//maintain heap structure from bottom to top i.e, up heapify
void min_heap::up_heapify(int in){
    if(in>=0 && parent(in)>=0 && heap[parent(in)]>heap[in]){
        int temp = heap[in];
        heap[in] = heap[parent(in)];
        heap[parent(in)] = temp;
        up_heapify(parent(in));
    }
}

//maintain the heap structure fro top to bottom that is down heapify
void min_heap::down_heapify(int in){
    int left = left_child(in);
    int right = right_child(in);
    if(left>=0 && right>=0 && heap[left]>heap[right]){
        left = right;
    }
    if(left>0){
        int temp = heap[in];
        heap[in] = heap[left];
        heap[left] = temp;
        down_heapify(left);
    }
}

int main(){
    min_heap h;
  
    int n, ele;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        h.insert(ele);
    }
    cout<<"Elements of Heap"<<endl;
    h.display_heap();

    cout<<"Minimum Element "<<h.extract_min()<<endl;
    cout<<"Deleting the minimum element"<<endl;
    h.delete_min();
    h.display_heap();
    return 0;
    
}