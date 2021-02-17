#include<iostream>
using namespace std;

int main() {
    //declaring 2 variables- a and b:
    int a = 10;
    int b = 20;
    
    //printing before swapping:
    printf("before swapping:\na = %d;\nb = %d", a, b);
    
    //swapping:
    a = a + b;
    b = a - b;
    a = a - b;
    
    //printing after swapping:
    printf("\n\nafter swapping:\na = %d;\nb = %d", a, b);
    
    return 11;
}
