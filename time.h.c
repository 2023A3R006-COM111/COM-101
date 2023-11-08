#include <stdio.h>
#include <math.h>
#include <time.h>
int main(){
    time_t current_time;
    time(&current_time);

    printf("Step 2: Current time in seconds since the epoch:%ld\n",current_time);
     
    char time_str[30];
    strcpy(time_str, ctime(&current_time));
    printf("Step 3: Current time as a forward string:%s",time_str);

    time_t future_time = current_time + 31536000;
    char future_time_str[30];
    strcpy(future_time_str,ctime(&future_time_str));

    printf("Step 4: One year from now:%s",future_time_str);

    return 0;
}  