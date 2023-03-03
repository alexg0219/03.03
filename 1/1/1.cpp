#include <iostream>

using namespace std;

struct Point3D
{
public:

    Point3D(int argx, int argy, int argz) :
        x(argx),
        y(argy),
        z(argz)
    {}


    Point3D() :
        x(0),
        y(0),
        z(0)
    {}
    
    void Print()
    {
        cout << "x=" << x << endl << "y=" << y << endl << "z=" << z;
    }

private:
    const int x;
    const int y;
    const int z;
};

int main()
{
    Point3D kub(1,2,2);
    kub.Print();
}
