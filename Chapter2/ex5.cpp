#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{
    const double EPS = 1.0e-8;
    double A[2][2] = {{4, 10}, {1, 1}};
    
    // compute the det(A0
    double detA;
    detA = A[0][0]*A[1][1] - A[0][1]*A[1][0];
    
    // check whether the det(A) != 0
    assert(fabs(detA) > EPS);
    
    double Ainv[2][2];
    Ainv[0][0] = (1.0/detA)*A[1][1];
    Ainv[0][1] = (1.0/detA)*(-1.0)*A[0][1];
    Ainv[1][0] = (1.0/detA)*(-1.0)*A[1][0];
    Ainv[1][1] = (1.0/detA)*A[0][0];
     
    // print the inverse of A
    std::cout << "inv(A):\n";
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            std::cout << Ainv[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0; 
}
