## 3. DECLARING A STRING VARIABLE
- A string variable is a one dimension array of character that holding a string at a time.
```C
char s[6];
```
- Do not forget to make an "extra room" for NULL
```C
char s[6] = "HELLO";
/* The length of one dimension of s is 6, while the string's length is 5. Because 1 room should be maintained for NULL */
```
- It seem like a string literal but it is not. When a string is assigned to a character array , then this character array is treated like other types of arrays. We can modified its characters.

```C
char s[6] = "HELLO";
char s[6] = { 'H', 'E', 'L', 'L', 'O' }
/* THEY ARE BOTH THE SAME */
```
- We can not modifined a string literal like this:
  ```C
  char* ptr = "HELLO";
  *ptr = 'M';
  ```
- We can modifined a char array like this:
  ```C
  char s[6] = "HELLO";
  s[0] = 'M';
  ```
### SHORT LENGTH INITIALIZER
```C
char s[7] = "HELLO";
```
- The extra rooms will remained empty (with 2 NULL)
### LONG LENGTH INITIALIZER
```C
char s[4] = "HELLO";
```
- If we try to print it, there will be a warning (unpredictable result)
### EQUAL LENGTH INITIALIZER
```C
char s[5] = "HELLO";
```
- No room for NULL
```C
#include <stdio.h>
int main()
{
    char s[5] = "HELLO";
    char t[5];
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        t[i] = s[i];
    }
    printf ("%s", t);
    return 0;
}
/* HELLO�@LO�@ is the result */
```
- And if we change the code like this:
```C
#include <stdio.h>
int main()
{
    char s[6] = "HELLO";
    char t[6];
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        t[i] = s[i];
    }
    t[i] = '\0';
    printf ("%s", t);
    return 0;
}
/* HELLO is the result */
```
### OMITTING LENGTH INITIALIZER
```C
char s[] = "HELLO";
```
- The compiler will automatically set aside 6 characters for s which is enough to store the string with an extra room for NULL.

## 4. WRITING STRING USING PRINTF AND PUTS FUNCTIONS
### USING PRINTF 
- To print just a part of a string, we use " %.ns " with n is the numbers of characters to be displayed on the screen.
- Addtionally, " %m.ns " with n is the numbers of characters to be displayed on the screen and m denotes the size of the field within which the string will be displayed.
```C
#include <stdio.h>
int main()
{
    char* ptr  = "HELLO WORLD";
    printf ("%.7s", ptr);
    printf ("\n");
    printf ("%6.5s", ptr);
    
    return 0;
}
/*
HELLO W
 HELLO
*/
```
![](./STRING_PRINT1.png)    

