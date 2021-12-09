//finding the maximum element
//and their number
//поиск максимального элемента
//и подсчитать количество максимумов
#include <iostream>
using namespace std;
int main() {
	int n; 
	cin >> n;
	int max_el, number = 1;
	cin >> max_el;
	for (int i = 1; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > max_el) {
			number = 1;
			max_el = tmp;
		}
		else if (tmp == max_el) number++;
	}
	cout << "Maximum element: " << max_el << "." << endl;
	cout << "Maximum elements found: " << number << "." << endl;
}

