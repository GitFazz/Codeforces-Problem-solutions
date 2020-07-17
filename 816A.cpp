#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,changem,changeh,fchangem,i,j,k;
    char in[5];
    gets(in);
    h=(in[0]-'0')*10+(in[1]-'0');
    m=(in[3]-'0')*10+(in[4]-'0');
    changem=(in[1]-'0')*10+(in[0]-'0');
    changeh=h+1;
    fchangem=(changeh%10)*10+(changeh/10);
    if((h>=0&&h<=4)||(h>=10&&h<=14)||(h>=20&&h<=22))
    {
        if(m<=changem)printf("%d",changem-m);
        else printf("%d",(60-m)+fchangem);
    }
    else if(h>=5&&h<=9)
    {
        if(h==5){
            if(m<=changem)cout<<changem-m<<endl;
        else cout<<(60-m)+60*4+1<<endl;

        }
        else
        {
            cout<<(60-m)+(10-h-1)*60+1<<endl;
        }
    }
    else if(h>=15&&h<=19)
    {
        if(h==15){
                if(m<=changem)cout<<changem-m<<endl;
        else cout<<(60-m)+60*4+2<<endl;
        }
        else
        {
            cout<<(60-m)+(20-h-1)*60+2<<endl;
        }
    }
    else if(h==23)
    {
        if(m<=changem)cout<<changem-m<<endl;
        else
        cout<<60-m<<endl;
    }

}
