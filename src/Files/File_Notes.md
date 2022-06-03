FOPEN(3)                                                                   Library Functions Manual                                                                  

NAME

     fopen, fdopen, freopen, fmemopen – stream open functions

LIBRARY

     Standard C Library (libc, -lc)

SYNOPSIS

     #include <stdio.h>

     FILE *
     fopen(const char * restrict path, const char * restrict mode);

DESCRIPTION

     The fopen() function opens the file whose name is the string pointed to by path and associates a stream with it.

     The argument mode points to a string beginning with one of the following letters:

     “r”     Open for reading.  The stream is positioned at the beginning of the file.  Fail if the file does not exist.

     “w”     Open for writing.  The stream is positioned at the beginning of the file.  Create the file if it does not exist.

     “a”     Open for writing.  The stream is positioned at the end of the file.  Subsequent writes to the file will always end up at the then current end of file,
             irrespective of any intervening fseek(3) or similar.  Create the file if it does not exist.

     An optional “+” following “r”, “w”, or “a” opens the file for both reading and writing.  An optional “x” following “w” or “w+” causes the fopen() call to fail if the
     file already exists.  An optional “e” following the above causes the fopen() call to set the FD_CLOEXEC flag on the underlying file descriptor.

RETURN VALUES

     Upon successful completion fopen(), fdopen(), freopen() and fmemopen() return a FILE pointer.  Otherwise, NULL is returned and the global variable errno is set to indicate the error.

#
##
###
#### 

FGETS(3)                                                                   Library Functions Manual                                                                  

NAME

     fgets, gets – get a line from a stream

LIBRARY

     Standard C Library (libc, -lc)

SYNOPSIS

     #include <stdio.h>

     char *
     fgets(char * restrict str, int size, FILE * restrict stream);

     char *
     gets(char *str);

DESCRIPTION

     The fgets() function reads at most one less than the number of characters specified by size from the given stream and stores them in the string str.  Reading stops when
     a newline character is found, at end-of-file or error.  The newline, if any, is retained.  If any characters are read and there is no error, a ‘\0’ character is
     appended to end the string.

     The gets() function is equivalent to fgets() with an infinite size and a stream of stdin, except that the newline character (if any) is not stored in the string.  It is
     the caller's responsibility to ensure that the input line, if any, is sufficiently short to fit in the string.

#
##
###
#### 


FPUTS(3)                                                                   Library Functions Manual                                                                  

NAME

     fputs, puts – output a line to a stream

LIBRARY

     Standard C Library (libc, -lc)

SYNOPSIS

     #include <stdio.h>

     int
     fputs(const char *restrict s, FILE *restrict stream);

     int
     puts(const char *s);


DESCRIPTION

     The function fputs() writes the string pointed to by s to the stream pointed to by stream.

     The function puts() writes the string s, and a terminating newline character, to the stream stdout.

RETURN VALUES

     The functions fputs() and puts() return a nonnegative integer on success and EOF on error.