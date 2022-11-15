#include <iostream>
#include <ctime>
using namespace std;
//1
//	double powerA3(double a) {
//		double res = a * a * a;
//		return res;
//}
//	int main() {
//		srand(time(nullptr));
//		for (int i = 1; i <= 5; i++) {
//			double x = rand() % 11;
//			double x3 = powerA3(x);
//			cout << "x = " << x << "x^3 = " << x3 << endl;
//		}
//}
//2
//double powera2(double a) {
//	double res1 = a * a;
//	return res1;
//}
//double powera4(double a) {
//	double res2 = a * a * a * a;
//	return res2;
//}
//int main() {
//	srand(time(nullptr));
//	for (int i = 1; i <= 5; i++) {
//		double x = rand() % 11;
//		double x2 = powera2(x);
//		double x4 = powera4(x);
//		cout << "x = " << x << "x^2 = " << x2 << endl;
//		cout << "x = " << x << "x^4 = " << x4 << endl;
//	}
//}
//3
//double aMean(double x, double y) {
//	return (x + y) / 2;
//}
//double gMean(double x, double y) {
//	return sqrt(x * y);
//}
//int main(){
//	srand(time(nullptr));
//	for (int i = 1; i <= 10; i++) {
//		double x1 = rand() % 100 / 10;
//		double y1 = rand() % 100 / 10;
//		double am = aMean(x1, y1);
//		double gm = gMean(x1, y1);
//		cout << x1 << " " << y1 << " am = " << am << " gm = " << gm << endl;
//	}
//}
//4
//double triangleP(double a) {
//	double P = a * 3;
//	return P;
//}
//double triangleS(double a) {
//	double S = (a * a) * (sqrt(3) / 4);
//	return S;
//}
//int main() {
//	srand(time(nullptr));
//	double a;
//	cin >> a;
//	for (int i = 1; i <= 3; i++) {
//		double P = rand() % 20 + 1;
//		double P1 = triangleP(P);
//		double S = rand() % 20 + 1;
//		double S1 = triangleS(S);
//		cout << "S = " << S1 << " P = " << P1 << endl;
//	}
//}