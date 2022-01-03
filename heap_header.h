#include<iostream>
using namespace std;
class MinHeap
{
    int min_heap[10];
    int size;
    public:
        MinHeap()
        {
            size=-1;
        }
        void enqueue(int e);
        void dequeue();
        void display();
        void search();
        void decreaseKey(int e,int dec);
        void findMin();
        void percolateUp(int i);
        void percolateDown(int i);
        int root(int i); 
        int left(int i); 
        int right(int i);
        bool isFull(); 
        bool isEmpty(); 
};