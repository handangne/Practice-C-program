# STRING IN C
## 1. BASIC OF STRING LITERALS
### DEFINITION
- String literal (or string constant) is a sequence of characters enclosed within double quotes
- %s is a place holder
  ```C
  int main ()
  {
    printf ("%s", "Hello everyone");
    return 0;
  }
  ```
### STORING THE STRING LITERALS
![](./STRING_STORED.png)

- '\0' character must not be confused with '0' character.
- Compiler treats a string literal as a pointer to the first character.
- To the printf or scanf, we are passing a pointer to the first character of a string literal. Both printf and scanf function expect a character pointer (char* ) as an argument

### PERFORMING OPERATION ON STRING LITERALS
#### ASSIGNING STRING LITERALS TO A POINTER
```C
char* ptr = "Hello World!"
```
- ptr contains the address of the first character of the string literal.
![](./STRING_POINTER1.png)


