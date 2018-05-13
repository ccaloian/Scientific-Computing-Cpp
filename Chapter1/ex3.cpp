#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    // get values for vector u
    double u[3];
    std::cout << "Enter values for vector u (double, R^3) followed by RETURN: ";
    std::cin >> u[0] >> u[1] >> u[2];
    
    // get values for vector v
    double v[3];
    std::cout << "Enter values for vector v (double, R^3) followed by RETURN: ";
    std::cin >> v[0] >> v[1] >> v[2];

    // compute u.v
    double dot_prod_uv;
    dot_prod_uv = u[0] * v[0] + u[1] * v[1] + u[2] * v[2];
    std::cout << "u.v = " << dot_prod_uv << "\n";

    // compute ||u||_2
    double norm2_u;
    norm2_u = sqrt( pow(fabs(u[0]), 2) + pow(fabs(u[1]), 2) + pow(fabs(u[2]), 2) );
    std::cout << "||u||_2 = " << norm2_u << "\n";

    // compute ||v||_2
    double norm2_v;
    norm2_v = sqrt( pow(fabs(v[0]), 2) + pow(fabs(v[1]), 2) + pow(fabs(v[2]), 2) );
    std::cout << "||v||_2 = " << norm2_v << "\n";

    return 0;
}
