#include <iostream>

using namespace std;

int main() {

	int a,c;
	char b;
	cin » a » b » c;
	if (b == '+')
		cout « a + c;
	if (b == '-')
		cout « a - c;
	if (b == '/')
		cout « a / c;
	if (b == '*')
		cout « a * c;

	return 0;
}