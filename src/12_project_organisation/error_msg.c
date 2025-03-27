#include <stdio.h>
#include "error_msg.h"

// only visible within utils.c
void error_msg(const char *msg){
    fprintf(stderr, "Error: %s\n", msg);
}