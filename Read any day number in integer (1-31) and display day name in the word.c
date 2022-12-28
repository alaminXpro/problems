#include<stdio.h>
//alaminxpro - Previewon.com
int main(){
    int day,count;
    printf("Input day: ");
    scanf("%d",&day);
    if(day>31){ printf("Day is invalid!\n"); return 0;}
    count=day%7;
    //if you did't understand, comment out the 10th line.
    //printf("Equivalent day: %d\n", count);
    switch(count){
        case 0:
            printf("Friday");
            break;
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
    }
    return 0;
}
