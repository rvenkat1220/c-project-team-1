/**
 * @file program_team_1.c
 * @author Team 1
 * @brief
 * @version 0.1
 * @date 2022-01-21
 *
 * @copyright Copyright Team 1 (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    for (int i = 1; i <= 60; i++)
    {
        int randomNumber = rand();
        char *result = (randomNumber % 2 == 0) ? "Pass" : "Fail";
        if(randomNumber % 2 != 0)
        {
            printf("Test program #%d result: %s\n", randomNumber, result);
        }
        sleep(1);
    }
    return EXIT_SUCCESS;
}
