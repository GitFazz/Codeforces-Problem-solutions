#include<bits/stdc++.h>
using namespace std;


int i,j,k,n,t,cnt;

int a[6];

int main()
{

    vector<int>::iterator it;


    vector<int> av;



    for(i=0;i<6;i++)
    {
        cin>>a[i];
        av.push_back(a[i]);
    }


    for(i=0;i<6;i++)
    {
        cnt=0;
        for(j=0;j<6;j++)
        {
            if(a[i]==a[j])cnt++;
        }
        if(cnt>=4)
        {
            t=a[i];
            break;
        }
    }
    if(cnt<4)
        cout<<"Alien";
    else{

     for(i=0;i<6;i++){

             if(k==4)break;

        for(it=av.begin(); it!=av.end(); it++)
        {
            if(t==*it)
            {
               av.erase(it);
               k++;
               break;
            }


        }

    }








    if(av[0]==av[1])
    cout<<"Elephant";
    else
        cout<<"Bear";
}


    return 0;
}
