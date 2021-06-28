#include <iostream>

using namespace std;

int main(){

	double ib, airp, con;

	cout << "Initial balance? ";
	cin >> ib;
	cout << "Annual interest rate in percent? ";
	cin >> airp;
	con=ib+ib*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	con=con+con*0.01*airp;
	cout << "Final balance after 20 years in case initial balance is "
             << ib << " and annual interest rate is " << airp << "% will be " << con << "\n";

	return 0;

}