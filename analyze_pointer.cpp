#include <iostream>
using namespace std;

//analyze_pointer function 
void analyze_pointer(int *ptr) {
	cout << "Memory Location: " << ptr << endl;
	cout << "Value: " << *ptr << endl;
}

int main() {
	int iValue = 254;
	cout << "--- On Stack: ---" << endl;
	analyze_pointer(&iValue);

	int *heapValue = new int; // Allocated on stack
	*heapValue = 6767;

	cout << "\n--- On Heap: ---" << endl;
	// Pass the pointer directly (it already holds the heap memory address)
	analyze_pointer(heapValue);

	// Delete heap memory to prevent memory leaks
	delete heapValue;

	return 0;
}
