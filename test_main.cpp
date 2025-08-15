#include "stack_implementation.cpp"
#include <cassert>

void hiddenTests() {
    ArrayStack s(2);
    assert(s.peek() == -1);   // Test empty
    
    s.push(5);
    assert(s.peek() == 5);    // Test single element
    
    s.push(8);
    assert(s.peek() == 8);    // Test after push
    
    s.pop();
    assert(s.peek() == 5);    // Test after pop
}
