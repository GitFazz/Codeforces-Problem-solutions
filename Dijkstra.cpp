#include<bits/stdc++.h>
using namespace std;
#define NULL_VALUE -999999
#define INFINITY 999999
#define MAX 100005

int N,E;
bool visited[MAX];


struct ArrayList
{
	int * list;
	int length ;
	int listMaxSize ;
	int listInitSize ;
	ArrayList() ;
	~ArrayList() ;
	int searchItem(int item) ;
    void insertItem(int item) ;
	void removeItem(int item) ;
	void removeItemAt(int item);
	int getItem(int position) ;
	int getLength();
	bool empty();
	void printList();
} ;


ArrayList::ArrayList()
{
	listInitSize = 2 ;
	listMaxSize = listInitSize ;
	list = new int[listMaxSize] ;
	length = 0 ;
}

void ArrayList::insertItem(int newitem)
{
	int * tempList ;
	if (length == listMaxSize)
	{
		//allocate new memory space for tempList
		listMaxSize = 2 * listMaxSize ;
		tempList = new int[listMaxSize] ;
		int i;
        for( i = 0; i < length ; i++ )
        {
            tempList[i] = list[i] ; //copy all items from list to tempList
        }
        delete[] list ; //free the memory allocated before
        list = tempList ; //make list to point to new memory
	};

	list[length] = newitem ; //store new item
	length++ ;
}

int ArrayList::searchItem(int item)
{
	int i = 0;
	for (i = 0; i < length; i++)
	{
		if( list[i] == item ) return i;
	}
	return NULL_VALUE;
}

void ArrayList::removeItemAt(int position) //do not preserve order of items
{
	if ( position < 0 || position >= length ) return ; //nothing to remove
	list[position] = list[length-1] ;
	length-- ;
}


void ArrayList::removeItem(int item)
{
	int position;
	position = searchItem(item) ;
	if ( position == NULL_VALUE ) return ; //nothing to remove
	removeItemAt(position) ;
}


int ArrayList::getItem(int position)
{
	if(position < 0 || position >= length) return NULL_VALUE ;
	return list[position] ;
}

int ArrayList::getLength()
{
	return length ;
}

bool ArrayList::empty()
{
    if(length==0)return true;
    else return false;
}

void ArrayList::printList()
{
    int i;
    for(i=0;i<length;i++)
        printf("%d ", list[i]);
    printf("Current size: %d, current length: %d\n", listMaxSize, length);
}

ArrayList::~ArrayList()
{
    if(list) delete [] list;
    list = 0 ;
}

/// graph represtation ///

struct graph
{
    int N,E;
    int cost[10005][10005];
    int dist[10005];
    ArrayList *adjList;
    graph(int n)
    {
        N = n;
        adjList = new ArrayList[n];
        for(int i=0;i<n;i++)
            dist[i] = INFINITY;
    }

    void addEdge(int u,int v)
    {
        adjList[u].insertItem(v);
    }

    int get(int u,int i)
    {
       return adjList[u].getItem(i) ;
    }
    int getSize(int u)
    {
        return adjList[u].getLength();
    }
};


/// implementing min heap ///

struct heapNode
{
    heapNode(int vv=0,int kk=MAX)
    {
        v = vv;
        key = kk;
    }
    int v;
    int key;
};


struct MinHeap
{
    heapNode arr[MAX];
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

/// declaring graph ///

graph G(10005);

/// dijktra algorithm ///

void Dijkstra(int s)
{
    visited[s] = 1;
    for(int i=0;i<N;i++)
        G.dist[i] = MAX;

    G.dist[s] = 0;
    MinHeap Q;
    heapNode heap_s(s,G.dist[s]);

    Q.push(heap_s);

    while(Q.sz != -1)
    {
        heapNode heap_u = Q.top();
        int u = heap_u.v;
        Q.pop();

        for(int i=0;i<G.getSize(u);i++)
        {
            int v = G.get(u,i);

            if(G.dist[u]+G.cost[u][v]<G.dist[v])
            {
                G.dist[v] = G.cost[u][v] + G.dist[u];
                Q.push(heapNode(v,G.dist[v]));
            }
        }
    }

}


int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    cin>>N>>E;

    for(int i=0;i<E;i++)
    {
        int u,v,c;
        cin>>u>>v>>c;
        G.addEdge(u,v);
        G.addEdge(v,u);
        G.cost[u][v] = c;
        G.cost[v][u] = c;
    }

    Dijkstra(0);

    for(int i=0;i<N;i++)
    {
        cout << "dist["<<i<<"] = " << G.dist[i] << endl;
    }


    return 0;
}
