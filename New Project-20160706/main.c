
   #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>




int main() {

        
    //input string
    char ch;
    char *s=&ch;
    scanf("%s",s);
    //determine number of characters in string
    int n=0;
    while( s[n]!='\0' )
    {++n;
    printf("%c",s[n]); 
    }
    ++n; // 4 elements = s[0] s[1] s[2] s[3]
   
    return 0;
}
/////////////////////////////////////
