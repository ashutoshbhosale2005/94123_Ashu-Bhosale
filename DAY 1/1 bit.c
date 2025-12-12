# include <stdio.h>
int main()
{int count_ones(unsigned int n) {
    int count = 0;
    while (n) {
        count += n & 1;   
        n >>= 1;          
    }
    return count;
}}
