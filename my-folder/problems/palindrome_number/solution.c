#include <stdbool.h>   // for bool type
#include <math.h>      // for pow()

bool isPalindrome(int x) {
    if (x < 0) return false;  // negative numbers are not palindromes

    long int num = x;
    long int temp = 0, rem;

    while (x > 0) {
        rem = x % 10;
        x /= 10;
        temp = temp * 10 + rem;  // reverse the number
    }

    return (num == temp);
}
