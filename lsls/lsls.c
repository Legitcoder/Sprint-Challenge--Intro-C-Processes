#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
    DIR *dir;
    struct dirent *ent;
    size_t size = 10;
    char *user_input = (char *)malloc(size);
    
    scanf("%[^\n]s", user_input);

//    //Attempted to Reallocate char size dynamically based
//    //on user input
//    size_t length = strlen(user_input);
//
//    if(length > size) {
//        printf("Input Exceeds 10 Characters, Reallocating Memory..\n");
//        user_input = realloc(user_input, length);
//    }
//
//    printf("%zu\n",strlen(user_input));


    // Open directory
    dir = opendir(user_input);
    if(dir == NULL) {
        printf("Can't open directory.\n");
    }

    // Repeatly read and print entries
    while((ent=readdir(dir)) != NULL) {
        const char *entry = ent->d_name;
        struct stat buf;
        stat(entry, &buf);
        printf("%10lld %s\n", buf.st_size, entry);
    }

    // Close directory
    closedir(dir);

    return 0;
}

