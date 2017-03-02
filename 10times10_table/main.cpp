#include <iostream>

using namespace std;

int main() {

	int table[11][11];

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {

			table[i][j] = i*j;
		}
	}


	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {

			cout << table[i][j] << "\t";
		}
		cout << endl;
	}


	return 0;
}