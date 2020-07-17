#include<iostream>
using namespace std;
class cat
{
    int age,height,weight;
public:
    cat(int a,int b,int c){age=a;height=b;weight=c;};
    ~cat(){};
    int pp(int n)
    {
        age=age+n;
        return age;
    }
    void get() const
    {
        cout<<age<<" "<<height<<" "<<weight<<endl;
            }
};
int main()
{
    cat frisky(5,5,5);
    frisky.pp(3);
    frisky.get();


    return 0;
}
