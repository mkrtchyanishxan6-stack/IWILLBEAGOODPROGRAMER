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

void push_front(Vector *vector, TYPE value);

int main(){

}

void pop_back(Vector *vector){
        --vector->size;
}
