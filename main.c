//
// Created by student on 4/27/22.
//

#include "main.h"


main() {
    FILE *fp = fopen("samplefile.txt", "r");  //read only file
    char *fileData;
    if (fp) {
        fseek(fp, 0, SEEK_END);
        long len = ftell(fp);
        fseek(fp, 0, SEEK_SET);
        fileData = malloc(len);
        if (fileData) {
            fread(fileData, 1, len, fp);
        }
        fclose(fp);
    }
    printf("%s", fileData); //test checking

//    char *readIn = NULL;
//    while(1) {
//        fgets(readIn, 1000000, fp);    //
//    }
//    if (fp)

}

