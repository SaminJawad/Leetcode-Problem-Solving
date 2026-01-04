#include <stdbool.h>

bool isPalindrome(int x) {
    
    if (x < 0) {
        return false;
    }
    
    long long int reversed_number = 0;
    int temp_number = x;
    
    while (x != 0) {
        int digit = x % 10;
        reversed_number = reversed_number * 10 + digit;
        x = x / 10;
    }

    return reversed_number == temp_number;
}