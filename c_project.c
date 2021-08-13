/*
This project mimics the linux command passwd which changes the password of the logged in user.
This project also mimics some of the options provided by the passwd command.
The project assumes the entire command length is less than 256 characters.
The project also assumes that the username length is lesser than or equal to 32 characters and the password length is lesser than or equal to 64 characters
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "c_project_functions.h"

int main()
{
    char *command = (char *)malloc(256 * sizeof(char)),
         *user = (char *)malloc(32 * sizeof(char)),
         *user_attributes = (char *)malloc(256 * sizeof(char)), *ref = (char *)malloc(32 * sizeof(char));
    int root = login(user, user_attributes);
    strcpy(ref, user);
    strcpy(command, "\0");
    printf("\n\n");
    while (1)
    {
        printf("\n\n%s@%s:~$ ", ref, getenv("COMPUTERNAME")); //gets the system name on which the project is running
        gets(command);
        strcpy(user, ref);
        command_compare(command, user, root, ref);
    }
    free(command);
    free(user);
    free(user_attributes);
    free(ref);
    return 0;
}
/*
The only warning this project is getting is 

"c_project_functions.c: In function 'command_compare':
c_project_functions.c:255:18: warning: implicit declaration of function 'fgetc' [-Wimplicit-function-declaration]
         char c = fgetc(all_help_option);
                  ^~~~~"
*/