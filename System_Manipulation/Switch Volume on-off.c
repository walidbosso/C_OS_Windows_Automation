#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
     system("mode con: cols=15 lines=1");
    
    char command[1000];
    
    strcpy(command, "nircmd");
    strcat(command, " mutesysvolume 2 ");
    system(command);

    return 0;
}

