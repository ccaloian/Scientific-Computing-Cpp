#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    const double EPS = 1.0e-8;
    const int max_iter = 100;
    double x_prev = 0.0;
    double x_next;

    double f_x, fp_x;
    int iter = 1;
    bool not_converged = true;
    // check both the convergence criterion and number of iteration
    // for this code the number of iterations is actually not needed
    while ((not_converged) && (iter <= max_iter))
    {
        f_x = exp(x_prev) + pow(x_prev, 3) -5;
        fp_x = exp(x_prev) + 3*pow(x_prev, 2);
        x_next = x_prev - f_x/fp_x;
        // output the progress
        std::cout << "iter: " << iter   << "\t"
                  << "x: "    << x_prev << "\t"
                  << "f(x): " << f_x    << "\n";
        not_converged = (fabs(x_prev - x_next) > EPS);
        x_prev = x_next;
        iter++;
    }
    
    return 0;
}

