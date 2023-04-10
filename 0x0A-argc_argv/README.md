argc & argv
@argc(argument count: Indicates the array size of the argv(argument vector). || An integer that indicates how many arguments were entered on the command line.
@argv: Indicates the array size of argc. || An array of pointers to arrays of character objects.
#Declaration -  
              
              #include <stdio.h>
              int main(int argc, char *argv[]);
              {
                  {
                  while (--argc > 0)
                  printf(“%s ”, argv[argc]);
                  printf("\n"); \
                  }
              }
