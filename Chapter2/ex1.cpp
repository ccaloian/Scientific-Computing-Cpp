#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{
    double x, y, z;
    double EPS = 1.0e-8;

    // part (a)
    x = 10.0; y = -1.0;
    if ((x > y) || (x < 0.5)) { z = 4.0; }
    // y >= x and x >= 0.5
    else { z = 2.0; }
    assert( fabs(z - 4.0) < EPS);
    std::cout << "x = " << x << ", y = " << y << " => z = " << z << "\n"; 

    // part (b)
    x = 10.0; y = 20.0;
    if ((x > y) || (x < 0.5)) { z = 4.0; }
    // y >= x and x >= 0.5
    else { z = 2.0; }
    assert( fabs(z - 2.0) < EPS);
    std::cout << "x = " << x << ", y = " << y << " => z = " << z << "\n"; 

    // part (c)
    x = 0.0; y = 20.0;
    if ((x > y) || (x < 0.5)) { z = 4.0; }
    // y >= x and x >= 0.5
    else { z = 2.0; }
    assert( fabs(z - 4.0) < EPS);
    std::cout << "x = " << x << ", y = " << y << " => z = " << z << "\n"; 

    return 0;
}
