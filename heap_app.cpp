#include "heap_header.h"
int main()
{
    MinHeap m;
    int ch,e,dec;
    do
    {
        cout<<"\t==========MENU==========\n";
    	cout<<"\t\t1.Enqueue\n";
    	cout<<"\t\t2.Dequeue\n";
    	cout<<"\t\t3.Display\n";
        cout<<"\t\t4.Search\n";
        cout<<"\t\t5.Decrease Key\n";
        cout<<"\t\t6.Find Min\n";
    	cout<<"\t\t7.Exit\n";
    	cout<<"\t========================\n";
    	cout<<"\nEnter your choice : ";
    	cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to be inserted : ";
                cin>>e;
                m.enqueue(e);
                break;
            case 2:
                m.dequeue();
                break;
            case 3:
                m.display();
                break;
            case 4:
                m.search();
                break;
            case 5:
                cout<<"Enter the element to decrease key : ";
                cin>>e;
                cout<<"Enter a value to be decreased : ";
                cin>>dec;
                m.decreaseKey(e,dec);
                break;
            case 6:
                m.findMin();
                break;
            case 7:
                break;
            default:
                cout<<"\nEnter a valid choice.\n\n";
                break;
        }
    }while(ch!=7);
}