#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int id;
	char ch;
	float chi, mathe, eng;
	cin >> id >> chi >> mathe >> eng;
	cout << fixed;
	cout << "The each subject score of No. " << id << " is " << setprecision(2)
	<< chi << ", " << mathe << ", " << eng << "." << endl;
	return 0;
}
