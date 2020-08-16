#include<iostream>
#include<math.h>
using namespace std;
double f(double mu, double sigma2, double x)
{
double pie = 22.0 / 7.0;
double prob = (1/(sigma2*sqrt(2* pie))* exp((pow(((x - mu) / sigma2), 2) * -0.5)));

return prob;
}
int main() {
cout << f(10.0, 4.0, 8.0) <<endl;
return 0;
}