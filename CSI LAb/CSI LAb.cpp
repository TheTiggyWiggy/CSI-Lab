#include <iostream>
using namespace std;


double kmToMi(double& nInput)
{
	double myMi = nInput * 0.62;

	return myMi;
}

int main()
{
	double myKilo = 0;
	cout << "Enter distance in Km: ";
	cin >> myKilo;

	double myMiles = kmToMi(myKilo);

	cout << myKilo << " km = " << myMiles << " mi";

	return 0;
}