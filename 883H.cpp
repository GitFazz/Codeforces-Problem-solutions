#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define INF (1LL << 55)
#define MOD (1000 * 1000 * 1000 + 7)
#define maxn 400111

typedef long long ll;
typedef long double ld;

char str[maxn];
int num[333];
int sod[333];
int lih[333];

vector<int> l;

int main(){
	int n;
	scanf("%d", &n);
	scanf("%s", str);

	for(int i = 0; i < n; i++)
		num[str[i] - '0']++;

	int cnts = 0, cntl = 0;
	for(int i = 0; i < 333; i++){
		sod[i] = num[i] / 2;
		num[i] %= 2;
		lih[i] = num[i];
		if(lih[i])
			l.pb(i);

		cnts += sod[i];
		cntl += lih[i];
	}

	if(cntl == 0){
		vector<int> v;
		printf("1\n");
		for(int i = 0; i < 333; i++){
			while(sod[i]){
				sod[i]--;
				v.pb(i);
			}
		}

		for(int i = 0; i < v.size(); i++)
				printf("%c", v[i] + '0');

		for(int i = v.size() - 1; i >= 0; i--)
				printf("%c", v[i] + '0');
		return 0;
	}

	int ind = 0;
	while(cnts % cntl != 0){
		cntl += 2;
		cnts--;
		while(ind < 333 && sod[ind] == 0)
			ind++;

		sod[ind]--;

		l.pb(ind);
		l.pb(ind);
	}

	if(cntl && cnts % cntl == 0){
		int st = cnts / cntl;
		int ind = 0;
		printf("%d\n", cntl);
		for(int i = 0; i < cntl; i++){
			vector<int> v;
			while(ind < 333 && v.size() < st){
				while(sod[ind] == 0)
					ind++;

				v.pb(ind);
				sod[ind]--;
			}

			for(int j = 0; j < v.size(); j++)
				printf("%c", v[j] + '0');

			printf("%c", l[i] + '0');

			for(int j = v.size() - 1; j >= 0; j--)
				printf("%c", v[j] + '0');

			printf(" ");
		}
		return 0;
	}
	return 0;
}
