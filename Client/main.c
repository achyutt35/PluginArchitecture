#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int main(){

    char* lib_name = "/Users/achyutt/Plugin/Engine/src/libPlugin.dylib";
    void* lib_handle = dlopen(lib_name, RTLD_NOW);
    
    if(lib_handle){
        printf("\nPlugin library libPlugin.dylib loaded successfully\n=============================");
    }else{
        printf("Failed to load %s: %s", lib_name, dlerror());
        exit(1);
    }

    //load our symbol addresses or functions from our plugin.
    void (*printHello)(void) = dlsym(lib_handle, "printHello");

    if(printHello){
        printf("\nLoading function printHello from libPlugin.dylib\n=============================\n");
        printHello();
    }



    return 0;
}