//rating system
#include<stdio.h>

int main(){
    int rating;
    printf("enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch(rating){
        case 1:
        printf("you have rated 1 out of 5\n");
        break;
        case 2:
        printf("you have rated 2 out of 5\n");
        break;
        case 3:
        printf("you have rated 3 out of 5\n");
        break;
        case 4:
        printf("you have rated 4 out of 5\n");
        break;
        case 5:
        printf("you have rated 5 out of 5\n");
        break;
        default:
        printf("invalid rating \n");
        break;
    }
    return 0;
}
