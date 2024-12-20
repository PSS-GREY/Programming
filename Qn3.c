/* Problem Statement –Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a
valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.
(*>#): positive integer.
(#>*): negative integer
(#=*): 0
Example 1:
Input 1:
###*** -> Value of S
Output :
0 → number of * and # are equal*/



#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int j = 0;
    printf("Enter string: ");
    gets(s);
    int len = strlen(s);
    int i, k = 0;

    for (i = 0; i < len; i++) {
        if (s[i] == '*') j++;
        else k++;
    }

    printf("No of * = %d\n", j);
    printf("No of other characters = %d\n", k);

    if (j == k) {
        printf("0\n");
    } else if (j > k) {
        printf("Negative integer\n");
    } else {
        printf("Positive integer\n");
    }

    return 0;
}
