#include <stdio.h>
#include <stdint.h>
char main(void)
{
    printf("hola mundo");
    int charsize = sizeof(char);
    int shortsize = sizeof(short);
    int intsize = sizeof(int);
    int longsize = sizeof(long);
    int longlongsize = sizeof(long long);
    int floatsize = sizeof(float);
    int doublesize = sizeof(double);

    printf("\n char %i \n short %i \n int %i \n long %i \n longlong %i \n float %i \n double %i \n", charsize, shortsize, intsize, longsize, longlongsize, floatsize, doublesize);
    return 0;
}
