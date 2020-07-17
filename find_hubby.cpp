#include<bits/stdc++.h>

using namespace std;
struct find_hubby{
    int height,salary;
    string name;
    long long int weight;
}v[100];

bool mysort(int x,int y)
   {
       return (x%10)<(y%10);
   }

bool compare(find_hubby a,find_hubby b)
{
    if(a.salary>b.salary) return true;
    else
    {
        if(a.height>b.height) return true;

        else
        {
            if(a.weight<b.weight) return true;
            else return a.name.length()<a.name.length();
        }
    }
}



int main()
{
	//freopen("input.txt", "r", stdin);
    	//freopen("output.txt", "w", stdout);

    	int i,j,k,n;
    	cin>>n;

    	for(i=0;i<n;i++)
        {
            cin>>v[i].name>>v[i].salary>>v[i].height>>v[i].weight;
        }

        sort(v,v+n,compare);



    	for(i=0;i<n;i++)
        {
           cout<<v[i].name<<" : "<<"height: "<<v[i].height<<"Salary: "<<v[i].salary<<"weight: "<<v[i].weight<<endl;
        }



	return 0;
}
