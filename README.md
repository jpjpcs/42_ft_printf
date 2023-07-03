# 42_ft_printf ((int ft_printf(const char *, ...);)

### Custom printf Implementation

Recoded the printf() function from libc as ft_printf() in C, handling various conversions and format specifiers.
Developed comprehensive test cases and conducted thorough testing to ensure the accuracy and reliability of ft_printf().
Integrated ft_printf() into the libft library, making it a valuable tool for future C projects within the school curriculum.

### Conversions
We have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

### Requirements
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

### Bonus
I haven´t made the bonus part. If you want to make it with bonus, see Luis Valsa github: https://github.com/LuisBalsa/ft_printf/tree/master

### Videos
```Markdown
https://www.youtube.com/watch?v=dqa0KMSMx2w
```


