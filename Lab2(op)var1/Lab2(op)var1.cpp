#include <iostream>
using namespace std;

int main() {
	double a, b, c, x1, x2, H, F;
	cout << "a,b,c= ";
	cin >> a >> b >> c;
	cout << "Xstart= ";
	cin >> x1;
	cout << "Xend= ";
	cin >> x2;
	cout << "Step= ";
	cin >> H;

	for (double x = x1; x < x2; x += H) {
		if (x < 0 && b != 0) {
			F = a * x * x + b;
		}
		else if (x > 0 && b == 0) {
			F = (x - a) / (x - c);
		}
		else {
			F = x / c;
		}
		cout << "x= " << x << "\tF= " << F << endl;
	}
}