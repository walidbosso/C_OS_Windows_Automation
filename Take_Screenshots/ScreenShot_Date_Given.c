#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    // Generate dynamic file name
   time_t now = time(NULL);
    struct tm *timeinfo = localtime(&now);
    char datetime[20];
    strftime(datetime, sizeof(datetime), "%Y-%m-%d_%H-%M-%S", timeinfo);

    // Construct command to save screenshot
    char command[1000];
    
    strcpy(command, "nircmd");
    
    strcat(command, " savescreenshot ");
    //for (int i=0; i< 1000; i++) printf("%d \n", rand());
    sprintf(command + strlen(command), "Screenshot_%s.png",datetime); // ou strcat
    //printf("%s",command);

    // Execute command to save screenshot
    FILE *fp;
    char buffer[1024];
    fp = popen(command, "r"); // Run the "dir" command and redirect the output to a pipe
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer); // Read the output and print it to the console
    }
    pclose(fp); // Close the pipe

    return 0;
}

