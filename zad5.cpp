
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

class Point
{
public:
    float x;
    float y;

    Point();
    Point(int x, int y);

} P;

Point::Point(){};

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

namespace a
{

    template <typename T>
    void swap(T &a, T &b)
    {
        std::swap(a, b);
    };
} // namespace a

int main(int argc, char **argv)
{

    int a = 1, b = 2;
    cout << "int\na: " << a << "\tb: " << b << endl;
    a::swap(a, b);
    cout << "a: " << a << "\tb: " << b << endl << endl;


    float c = 3.3, d = 4.4;
    cout << "falot\nc: " << c << "\td: " << d << endl;
    swap(c, d);
    cout << "c: " << c << "\td: " << d << endl << endl;


    Point pA;
    pA.x = 5;
    pA.y = 10;

    Point pB;
    pB.x = 3;
    pB.y = 6;

    cout << "\npA.x: " << pA.x << "\t"
         << "\t\t pA.y: " << pA.y;
    cout << "\t||\tpB.x: " << pB.x << "\t"
         << "\t\t pB.y: " << pB.y;
    swap(pA, pB);

    cout << "\npA.x: " << pA.x << "\t"
         << "\t\t pA.y: " << pA.y;
    cout << "\t||\tpB.x: " << pB.x << "\t"
         << "\t\t pB.y: " << pB.y;

    cout << endl;
    system("PAUSE");
    return 0;
}
