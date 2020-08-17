#include<iostream>
#include<math.h>
using namespace std;
double f(double mu, double sigma2, double x)
{
double pie = 22.0 / 7.0;
double prob = 1.0/sqrt(sigma2) * pow(2 * pie, -0.5) * exp(-0.5 * pow( x - mu, 2) * 1.0/sigma2);
return prob;
}
int main() {
cout << f(10.0, 4.0, 8.0) <<endl;
return 0;
};