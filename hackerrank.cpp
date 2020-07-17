#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int tmp,m,h,s;
    char  time[10],temp[2];
    cin >> time;
    temp[0]=time[0];
    temp[1]=time[1];
    tmp=atoi(temp);
    if(time[8]=='A')
        h=tmp%12;
    else h=tmp+12;
    temp[0]=time[3];
    temp[1]=time[4];
    tmp= atoi(temp);
    m=tmp;
    temp[0]=time[6];
    temp[1]=time[7];
    tmp=atoi(temp);
    s=tmp;
    cout <<h<<" : "<<m<<" : "<<s<<endl;
    return 0;
}
