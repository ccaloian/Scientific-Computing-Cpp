#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    const int num_iter = 100;
    double x[num_iter];
    x[0] = 0;

    double f_x, fp_x;
    for (int i=1; i<num_iter; i++)
    {
        f_x = exp(x[i-1]) + pow(x[i-1], 3) -5;
        fp_x = exp(x[i-1]) + 3*pow(x[i-1], 2);
        x[i] = x[i-1] - f_x/fp_x;
        std::cout << "iter: " << i    << "\t"
                  << "x: "    << x[i] << "\t"
                  << "f(x): " << f_x  << "\n";
    }
    
    return 0;
}

