#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int val = 1234;
	cout.setf(ios::showbase);
	cout << oct << val << " " << 
	setiosflags(ios::uppercase) << hex << val << endl;
	return 0;
}

