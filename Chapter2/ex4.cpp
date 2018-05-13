#include <iostream>

int main(int argc, char* argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                      {7.0, 1.0, 2.0},
                      {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                      { 1.0, 0.0, 0.0},
                      { 4.0, 1.0, 0.0}};
    double w[3];
    for (int i=0; i<3; i++)
    {
        w[i] = u[i] - 3.0*v[i];
    }

    double x[3];
    for (int i=0; i<3; i++) x[i] = u[i] - v[i];
    // print x
    std::cout << "x = [ ";
    for (int i=0; i<3; i++) std::cout << x[i] << " ";
    std::cout << "]\n";

    double y[3];
    for (int i=0; i<3; i++)
    {
        y[i] = 0;
        for (int j=0; j<3; j++)
        {
            y[i] += A[i][j]*u[j];
        }
    }
    //print y
    std::cout << "\ny = [ ";
    for (int i=0; i<3; i++) std::cout << y[i] << " ";
    std::cout << "]\n";
    
    double z[3];
    for (int i=0; i<3; i++)
    {
        z[i] = y[i] - v[i];
    }
    //print z
    std::cout << "\nz = [ ";
    for (int i=0; i<3; i++) std::cout << z[i] << " ";
    std::cout << "]\n";

    double C[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            C[i][j] = 4*A[i][j] - 3*B[i][j];
        }
    }
    //print C
    std::cout << "\nC\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            std::cout << C[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    double D[3][3];
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            D[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j];
        }
    }
    //print D
    std::cout << "\nD\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            std::cout << D[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}
