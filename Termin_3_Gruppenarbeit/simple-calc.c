#include <stdio.h>

enum Operations {
            PLUS  = 0,
            MINUS = 1,
            MULT  = 2,
            DIV   = 3
};

int c = 0;
// Performs the given Operation on a and b
// Returns the result c = a <op> b
int perform_operation(int a, int b, int op) {
    //int c = 0;
    
    if(op == PLUS)
        c = perform_sum(a, b);
    else if(op == MINUS)
        c = perform_diff(a, b);
    else if(op == MULT)
        c = perform_prod(a, b);
    else if(op == DIV)
        c = perform_div(a, b);
    
    return c;
}

// Performs the "plus" operation on a and b
// Returns the result c = a + b
int perform_sum (int a, int b) {
    //int c = 0;
    c = a + b;
    
    return c;
}

//Performs the "minus" operation on a and b
//Returns the result c = a - b
int perform_diff (int a, int b) {
    //int c = 0;
    c = a - b;
        
    return c;
}

//Performs the "mult" operation on a and b
//Returns the result c = a * b
int perform_prod (int a, int b) {
    //int c = 0;
    c = a * b;
        
    return c;
}

//Performs the "div" operation on a and b
//Returns the result c = a / b
int perform_div (int a, int b) {
    //int c = 0;
    c = a / b;
        
    return c;
}

// Prints results of a <op> b = c
void ausgabe (int a, int b, int op, int c) {

    if(op == PLUS)
        printf("%d + %d = %d", a, b, c);
    else if(op == MINUS)
        printf("%d - %d = %d", a, b, c);
    else if(op == MULT)
        printf("%d * %d = %d", a, b, c);
    else if(op == DIV)
        printf("%d / %d = %d", a, b, c);
    else
        printf("Fehler\n");
        

}

// Makes input of a and b
void eingabe (int* a, int* b, int *op) {

    printf("Bitte geben Sie die erste Zahle ein: \n");
    scanf("%d", a);
    printf("Bitte geben Sie die zweite Zahle ein: \n");
    scanf("%d", b);
    printf("Bitte geben Sie ein was Sie rechnen möchten \n (0: Addition; 1: Subtraktion; 2: Multiplikation; 3: Division: \n");
    scanf("%d", op);

}

int main() {

    int a = 1;
    int b = 1;
    int op = 8;
    eingabe(&a, &b, &op);
    perform_operation(a, b, op);
    ausgabe(a, b, op, c);
    

    // int c = a PLUS b;
}

