#include<stdio.h>

int main() {
    int x = 10;
    int* a = &x;
    int** b = &a;
    int*** c = &b;
    int**** d = &c;

    printf("&x = Address of x: \t %p \n", &x); // %p gives an address (or pointer)
    printf("x = Data in x: \t %d \n\n", x);
    
    printf("&a = Address of a: \t %p \n", &a);
    printf("a = Address &x -> Data in a: \t %p \n", a);
    printf("*a = Data in x -> Address &x -> Data in a: \t %d \n\n", *a);
    
    printf("&b = Address of b: \t %p \n", &b);
    printf("b = Address &a -> Data in b: \t %p \n", b);
    printf("*b = Address &x -> Data in a -> Address &a -> Data in b: \t %p \n", *b);
    printf("**b = Data in x -> Address &x -> Data in a -> Address &a -> Data in b: \t %d \n\n", *(*b));
    
    printf("&c = Address of c: \t %p \n", &c);
    printf("c = Address &b -> Data in c: \t %p \n", c);
    printf("*c = Address &a -> Data in b -> Address &b -> Data in c: \t %p \n", *c);
    printf("**c = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: \t %p \n", *(*c));
    printf("***c = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: \t %d \n\n", *(*(*c)));
    
    printf("&d = Address of d:\t  %p \n", &d);
    printf("d = Address &c -> Data in d: \t %p \n", d);
    printf("*d = Address &b -> Data in c -> Address &c -> Data in d: \t %p \n", *d);
    printf("**d = Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %p \n", *(*d));
    printf("***d = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %p \n", *(*(*d)));
    printf("****d = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %d \n\n", *(*(*(*d))));
        
}

/*

Output - 

&x = Address of x: 	 0x7ffdc424bbe4 
x = Data in x: 	 10 

&a = Address of a: 	 0x7ffdc424bbe8 
a = Address &x -> Data in a: 	 0x7ffdc424bbe4 
*a = Data in x -> Address &x -> Data in a: 	 10 

&b = Address of b: 	 0x7ffdc424bbf0 
b = Address &a -> Data in b: 	 0x7ffdc424bbe8 
*b = Address &x -> Data in a -> Address &a -> Data in b: 	 0x7ffdc424bbe4 
**b = Data in x -> Address &x -> Data in a -> Address &a -> Data in b: 	 10 

&c = Address of c: 	 0x7ffdc424bbf8 
c = Address &b -> Data in c: 	 0x7ffdc424bbf0 
*c = Address &a -> Data in b -> Address &b -> Data in c: 	 0x7ffdc424bbe8 
**c = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: 	 0x7ffdc424bbe4 
***c = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: 	 10 

&d = Address of d:	  0x7ffdc424bc00 
d = Address &c -> Data in d: 	 0x7ffdc424bbf8 
*d = Address &b -> Data in c -> Address &c -> Data in d: 	 0x7ffdc424bbf0 
**d = Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 0x7ffdc424bbe8 
***d = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 0x7ffdc424bbe4 
****d = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 10 


*/