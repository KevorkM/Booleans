#include <iostream>

using namespace std;

int main() {

	cout << "Conditionals - Booleans" << endl;
	cout << " What does the results evaluate to?\n" << endl;

	int x = 0;
	int y = 20;

	bool z = true;
	bool w = false;

	bool results = (!w || z) && !((y > x) && (!z));

	cout << "The value of the result is: " << results << endl;

	return 0;
}