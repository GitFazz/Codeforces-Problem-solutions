#include<bits/stdc++.h>
using namespace std;


struct heapNode
{
    int v;
    int key;
};

struct node
{
    int vertex;
    struct node* next;
};

struct Graph
{
    int numVertices;
    struct node** adjLists;
};

struct MinHeap
{
    heapNode arr[100005];
    int sz = -1;

    int parent(int i)
    {
        return (i-1)/2;
    }
    int left(int i)
    {
        return (i*2) + 1;
    }
    int right(int i)
    {
        return (i*2) + 2;
    }
    void pop()
    {
        arr[0] = arr[sz];
        sz--;
        siftDown(0);
    }
    void push(heapNode newheap)
    {
        sz++;
        arr[sz] = newheap;
        siftUp(sz);
    }

    heapNode top()
    {
        return arr[0];
    }

    void siftDown(int i)
    {
        int li = left(i);
        int ri = right(i);
        int mini = i;

        if(arr[li].key<arr[i].key && li <= sz)
        {
            mini = li;
        }
        if(arr[ri].key<arr[i].key && ri <= sz)
        {
            mini = ri;
        }
        if(mini != i)
        {
            swap(arr[i],arr[mini]);
            siftDown(mini);
        }
    }

     void siftUp(int i)
    {

        int pi = parent(i);
        if(arr[i].key<arr[pi].key)
        {
            swap(arr[i],arr[pi]);
            if(pi==0)
                return;
            else
                siftUp(pi);
        }
    }

};




int main()
{
    MinHeap PQ;
    int test;
    while(1)
    {
        cout << "1: push 2: pop 3: top " << endl;
        cin>>test;

        if(test == 1){
            heapNode t; cin>>t.v>>t.key;
            PQ.push(t);
        }
        if(test == 2)
        {
            PQ.pop();
        }
        if(test == 3)
        {
            heapNode t = PQ.top();
            cout << "( " << t.v << " : " << t.key << " )" << endl;
        }
    }


    return 0;
}
