#include<bits/stdc++.h>
using namespace std;
void ChangeIt(int &num) {
  num = 5;
}
int main()
{
    int MyNum = 1;
ChangeIt(MyNum);
cout << "MyNum = " << MyNum << endl;


    return 0;
}
