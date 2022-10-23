#include <iostream>

using namespace std;
int getIndexMaxItem(int* arr, int size);

int main()
{
	int size = 0;
	cout << "Enter array size:";
	cin >> size;

	int* array = new int[size];
	int index = 0;

	for (int* ptr = array; ptr <= &array[size - 1]; ptr++) {
		cout << "number[" << index << "]:";
		cin >>* ptr;
		index++;
	}

	cout << "Max index = " << getIndexMaxItem(array, size);

	return 0;
}

int getIndexMaxItem(int* arr, int size) {
	int indexMaxValue = 0;
	int tempMaxValue = *arr;
	int index = 0;

	for (int* ptr = arr; ptr <= &arr[size - 1]; ptr++) {
		if (*ptr > tempMaxValue) {
			indexMaxValue = index;
			tempMaxValue = *ptr;
		}
		//cout << "pointer :" << ptr << endl;
		//cout << "value :" << * ptr << endl;

		index++;
	}

	return indexMaxValue;
}

