#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{   char word[17], outword[33];//17:16+1, 33:16*2+1
    int i, len;
    printf("Intro word:");
    fgets(word, sizeof(word), stdin);
    len = strlen(word);
    if(word[len-1]=='\n')
        word[--len] = '\0';

    for(i = 0; i<len; i++){
        sprintf(outword+i*2, "%02X", word[i]);
    }
    printf("%s\n", outword);
    system("PAUSE");
    return 0;
}
