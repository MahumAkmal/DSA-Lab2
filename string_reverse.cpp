#include <iostream>
using namespace std;

int main() {
	int capacity = 100;
	char* arr = new char[capacity]; // Dynamically allocated memory for string

	cout << "Enter a string: ";
	cin.getline(arr, capacity);

	// To find string length:
	int length = 0;
	while (arr[length] != '\0') {
		length++;
	}

	// Reverse the string
	int start = 0;
	int end = length - 1;
	while (start < end) {
		char temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << "Reversed string: " << arr << endl;

	// Delete heap memory to prevent memory leaks
	delete[] arr;
	arr = nullptr; // To avoid dangling pointers

	return 0;
}