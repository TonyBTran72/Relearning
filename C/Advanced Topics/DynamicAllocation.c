/*
You can allocate memoory by using the malloc function. 
After we are done you use free() function.
After you use free you can not use the pointer anymore until you allocate it again. 
*/
//Use malloc to dynamically allocate a point structure.
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point * mypoint = (point *) malloc(sizeof(point));;

    /* Dynamically allocate a new point
        struct which mypoint points to here */

    mypoint->x = 10;
    mypoint->y =5 ;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);
    return 0;
}