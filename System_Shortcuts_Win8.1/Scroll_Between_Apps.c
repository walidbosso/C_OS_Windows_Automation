#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    // Generate dynamic file name
 

    // Construct command to save screenshot
    char command[1000];
    
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkeypress ctrl+alt+tab ");
    system(command);
    
  
    
    
 
    return 0;		
}

