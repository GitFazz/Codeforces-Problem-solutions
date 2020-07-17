#include<bits/stdc++.h>
using namespace std;

bool isPrime[105];

void sieve_prime()
{

    for(int div = 2;div*div<=100;div++)
    {
        if(isPrime[div]==true)
        {
            for(int i=div*div;i<=100;i+=div)
            {
                isPrime[i] = false;
            }
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    memset(isPrime,true,sizeof(isPrime));
    sieve_prime();
    int N;
    int t = 1;
    while(cin>>N){
            int item[N];
            for(int i=0;i<N;i++)
                item[i] = i+1;
            cout << "Case "<<t<<":" << endl;
            do{

                for(int l=0;l<N;l++)
                {
                    int r = (l+1)%N;
                    if(isPrime[item[l]+item[r]]==false)
                        goto foo;
                }


                    for(int i=0;i<N;i++)
                    {
                        cout << item[i] << " ";
                    }
                    cout<<endl;

                foo:
                    {
                        // this permutations is not following the cond!!
                    }
            }while(next_permutation(item,item+N));
            cout << endl;
            t++;
    }
    return 0;
}
