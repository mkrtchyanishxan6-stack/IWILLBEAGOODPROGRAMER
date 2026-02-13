#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TYPE int
#define DEFAULT_SIZE 8

typedef struct Vector{
    TYPE*ptr;
    size_t size;
    size_t capacity;
}Vector;

void pop_back(Vector *vector);

int main(){

}

void pop_back(Vector *vector){
        --vector->size;
}
