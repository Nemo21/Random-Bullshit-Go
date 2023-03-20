#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//here now is "i"
int heap[100], heapSize=-1;
//heap of maxsize 100
//decrement heapsize by 1
//fxn created named insert to insert elements in the heap 
//this fxn contains to increment heapsize by 1 and then insert the element at the last place 
    //this fxn starts a loop from i=heapsize, condition i!=0 and heap[parent(i)]
    //heap[i]=assigned to be parent and then i=(i-1)/2

void Insert(int element) 
{
  heapSize++;
  heap[heapSize] = element; /*Insert in the last place*/
  int now = heapSize;
  while (now!=0 && heap[(now-1) / 2] > element) 
  {
    heap[now] = heap[(now-1) / 2];
    now = (now-1) / 2;
  }
  heap[now] = element;
}

int DeleteMin() 
{
  /* heap[0] is the minimum element. So we remove heap[0]. Size of the heap is decreased.
     Now heap[0] has to be filled. We put the last element in its place and see if it fits.
     If it does not fit, take minimum element among both its children and replaces parent with it.
     Again See if the last element fits in that place.*/
  int minElement, lastElement, child, now;
  minElement = heap[0];
  lastElement = heap[heapSize--];
  for (now = 0; now * 2 < heapSize; now = child) 
  {
    /* child is the index of the element which is minimum among both the children */
    /* Indexes of children are i*2 + 1 and i*2 + 2*/
    child = now * 2 + 1;
    if (child != heapSize && heap[child + 1] < heap[child])
      child++;
    /* To check if the last element fits or not it suffices to check if the last element is less than the minimum element among both the children*/
    if (lastElement > heap[child])
      heap[now] = heap[child];
    else /* It fits there */
      break;
  }
  heap[now] = lastElement;
  return minElement;
}

int main() {
  int i;
  Insert(10);
  Insert(40);
  Insert(15);
  cout<<"Heap array after inserting 10, 40, 15 elements : ";
  for (i = 0; i < 3; i++)
    cout<<heap[i]<<" ";
  cout<<endl;
  Insert(30);
  cout<<"Heap array after inserting 10, 40, 15, 30 elements : ";
  for (i = 0; i < 4; i++)
    cout<<heap[i]<<" ";
  cout<<endl;
  Insert(25);
  cout<<"Heap array after inserting 10, 40, 15, 30, 25 elements : ";
  for (i = 0; i < 6; i++)
    cout<<heap[i]<<" ";
  cout<<endl;
  Insert(35);
  cout<<"Heap array after inserting 10, 40, 15, 30, 25, 35 elements : ";
  for (i = 0; i < 6; i++)
    cout<<heap[i]<<" ";
  cout<<endl;
  cout<<"Elements deleted from heap in following order : \n";
  for (i = 0; i < 6; i++)
    cout<<DeleteMin()<<" ";
  return 0;
}