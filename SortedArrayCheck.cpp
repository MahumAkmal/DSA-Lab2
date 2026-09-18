#include <iostream>
#include <cassert> // To run assert() function to test statements
using namespace std;

bool isSorted(const int* arr, const int size);

// Test Functions:
void testSortedArray() {
    int arr[] = { 1, 2, 3, 4, 5 };
    assert(isSorted(arr, 5) == true);
}

void testUnsortedArray() {
    int arr[] = { 1, 4, 3, 5, 6 };
    assert(isSorted(arr, 5) == false);
}

void testDuplicateValues() {
    int arr[] = { 1, 2, 2, 3, 5 };
    assert(isSorted(arr, 5) == true);
}

void testSingleElement() {
    int arr[] = { 42 };
    assert(isSorted(arr, 1) == true);
}

void testDescendingArray() {
    int arr[] = { 5, 4, 3, 2, 1 };
    assert(isSorted(arr, 5) == false);
}

void testNegativeValues() {
    int arr[] = { -10, -5, 0, 5, 10 };
    assert(isSorted(arr, 5) == true);
}

void testNullArray() {
    assert(isSorted(nullptr, 0) == false);
    assert(isSorted(nullptr, 5) == false);
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true);
}