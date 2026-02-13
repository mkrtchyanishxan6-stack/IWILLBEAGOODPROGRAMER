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

void clear(Vector *vector);

int main(){

}

void clear(Vector *vector){
free(vector->ptr);
vector->ptr = NULL;
vector->size = 0;
vector->capacity = 0;

}
