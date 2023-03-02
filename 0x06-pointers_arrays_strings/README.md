### More pointers, arrays and strings

Below is a name list of C files containing fuctions that perform specific tasks.

**0-strcat.c :** Contains a Function that concatenates two strings.  
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.  
- Returns a pointer to the resulting string dest.

**1-strncat.c :** Contains a Function that concatenates two strings.  
- The _strncat function is similar to the _strcat function, except that:  
- it will use at most n bytes from src; and  
- src does not need to be null-terminated if it contains n or more bytes.    

**2-strncpy.c :** Contains a Function that copies a string.  
- The function works exactly like strncpy.

**3-strcmp.c :** Contains a Function that compares two strings.  
- The function works exactly like strcmp.

**4-rev_array.c :** Contains a Function that reverses the content of an array of integers.                                     

**5-string_toupper.c :** Contains a Function that changes all lowercase letters of a string to uppercase..

**6-cap_string.c :** Contanis a Function that capitalizes all words of a string.  
- Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

**7-leet.c :** Contains a Function that encodes a string into 1337.  
- Letters a and A is replaced by 4.
- Letters e and E is replaced by 3.  
- Letters o and O is replaced by 0.  
- Letters t and T is replaced by 7.  
- Letters l and L is replaced by 1.

