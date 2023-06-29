# POINTER OVERVIEW

## ADDRESS IN C
- The %p is used to print the pointer value, and %x is used to print hexadecimal values.
- The only difference that can be noticed is that the %p will print some leading zeros, but %x doesn’t.
```C
#include <stdio.h>
int main()
{
  int x =  9;
  printf ("The address of x: %p\n", &x); //0x16ef873f8
  printf ("The address of x: %x\n", &x); //6d81b3f8
  return 0;
}
```
## POINTER IN C
- Pointers are variables that stored addresses.
- Poiner syntax:
```C
int*p;
int*ptr;
int*yptr;
```
- Assigning address to pointers
```C
//example 1
#include<stdio.h>
int main()
{
  int x, y, z;
  int *p, *q, *r;
  x = 2;
  y = 8;
  p = &x;
  q = &y;
  printf ("(1)The address of x: %p\n", p); //0x16dae73f8
  printf ("(2)The value of x: %d\n", x); //2
  printf ("(3)The value of p: %p\n", p); //address of x
  printf ("(4)The value of *p: %d\n", *p); //value of x
  printf ("(5)The address of y: %p\n", q); //0x16dae73f4
  printf ("(6)The value of y: %d\n", y); //8
  printf ("(7)The value of q: %p\n", q); //address of y
  printf ("(8)The value of *q: %d\n", *q); //value of y
  printf ("(9)The address of p: %p\n", &p); //0x16dae73e8
  printf ("(10)The address of q: %p\n", &q); //0x16dae73e0
  return 0;
}
//example 2
#include <stdio.h>
int main()
{
  int x = 4;
  int* pX = &x; //integer pointer named pX is set to the address of x
  printf ("%p\n", pX); //print the address of x
  printf ("%d\n", *pX); //print the value of x
  printf ("%p\n", &x); //print the address of x
  int y = *pX; //integer named y is set to the thing pointed to by pX, which is actually the value of x.
  printf ("%d", y);
  return 0;
}
```
- The complements of "*" and "&"
```C
#include <stdio.h>
int main()
{
  int x =  9;
  int*p = &x;
  printf ("The address of x: %p\n", &x); 
  printf ("The address of x: %x\n", &x); 
  printf("Showing that * and & are complements of each other\n&*p = %p\n*&p = %p\n", &*p, *&p);
  //*p is the value of x, so &*p là address of x
  //&p is the address of p, so *&p is the value of the address of p
  return 0;
}
```

### SWAP VALUE AND POINTER
- When swapping the value of variables, their pointers still remained the same as before
```C
//example 1
#include <stdio.h>
int main()
{
  int x, *p;
  x = 9;
  p = &x; //&a is the address of a
  printf ("Address of p is: %p\n", p);
  printf ("Value at p is: %d\n", *p);
  int y;
  y = 20;
  *p = y;
  printf ("Address of p is: %p\n", p);
  printf ("Value at p is: %d\n", *p);
  //only the value at p changed, but the pointer is still poiting to x
  return 0;
}
/*
Address of p is: 0x16ba0f3f8
Value at p is: 9
Address of p is: 0x16ba0f3f8
Value at p is: 20
*/

//example 2: swapValues (int*a, int*b)
#include <stdio.h>
int main()
{
  int x,y;
  x = 5;
  y = 10;
  int*a, *b;
  a = &x;
  b = &y;
  printf ("Value of x: %d\n", *a); 
  printf ("Value of y: %d\n", *b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf ("Value of x: %d\n", *a); //swap value between a and b
  printf ("Value of y: %d\n", *b);
  return 0;
}
/*
Value of x: 5
Value of y: 10
Value of x: 10
Value of y: 5
*/

//example 3: swapValue (int*a, int*b, int*c)
#include <stdio.h>
int main()
{
  int x,y,z;
  x = 5;
  y = 10;
  z = 20;
  int*a, *b, *c;
  a = &x;
  b = &y;
  c = &z;
  printf ("Value of x: %d\n", *a);
  printf ("Value of y: %d\n", *b);
  printf ("Value of z: %d\n", *c);
  printf ("Address of x: %p\n", a);
  printf ("Address of y: %p\n", b);
  printf ("Address of z: %p\n", c);
  int temp = *a;
  *a = *b;
  *b = *c;
  *c = temp;
  printf ("Value of x: %d\n", *a);
  printf ("Value of y: %d\n", *b);
  printf ("Value of z: %d\n", *c);
  printf ("Address of x: %p\n", a);
  printf ("Address of y: %p\n", b);
  printf ("Address of z: %p\n", c);
  return 0;
}
/*
Value of x: 5
Value of y: 10
Value of z: 20
Address of x: 0x16fbbf3f8
Address of y: 0x16fbbf3f4
Address of z: 0x16fbbf3f0
Value of x: 10
Value of y: 20
Value of z: 5
Address of x: 0x16fbbf3f8
Address of y: 0x16fbbf3f4
Address of z: 0x16fbbf3f0
*/
```
- When swapping the pointers, the values at pointers are changed follow the changing of their pointers, but the orginial values are remained the same (because we just swap the pointers, not the values)
```C
#include <stdio.h>
#include <stdlib.h>
void swapPointers (int**, int**, int**);
void swapPointers (int**a, int**b, int**c)
{
    int*temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
  int x,y,z;
  x = 5;
  y = 10;
  z = 20;
  int temp;
  int*a, *b, *c;
  a = &x;
  b = &y;
  c = &z;
  printf ("Value of x: %d\n", x);
  printf ("Value of y: %d\n", y);
  printf ("Value of z: %d\n", z);
  printf ("Value at the pointer a: %d\n", *a);
  printf ("Value at the pointer b: %d\n", *b);
  printf ("Value at the pointer c: %d\n", *c);
  printf ("Address of x: %p\n", a);
  printf ("Address of y: %p\n", b);
  printf ("Address of z: %p\n", c);
  swapPointers (&a, &b, &c);
  printf ("Value of x: %d\n", x);
  printf ("Value of y: %d\n", y);
  printf ("Value of z: %d\n", z);
  printf ("Value at the pointer a: %d\n", *a);
  printf ("Value at the pointer b: %d\n", *b);
  printf ("Value at the pointer c: %d\n", *c);
  printf ("Address of x: %p\n", a);
  printf ("Address of y: %p\n", b);
  printf ("Address of z: %p\n", c);
  return 0;
}
/*
Value of x: 5
Value of y: 10
Value of z: 20
Value at the ponter a: 5
Value at the ponter b: 10
Value at the ponter c: 20
Address of x: 0x16f7cb3f8
Address of y: 0x16f7cb3f4
Address of z: 0x16f7cb3f0
Value of x: 5
Value of y: 10
Value of z: 20
Value at the ponter a: 10
Value at the ponter b: 20
Value at the ponter c: 5
Address of x: 0x16f7cb3f4
Address of y: 0x16f7cb3f0
Address of z: 0x16f7cb3f8
*/
```

