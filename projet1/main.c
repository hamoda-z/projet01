#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char t [100] ;
    int n = 0 ;
    int i ;
    printf("veullez saisi une chaine ") ;
    gets(t) ;
    for(i = 0 ; t[i] != '\0' ; i++) {
        n++ ;
    }
    printf("%d",n) ;
    return 0;
}
