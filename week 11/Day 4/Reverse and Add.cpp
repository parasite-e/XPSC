#include <bits/stdc++.h>
using namespace std;

long long reverse Digits(long long num)
{
    long long rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}


bool isPalindrome(long long num)
{
    return (reverse Digits(num) == num);
}

void ReverseandAdd(long long num)
{
    long long rev_num = 0;
    while (num <= 4294967295) {

        rev_num = reverse Digits(num);

        num
            = num + rev_num;

        if (isPalindrome(num)) {
            printf("%lld\n", num);
            break;
        }
        else if (num > 4294967295) {
            printf("No palindrome exist");
        }
    }
}

int main()
{
    ReverseandAdd(195);
    ReverseandAdd(265);
    return 0;
}
