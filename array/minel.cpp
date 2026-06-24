#include <iostream>
using namespace std;
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;
	int minElement = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < minElement) {
			minElement = arr[i];
		}
	}
	cout << "Minimum element is: " << minElement << endl;
	return 0;
}
