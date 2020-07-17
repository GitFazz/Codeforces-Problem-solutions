#include<bits/stdc++.h>

using namespace std;

bool isValid(int n) {
n = n/60;
if(n==7||n==57||n==17||n==27||n==37||n==47) return true;
return false;
}

int main(){
int x,hh,mm;
cin>>x>>hh>>mm;
int current = mm;
int icurrent = current;
while(1) {
    if(isValid(current)) {
        cout<< (icurrent-current)/x;
    }
current -= x;
}



return 0;
}
