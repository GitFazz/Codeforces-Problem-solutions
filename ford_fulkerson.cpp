#include<bits/stdc++.h>
using namespace std;

bool visited[10005];
int parent[10005];
int resCap[1000][1000],graph[1000][1000];
int N,E,s,t;

/// Dynamic array list to implement graph
class ArrayList
{
	int * list;
	int length ;
	int listMaxSize ;
	int listInitSize ;
public:
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


/// BFS
bool BFS()
{
    queue<int> Q;
    memset(visited,0,sizeof(visited));
    visited[s] = 1;
    Q.push(s);
    parent[s] = -1;
    while(!Q.empty())
    {

        int u = Q.front();
        Q.pop();

        for(int v=0;v<N;v++)
        {

            if(visited[v]==0&&resCap[u][v]>0)
            {
               // cout << u << "-->"<<v << endl;
                visited[v] = 1;
                parent[v] = u;
                Q.push(v);
            }
        }
    }


    return (visited[t]==1);
}

int fordFulkerson()
{

    int maxFlow = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            resCap[i][j] = graph[i][j];
        }
    }

    while(BFS())
    {
        int pathFlow = 1000005;
        for(int v = t;v!=s;v=parent[v])
        {

           // cout << v << endl;
            int u = parent[v];
            pathFlow = min(pathFlow,resCap[u][v]);
        }

        for(int v = t;v!=s;v=parent[v])
        {
            int u = parent[v];
            resCap[u][v] -= pathFlow;
            resCap[v][u] += pathFlow;
        }

        maxFlow += pathFlow;
    }

    return maxFlow;
}

int main()
{
  //  freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for(int tt=1;tt<=T;tt++){n


    cin>>N;
    cin>>s>>t>>E;
    s--; t--;

    for(int i=0;i<E;i++)
    {
        int u,v,c;
        cin>>u>>v>>c;
        u--; v--;
        graph[u][v] += c;
        graph[v][u] +=c;
    }



    cout << "Case "<<tt<<": "<< fordFulkerson() << endl;

    memset(parent,-1,sizeof(parent));
    memset(resCap,0,sizeof(resCap));
    memset(graph,0,sizeof(graph));
    }

    return 0;
}
