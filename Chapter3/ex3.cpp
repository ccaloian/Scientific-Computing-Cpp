#include <iostream>
#include <fstream>
#include <cmath>
#include <cassert>
#include <cstdlib>

int main(int argc, char* argv[])
{
    // read command line argument for number of grid points n
    // and calculate the step h
    // assumption: 0 <= x <= 1
    int n = atoi(argv[1]);
    assert(n > 1);
    double h = 1.0/((double) (n));

    // prepare output file for writing
    std::ofstream outfile("xy.dat");
    assert(outfile.is_open());

    // Euler method to solve initial value ODE
    // dy/dx = -y, y0=1
    double y_curr;
    double y_prev = 1.0;
    double x_curr = 0.0;
    for (int i=1; i<=n; i++)
    {
        y_curr = y_prev / (h + 1.0);
        outfile << x_curr << "\t" << y_prev << "\n";
        x_curr = ((double) (i)) * h;
        y_prev = y_curr;
    }
    outfile << x_curr << "\t" << y_prev << "\n";
    
    outfile.close();
    return 0;
}
