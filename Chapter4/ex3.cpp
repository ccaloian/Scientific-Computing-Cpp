#include <iostream>


int main(int argc, char* argv[])
{
    // test dynamic memory allocation / de-allocation
    for (long int j=0; j<1000000000; j++)
    {
        // allocate memory for two vectors of size 3
        double* u = new double[3];
        double* v = new double[3];

        u[0] = 1.0; u[1] = 2.0; u[2] = 3.0;
        v[0] = 6.0; v[1] = 3.0; v[2] = 2.0;
        
        // calculcate u.v (dot product)
        double dot_prod = 0;
        for (int i=0; i<3; i++)
        {
            dot_prod += u[i] * v[i];
        }
        
        /* do not print the dot product in the for loop
        std::cout << "u.v = " << dot_prod << "\n"; 
        */

        // de-allocate memory for the two vectors
        delete[] u;
        delete[] v;
    }
    
    return 0;
}