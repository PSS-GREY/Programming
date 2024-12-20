/*To sort the given list without sorting odd and to sort even withoit changing positions of the odd number*/
#include <stdio.h>

int main() {
    const int len = 10;
    int a[len];
    int b[len];
    int j = 0;
    int i;
    printf("Enter %d integers:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }

    printf("You entered: [");
    for (int i = 0; i < len; i++) {
        printf("%d,", a[i]);
    }
    printf("]\n");

    // Separate even numbers
    for (int i = 0; i < len; i++) {
        if (a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        }
    }

    printf("Even numbers: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    // Bubble sort
    for (int i = 0; i < j - 1; i++) {
        for (int k = 0; k < j - i - 1; k++) {
            if (b[k] > b[k + 1]) {
                int temp = b[k];
                b[k] = b[k + 1];
                b[k + 1] = temp;
            }
        }
    }

    printf("Sorted even numbers: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
j=0    ;
for(i=0;i<len;i++)
{
if(a[i]%2==0){
    a[i]=b[j];
    j++;}
else
 a[i]=a[i];}    
printf("Corrected sequence :[ ");
for(i=0;i<len;i++)
     printf("%d,  ",a[i]); 
printf("]");     
 
    return 0;
}
