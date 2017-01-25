#include <stdio.h>
#include <time.h>
#include <limits.h>

int main(){
    long int t = INT_MAX;
    printf("%s\n",ctime(&t));
}