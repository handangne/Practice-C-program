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
