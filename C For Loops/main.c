#include <stdio.h>
#include <stdlib.h>
//For loops allow us to use indexing variables, indexing variables will tell you what number loop you are on.

//the difference between a for and while loop is within the parentheses

// int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

int main()
{
    int i = 1;
    while(i <= 5){//one condition to keep looping through
        printf("%d\n", i);
        i++;
    }

    for(i = 1; i <= 5; i++){//what goes in parentheses: the variable, the condition, whats being changed
        printf("%d\n", i);
    }



    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    // luckNumbers[2]
    int g;

    for(g = 0; g < 6; g++){
        printf("%d\n", luckyNumbers[g]);
    }

    return 0;
}
