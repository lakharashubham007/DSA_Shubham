#include<iostream>
using namespace std;

//swap using temp variable consume extra space
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

//airthmatic oprtation
void swapWithoutTemp(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

//bitwise operation
// XOR (^) is a bitwise operator that follows these rules:

// 0 ^ 0 = 0
// 1 ^ 1 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1

void swapXOR(int &a, int &b) {
    a = a ^ b;  // Step 1
    b = a ^ b;  // Step 2
    a = a ^ b;  // Step 3
}



int mian(){
    int x = 5, y = 10;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    
    swap(x, y);

    swapWithoutTemp(x, y);

    swapXOR(x, y);  // Swapping using XOR
    
    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;


}



// XOR is faster because bitwise operations are executed directly by the CPU without involving memory.
// Arithmetic is slightly slower due to addition/subtraction overhead.
// Temporary variable is the slowest because it requires an extra memory operation.