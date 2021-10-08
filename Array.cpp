#include "Array.h"
using namespace std;
void Array::set_arr(int n) {
	this->n = n;
	arr = new double[n];
	cout << "Set the array's elements";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
};
void Array::get_arr() {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
};
double Array::find_max() {
	double max_arr = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max_arr)
			max_arr = arr[i];
	return max_arr;
};
double Array::find_min() {
	double min_arr = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < min_arr)
			min_arr = arr[i];
	return min_arr;
};
void Array::find_key(double key) {
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (key == arr[i]) {
			cout << i << " ";
			flag = 1;
		}
	if (flag == 0)
		cout << "It isn't";
	cout << endl;
};
void Array::sort_arr() {
	for (int i = 0; i < n; i++) {
		int nomber_key = i;
		double key = arr[i];
		for (int j = i + 1; j < n; j++)
			if (arr[j] < key) {
				key = arr[j];
				nomber_key = j;
			}
		swap(arr[i], arr[nomber_key]);
	}
};