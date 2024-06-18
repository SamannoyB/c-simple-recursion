#include <stdio.h>
#include <string.h>

int sum(int terms);

int main () {
    int no;

    printf("Enter no. of terms: ");
    scanf("%d", &no);
    printf("%d", sum(no));
    return 0;
}

int sum(int terms) {
    if (terms > 0) {
        return terms + sum(terms-1);
    } else return 0;
}