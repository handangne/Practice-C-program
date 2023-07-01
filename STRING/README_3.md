## 6.DESIGN THE INPUT FUNCTION USING GETCHAR()
### THE INPUT FUNCTION SHOULD HAVE FOLLOWING FUNCTIONALITIES
1. It must continue to read the string even after seeing a white space.
2. It must stop reading the string after seeing the newline character.
3. It must discared extra characters.
4. It must return the number of characters it stored in the character array.

### getchar()
- This function is used to read one character at a time from the input.
- It returns an integer equivalent to the ASCII code of the character.
- We can aslo use both "int" and "char" in place of char that is passing to getchar() function.

### ASCII CODE
ASCII, stands for American Standard Code for Information Interchange. It is a 7-bit character code where each individual bit represents a unique character.
![](./ASCIICODE.png)

### FUNCTION 
```C
//example: we print "Hello"
#include <stdio.h>

int input (char str[], int n)
{
    int ch, i=0;
    while ( (ch = getchar()) != '\n')
        if(i<n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

int main()
{
    char str[100];
    printf ("Enter your string: ");
    int n = input (str, 5);
    printf ("%d %s", n, str);
    return 0;
}
/*
Enter your string: Hello
5 Hello
*/
```
## PUTCHAR FUNCTION IN C
### putchar()
- Prototype: int putchar (int ch)
- It accepts an integer argument and returns an integer representing the character writing on the screen.
- Remember that character is represented by binary form only, so there is no different if you write "int ch" instead of "char ch".
```C
#include <stdio.h>
int main()
{
    int ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);

    return 0;
}
/*
ABCDEFGHIJKLMNOPQRSTUVWXYZ
*/
```

## STRINGS
- If we have a printf function, we must be careful that:
1. If a character is enclosed within a single quote like this: '\n', it is treated like a character: printf("%c", '\n').
2. If a character is enclosed within a double quote like this: "\n", it is treated like a string: printf("%s", "\n").
- So, putchar() function expects a character, hence we will pass the character like this: putchar('\n').
- So, puts() function expects a string, hence we will pass the character like this: puts("\n").
