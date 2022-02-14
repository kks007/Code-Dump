#include <stdio.h>

int main() {
  int n, palindrome = 0, remainder, num;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;

    while (n != 0) {
        remainder = n % 10;
        palindrome = palindrome * 10 + remainder;
        n /= 10;
    }

    if (num == palindrome)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

    return 0;
}
