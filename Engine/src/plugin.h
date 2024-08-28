#ifndef _PLUGIN_H
#define _PLUGIN_H


#include <dlfcn.h>
// #include <iostream>
#include <stdio.h>


#define EXPORT __attribute__((visibility("default")))

__attribute__((constructor))
void init();

__attribute__((destructor))
void destroy();

EXPORT
void printHello();

#endif