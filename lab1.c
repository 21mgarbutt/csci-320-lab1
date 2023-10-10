/*
 * Implement your solution in thi file
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

char* readString(char* fileName){
    FILE* file = fopen(fileName,"r");
    if (file==NULL){
        return NULL;
    }
    char* line = NULL;
    size_t bufferSize =0;
    ssize_t lineLength= getline(&line,&bufferSize,file);
    if (lineLength>0 && line[lineLength-1]=='\n'){
        line[lineLength-1]='\0';
    }
    fclose(file);
    return line;
}

char* mysteryExplode(const char* str){
    size_t length=strlen(str);
    size_t explodeLength = (length*(length+1))/2;
    char* result = (char*)malloc((explodeLength+1)*sizeof(char));

    if (result==NULL){
        return NULL;
    }
    size_t ind=0;
    for(size_t o=0;o<length;o++ ){
        for(size_t letter=0;letter<o;letter++){
            result[ind++]=str[o];
        }
    }
    result[ind]='\0';
    return result;
}


