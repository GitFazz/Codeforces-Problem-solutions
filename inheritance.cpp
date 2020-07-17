#include<bits/stdc++.h>
using namespace std;

class Point2D
{
    int x,y;
public:
    Point2D(int a,int b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        printf("x=%d y=%d\n",x,y);
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
};

class point3D: public Point2D
{
    int z;
public:
     point3D(int a,int b,int c){z=c;};
    int getZ()
    {
        return z;
    }
    void print()
    {
        printf("x=%d y=%d z=%d\n",getX(),getY(),z);
    }
    void set(int a,int b,int c)
    {
        Point2D::set(a,b);
        z=c;
    }
};

int main()
{
    Point2D a(2,5),b;
    point3D c,d;
    a.print();
    c.set(1,4,3);
    c.print();
    b=c;
    b.print();
    c.print();
    return 0;

}
