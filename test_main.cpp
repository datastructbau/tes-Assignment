#include <iostream>
#include <cassert>

// Student's functions (they implement these)
int deleteAtPosition(int arr[], int size, int pos);
void push(int value);
int pop();

// Test cases
void test_problem1() {
    int arr[5] = {10, 20, 30, 40};
    int new_size = deleteAtPosition(arr, 4, 1);
    assert(new_size == 3);
    assert(arr[0] == 10 && arr[1] == 30);
}

void test_problem2() {
    push(5); push(8);
    assert(pop() == 8);
    assert(pop() == 5);
}

int main() {
    test_problem1();
    test_problem2();
    std::cout << "All tests passed!";
    return 0;
}
