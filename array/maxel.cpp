#include <iostream>
using namespace std;
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5 ;
	int maxElement = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > maxElement) {
			maxElement = arr[i];
		}
	}
	cout << "Maximum element is: " << maxElement << endl;
	return 0;
}
