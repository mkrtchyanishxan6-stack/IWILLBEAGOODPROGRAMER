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

bool constructor(Vector *vector);

int main(){

}

bool constructor(Vector *vector){

        vector->ptr = malloc (DEFAULT_SIZE * sizeof(TYPE));
        if(vector->ptr == NULL){
                perror("Malloc error: ");
                return false;
}

        vector->capacity = DEFAULT_SIZE;
                vector->size = 0;
                 return true;
}
