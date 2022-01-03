#include "heap_header.h"
void MinHeap::enqueue(int e)
{
    if(!isFull())
    {
        size++;
        min_heap[size]=e;
        int index = size;
        percolateUp(index);
        cout<<"\nElement Queued.\n\n";
    }
    else
        cout<<"\nQueue is full.\n\n";
}
void MinHeap::dequeue()
{
    if(isEmpty())
    {
        cout<<"\nHeap is empty.\n\n";
        return;
    }
    int ele = min_heap[0];
    cout<<"\nDequeued element : "<<ele<<"\n\n";
    min_heap[0]=min_heap[size];
    size--;
    percolateDown(0);
}
void MinHeap::display()
{
    if(isEmpty())
    {
        cout<<"\nHeap is empty.\n\n";
        return;
    }
    cout<<"Min Heap : ";
    for(int i=0;i<size+1;i++)
        cout<<min_heap[i]<<"   ";
    cout<<"\n\n";
}
void MinHeap::search()
{
    if(isEmpty())
    {
        cout<<"\nHeap is empty.\n\n";
        return;
    }
    int e;
    cout<<"Enter the element to search : ";
    cin>>e;
    for(int i=0;i<size+1;i++)
    {
        if(min_heap[i]==e)
        {
            cout<<"\nElement found.\n\n";
            return;
        }
    }
    cout<<"\nElement not found.\n\n";
}
void MinHeap::decreaseKey(int e,int dec)
{
    int flag=0,index;
    for(int i=0;i<size+1;i++)
    {
        if(min_heap[i]==e)
        {
            index=i;
            flag=1;
        }
    }
    if(flag==1)
    {
        min_heap[index]-=dec;
        cout<<"Value of "<<e<<" is decreased by "<<dec<<"\n\n";
        percolateUp(index);
    }
    else
        cout<<"\nElement not found.\n\n";
}
void MinHeap::findMin()
{
    if(isEmpty())
    {
        cout<<"\nHeap is empty.\n\n";
        return;
    }
    cout<<"\nMinimum element : "<<min_heap[0]<<"\n\n";
}
void MinHeap::percolateUp(int i)
{
    if(i && min_heap[root(i)] > min_heap[i])
    {
        swap(min_heap[i],min_heap[root(i)]);
            percolateUp(root(i));
    }
}
void MinHeap::percolateDown(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if(l < size+1 && min_heap[l] < min_heap[i]) 
    {
        smallest = l;
    }
    if(r < size+1 && min_heap[r] < min_heap[smallest]) 
    {
        smallest = r;
    }
    if(smallest != i)
    {
        swap(min_heap[i],min_heap[smallest]);
        percolateDown(smallest);
    }
}
int MinHeap::root(int i)
{
    return (i-1)/2;
}
int MinHeap::left(int i)
{
    return (i*2)+1;
}
int MinHeap::right(int i)
{
    return (i*2)+2;
}
bool MinHeap::isFull()
{
    if(size==9)
        return true;
    return false;
}
bool MinHeap::isEmpty()
{
    if(size==-1)
        return true;
    return false;
}