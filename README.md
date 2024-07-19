# holbertonschool-printf

printf Function

        The `printf` function in C produces formatted output to the standard output (stdout).

        Common Format Specifiers:
        %d or %i: Signed decimal integer or a float. 
        %s: String of characters.
        %c: Single character.

----------------------------------------------------------------------------------------------------------------------------------------

Autorisin fuction and macros:

----------------------------------------------------------------------------------------------------------------------------------------

NAME
       write - write to a file descriptor

SYNOPSIS
       #include <unistd.h>

       ssize_t write(int fd, const void *buf, size_t count);

DESCRIPTION
       Writes up to count bytes from buf to the file descriptor fd.

RETURN VALUE
       Returns the number of bytes written on success, or -1 on error.

----------------------------------------------------------------------------------------------------------------------------------------

NAME
       malloc - allocate dynamic memory

SYNOPSIS
       #include <stdlib.h>
       void *malloc(size_t size);

DESCRIPTION
       Allocates `size` bytes of memory. Returns a pointer to the allocated memory, or NULL if allocation fails.

----------------------------------------------------------------------------------------------------------------------------------------

NAME
       free - free allocated memory

SYNOPSIS
       #include <stdlib.h>
       void free(void *ptr);

DESCRIPTION
       Frees the memory space pointed to by `ptr`, which must have been returned by a previous call to malloc(), calloc(), or realloc().

----------------------------------------------------------------------------------------------------------------------------------------

NAME
       va_start - initialize variable argument list

SYNOPSIS
       #include <stdarg.h>
       void va_start(va_list ap, last);

DESCRIPTION
       Initializes `ap` to be used with va_arg() and va_end(). `last` is the last fixed argument.


----------------------------------------------------------------------------------------------------------------------------------------

NAME
       va_end - end variable argument list

SYNOPSIS
       #include <stdarg.h>
       void va_end(va_list ap);

DESCRIPTION
       Cleans up the variable argument list initialized by va_start().


-----------------------------------------------------------------------------------------------------------------------------------------

NAME
       va_copy - copy variable argument list

SYNOPSIS
       #include <stdarg.h>
       void va_copy(va_list dest, va_list src);

DESCRIPTION
       Copies the variable argument list from `src` to `dest`.

-----------------------------------------------------------------------------------------------------------------------------------------

NAME
       va_arg - retrieve next argument

SYNOPSIS
       #include <stdarg.h>
       type va_arg(va_list ap, type);

DESCRIPTION
       Retrieves the next argument in the variable argument list `ap`.
-----------------------------------------------------------------------------------------------------------------------------------------
