#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 10005 //maximum node
#define pii pair<int, int>
#define EPS 1e-12

vector<int> adj[6000];
vector<int> adj1[6000];
vector<int> adj2[6000];

int vis[100];
int cnt;

int color[10009];

void dfs(int at, int co){
    color[at] = co;
    if (vis[at])return;
    vis[at] = 1;

    for(int i=0;i < adj[at].size(); i++){
        dfs(adj[at][i], co);
    }
}

int bfsShortestPath(int source, int n){
    int level[500] , visited[500];
    for(int i=0;i<500;i++){
        level[i] = -1;
        visited[i] = 0;
    }

    level[source] = 0;

    queue<int> Q;
    Q.push(source);
    visited[source] = 1;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int j=0;j<adj[u].size();j++){
            if(level[adj[u][j]] == -1){
                Q.push(adj[u][j]);
                level[adj[u][j]] = abs(level[u] - 1);
            }
            else if(level[adj[u][j]] == level[u]){
                return 0;
            }
            visited[adj[u][j]] = 1;
        }
    }

    return 1;
}
int x, y, d;

void extendEuclid(int a, int b){
    if(b == 0){
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendEuclid(b ,a % b);
    int x1 = y;
    int y1 = x - (a / b) * y;
    x = x1;
    y = y1;
}


int a[11] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
int b[10];

void merging(int low, int mid, int high) {
    int l1, l2, i;

    for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        if(a[l1] <= a[l2])
            b[i] = a[l1++];
        else
            b[i] = a[l2++];
    }

    while(l1 <= mid)
        b[i++] = a[l1++];

    while(l2 <= high)
        b[i++] = a[l2++];

    for(i = low; i <= high; i++)
        a[i] = b[i];
}

void sort(int low, int high) {
    int mid;

    if(low < high) {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid+1, high);
        merging(low, mid, high);
    } else {
        return;
    }
}
int cnt1[10],cnt2[10];

ll ar[2000];
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,i,b,m, k, j, hh, mm, max = -10000000;
    cin >> n;
    ll a[n];
    for(i=0;i<n;i++){
        cin >>a[i];
        if(a[i] > max && sqrt(a[i]) != floor(sqrt(a[i])) ){
            max = a[i];
        }
    }

    cout << max;
    return 0;

}
