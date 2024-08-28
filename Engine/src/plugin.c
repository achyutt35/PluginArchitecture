#include "plugin.h"

void init(){
    printf("=============================\nPlugin initialization\n=============================");
}


void destroy(){
    printf("\nXXX Plugin destroy XXX\n");
}

void printHello(){
    printf("\n***********Hello from Plugin!*************\n");
}