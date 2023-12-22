#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct keyboard_right{
    char key;
    char right;
};

int main(){
    char *buff = malloc(sizeof(char) * 1000);
    struct keyboard_right keyboard[70];
    int len;
    //---------------------
    keyboard[0].key = ' ';
    keyboard[0].right = ' ';
    keyboard[1].key = '!';
    keyboard[1].right = '@';
    keyboard[2].key = '@';
    keyboard[2].right = '#';
    keyboard[3].key = '#';
    keyboard[3].right = '$';
    keyboard[4].key = '$';
    keyboard[4].right = '%';
    keyboard[5].key = '%';
    keyboard[5].right = '^';
    keyboard[6].key = '^';
    keyboard[6].right = '&';
    keyboard[7].key = '&';
    keyboard[7].right = '*';
    keyboard[8].key = '*';
    keyboard[8].right = '(';
    keyboard[9].key = '(';
    keyboard[9].right = ')';
    keyboard[10].key = ')';
    keyboard[10].right = '_';
    keyboard[11].key = '_';
    keyboard[11].right = '=';
    keyboard[12].key = '+';
    keyboard[12].right = '+';
    keyboard[13].key = '1';
    keyboard[13].right = '2';
    keyboard[14].key = '2';
    keyboard[14].right = '3';
    keyboard[15].key = '3';
    keyboard[15].right = '4';
    keyboard[16].key = '4';
    keyboard[16].right = '5';
    keyboard[17].key = '5';
    keyboard[17].right = '6';
    keyboard[18].key = '6';
    keyboard[18].right = '7';
    keyboard[19].key = '7';
    keyboard[19].right = '8';
    keyboard[20].key = '8';
    keyboard[20].right = '9';
    keyboard[21].key = '9';
    keyboard[21].right = '0';
    keyboard[22].key = '0';
    keyboard[22].right = '-';
    keyboard[23].key = '-';
    keyboard[23].right = '=';
    keyboard[24].key = '=';
    keyboard[24].right = '=';
    keyboard[25].key = 'q';
    keyboard[25].right = 'w';
    keyboard[26].key = 'w';
    keyboard[26].right = 'e';
    keyboard[27].key = 'e';
    keyboard[27].right = 'r';
    keyboard[28].key = 'r';
    keyboard[28].right = 't';
    keyboard[29].key = 't';
    keyboard[29].right = 'y';
    keyboard[30].key = 'y';
    keyboard[30].right = 'u';
    keyboard[31].key = 'u';
    keyboard[31].right = 'i';
    keyboard[32].key = 'i';
    keyboard[32].right = 'o';
    keyboard[33].key = 'o';
    keyboard[33].right = 'p';
    keyboard[34].key = 'p';
    keyboard[34].right = '[';
    keyboard[35].key = '[';
    keyboard[35].right = ']';
    keyboard[36].key = ']';
    keyboard[36].right = '\\';
    keyboard[37].key = 'a';
    keyboard[37].right = 's';
    keyboard[38].key = 's';
    keyboard[38].right = 'd';
    keyboard[39].key = 'd';
    keyboard[39].right = 'f';
    keyboard[40].key = 'f';
    keyboard[40].right = 'g';
    keyboard[41].key = 'g';
    keyboard[41].right = 'h';
    keyboard[42].key = 'h';
    keyboard[42].right = 'j';
    keyboard[43].key = 'j';
    keyboard[43].right = 'k';
    keyboard[44].key = 'k';
    keyboard[44].right = 'l';
    keyboard[45].key = 'l';
    keyboard[45].right = ';';
    keyboard[46].key = ';';
    keyboard[46].right = '\'';
    keyboard[47].key = '\'';
    keyboard[47].right = '\'';
    keyboard[48].key = 'z';
    keyboard[48].right = 'x';
    keyboard[49].key = 'x';
    keyboard[49].right = 'c';
    keyboard[50].key = 'c';
    keyboard[50].right = 'v';
    keyboard[51].key = 'v';
    keyboard[51].right = 'b';
    keyboard[52].key = 'b';
    keyboard[52].right = 'n';
    keyboard[53].key = 'n';
    keyboard[53].right = 'm';
    keyboard[54].key = 'm';
    keyboard[54].right = ',';
    keyboard[55].key = ',';
    keyboard[55].right = '.';
    keyboard[56].key = '.';
    keyboard[56].right = '/';
    keyboard[57].key = '/';
    keyboard[57].right = '/';
    keyboard[58].key = '`';
    keyboard[58].right = '1';
    keyboard[59].key = '~';
    keyboard[59].right = '1';
    keyboard[60].key = '\\';
    keyboard[60].right = '\\';
    keyboard[61].key = '{';
    keyboard[61].right = '}';
    keyboard[62].key = '}';
    keyboard[62].right = '\\';
    keyboard[63].key = '|';
    keyboard[63].right = '|';
    keyboard[64].key = ':';
    keyboard[64].right = '\'';
    keyboard[65].key = '"';
    keyboard[65].right = '"';
    keyboard[66].key = '<';
    keyboard[66].right = '.';
    keyboard[67].key = '>';
    keyboard[67].right = '?';
    keyboard[68].key = '?';
    keyboard[68].right = '?';
    keyboard[69].key = '.';
    keyboard[69].right = '/';
    keyboard[70].key = '~';
    keyboard[70].right = '!';
    //---------------------
    fgets(buff,1000,stdin);
    len = strlen(buff);
    for(int i = 0; i < len; i++){
        *(buff+i) = tolower(*(buff+i));
        for(int j = 0; j < 70; j++){
            if(*(buff+i) == keyboard[j].key){
                printf("%c",keyboard[j].right);
            }
        }
    }
    printf("\n");
}