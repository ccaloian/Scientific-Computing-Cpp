#include <iostream>

int main(int argc, char* argv[])
{
    // test dynamic memory allocation / de-allocation
    for (long int k=0; k<1000000000; k++)
    {
        // declare matrices as double pointers to double
        double **A, **B, **C;

        // allocate memory for the first level pointers (i.e. rows)
        A = new double*[2];
        B = new double*[2];
        C = new double*[2];

        // allocate memory for the second level pointers (i.e. cols)
        for (int j=0; j<2; j++)
        {
            A[j] = new double[2];
            B[j] = new double[2];
            C[j] = new double[2];
        }

        // initialize matrices A and B with some values
        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
                A[i][j] = (i + j) * 1.0;
                B[i][j] = (i + j) * 10.0;
            }
        }

        // calculate C = A + B
        for (int i=0; i<2; i++)
        {
            for (int j=0; j<2; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        /* print matrix C (NOT in the loop testing dynamic memory allocation / de-allocation)
        std::cout << "[[ " << C[0][0] << ", " << C[0][1] << "]," << "\n" 
                  << " [" << C[1][0] << ", " << C[1][1] << "]]" << "\n";
        */

        // de-allocate memory for the second level pointers
        for (int j=0; j<2; j++)
        {
            delete[] A[j];
            delete[] B[j];
            delete[] C[j];
        }

        // de-allocate memory for the first level pointers
        delete[] A;
        delete[] B;
        delete[] C;
    }

    return 0;
}