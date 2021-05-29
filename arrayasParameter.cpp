//Array as a parameter;
//So let's pass array to a function;

#include <iostream>
#include <iomanip>
using namespace std;
// creating void functions approach here: 
// We will use them below under our main code to print simply
// We can also use them in header files;
void arrayasPointer(int *array, int size) {
    cout<<setw(5);
    for(int i =0; i <size; i++) {
        cout<<array[i]<<" ";
    }
}
void arraySized(int array[3], int size) {
    cout<<setw(5);
    for(int i = 0; i < size; i++) {
        cout<<array[i]<<" ";
    }
}
void arrayUnsized(int array[], int size) {
    cout<<setw(5);
    for(int i = 0; i <size; i++) {
        cout<<array[i]<<" ";
    }
}

int main() {
    int size = 3;
    int array[size] = {1, 2, 3};
    
    // By using this array we will pass teh array in the functions we had created above;
    arrayasPointer(array, size);
    arraySized(array, size);
    arrayUnsized(array, size);
    return 0;
}