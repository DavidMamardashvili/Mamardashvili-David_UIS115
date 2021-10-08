#include <iostream>
#include <string>
#include "Array.h"
#include <Windows.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Array obj;
	cout << "Set size of array" << endl;
	int n;
	cin >> n;
	cout << "Enter values" << endl;
	obj.set_arr(n);
	string a;
	cout << "To quit enter 'exit'" << endl;
	while (a != "exit") {
		cout << "Set of other metoths: set_arr, get_arr, find_min, find_max, find_key, sort_arr. Please enter the method." << endl;
		cin >> a;
		if ((a != "set_arr") && (a != "exit"))
			cout << "Result:" << endl;
		if (a == "get_arr")
			obj.get_arr();
		if (a == "find_min") {
			double m = obj.find_min();
			cout << m << endl;
		}
		if (a == "find_max") {
			double m = obj.find_max();
			cout << m << endl;
		}
		if (a == "find_key") {
			cout << "Set the key";
			int key;
			cin >> key;
			obj.find_key(key);
		}
		if (a == "sort_arr") {
			cout << "Array to sort" << endl;
			obj.get_arr();
			cout << "Array after sort" << endl;
			obj.sort_arr();
			obj.get_arr();
		}
		if (a == "set_arr") {
			cout << "Set the length of array";
			int line;
			cin >> line;
			obj.set_arr(line);
		}
	}
	return 0;
}