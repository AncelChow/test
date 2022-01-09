//master4
//master
//master2
//master3
//iss
//iss3
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
	double a, k, p, E;
	p = 0.5;
	E = 2.71828182845904523536028747;
	k = 1.;
	a = k*((2*k)/((1 +pow(E,20.*(-1 +pow(p,2)/pow(k,2))))*pow(p,2)) +
     (40*pow(E,20*(-1 +pow(p,2)/pow(k,2)))*(-1 +pow(k,2)/pow(p,2))*
        pow(p,2))/(pow(1 +pow(E,20*(-1 +pow(p,2)/pow(k,2))),2)*pow(k,3)));

	//cout << a << endl;
	cout << a << endl;
    //amend

	return 0;
}
