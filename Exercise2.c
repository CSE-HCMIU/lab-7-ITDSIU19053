/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/

#include <stdio.h>
#include <string.h>
void ex2(char str[][1000], int n){
    int len = n;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++) {
            if (str[i] == "") continue;
            if (strcmp(str[i], str[j]) == 0) {
                len--;
                strcpy(str[j], "");
            }
        }
    printf("%d", len);
}
int main(int argc, char *argv[]) {
	char str[][1000] = {"ab","abcd","ab","abdr"};
    ex2(str, 4);
}
