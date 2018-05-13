#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char* argv[])
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream outfile("x_and_y.dat");
    assert(outfile.is_open());

    // part (3)
    outfile.setf(std::ios::scientific);
    outfile.setf(std::ios::showpos);
    outfile.precision(10);

    // write x to outfile
    for (int i=0; i<4; i++) outfile << x[i] << "\t";
    outfile << "\n";
    outfile.flush(); // part(2)
    
    // write y to outfile
    for (int i=0; i<4; i++) outfile << y[i] << "\t";
    outfile << "\n";
    outfile.flush(); // part (2)

    outfile.close();

    return 0;
}
