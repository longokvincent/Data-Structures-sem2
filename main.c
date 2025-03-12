#include <stdio.h>
#include <stdlib.h>

int main()
{int myArray[] = {10,20,30,40,50};
int arraysize = sizeof(myArray) / sizeof(myArray[0]);
printf("traversing using a for loop with an index\n");
for(int i;i<arraysize;i++){
    printf("elements at index %d:%d\n");
}
printf("\n");
    return 0;
}
