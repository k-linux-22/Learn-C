#include<stdio.h>

int main() {
    int x=10;
    int* a = &x;
    int** b = &a;
    int*** c = &b;
    int**** d = &c;

    printf("&x = Address of x: \t %d \n", &x);
    printf("x = Data in x: \t %d \n\n", x);
    
    printf("&a = Address of a: \t %d \n", &a);
    printf("a = Address &x -> Data in a: \t %d \n", a);
    printf("*a = Data in x -> Address &x -> Data in a: \t %d \n\n", *a);
    
    printf("&b = Address of b: \t %d \n", &b);
    printf("b = Address &a -> Data in b: \t %d \n", b);
    printf("*b = Address &x -> Data in a -> Address &a -> Data in b: \t %d \n", *b);
    printf("**b = Data in x -> Address &x -> Data in a -> Address &a -> Data in b: \t %d \n\n", *(*b));
    
    printf("&c = Address of c: \t %d \n", &c);
    printf("c = Address &b -> Data in c: \t %d \n", c);
    printf("*c = Address &a -> Data in b -> Address &b -> Data in c: \t %d \n", *c);
    printf("**c = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: \t %d \n", *(*c));
    printf("***c = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: \t %d \n\n", *(*(*c)));
    
    printf("&d = Address of d:\t  %d \n", &d);
    printf("d = Address &c -> Data in d: \t %d \n", d);
    printf("*d = Address &b -> Data in c -> Address &c -> Data in d: \t %d \n", *d);
    printf("**d = Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %d \n", *(*d));
    printf("***d = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %d \n", *(*(*d)));
    printf("****d = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: \t %d \n\n", *(*(*(*d))));
        
}

/*

Output - 

&x = Address of x: 	 -375827084 
x = Data in x: 	 10 

&a = Address of a: 	 -375827080 
a = Address &x -> Data in a: 	 -375827084 
*a = Data in x -> Address &x -> Data in a: 	 10 

&b = Address of b: 	 -375827072 
b = Address &a -> Data in b: 	 -375827080 
*b = Address &x -> Data in a -> Address &a -> Data in b: 	 -375827084 
**b = Data in x -> Address &x -> Data in a -> Address &a -> Data in b: 	 10 

&c = Address of c: 	 -375827064 
c = Address &b -> Data in c: 	 -375827072 
*c = Address &a -> Data in b -> Address &b -> Data in c: 	 -375827080 
**c = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: 	 -375827084 
***c = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c: 	 10 

&d = Address of d:	  -375827056 
d = Address &c -> Data in d: 	 -375827064 
*d = Address &b -> Data in c -> Address &c -> Data in d: 	 -375827072 
**d = Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 -375827080 
***d = Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 -375827084 
****d = Data in x -> Address &x -> Data in a -> Address &a -> Data in b -> Address &b -> Data in c -> Address &c -> Data in d: 	 10 


*/