#include <stdio.h>

// Driver Code
unsigned int main()
{
unsigned int f1 = 1, f2 = 1, i;

for (i = 1; i <= 50; i++) 
{
printf("%u, ", f2);
int next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("\n");
return 0;
}
