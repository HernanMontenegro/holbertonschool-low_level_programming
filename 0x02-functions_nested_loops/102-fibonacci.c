#include <stdio.h>

// Driver Code
int main()
{
int f1 = 1, f2 = 1, i;

for (i = 1; i <= 50; i++) 
{
printf("%d, ", f2);
int next = f1 + f2;
f1 = f2;
f2 = next;
}
printf("\n");
return 0;
}
