#include <iostream>
#include <ctime>
using namespace std;
int sign(double x);
int rootscout(double a, double b, double c){
	double d = b * 2 - 4 * a * c;
	if (d < 0) return 0;
	if (d > 0) return 2;
	if (d == 0) return 1;
}
double circle(double r) {
	double s = 3.14 * r * r;
	return s;
}
int main() {
	/*Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
		найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
		2
		.В качестве значения π использовать 3.14.*/
	/*double r;
	for (int i = 1; i <= 3; i++) {
		cin >> r;
		cout << circle(r) << endl;
	}
}*/