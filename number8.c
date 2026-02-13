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

void pop_front(Vector *vector);

int main(){

}

void pop_front(Vector *vector){
        for(int i = 0; i < vector->size - 1; ++i){
                vector->ptr[i] = vector->ptr[i + 1];
        }

        --vector->size;
}
