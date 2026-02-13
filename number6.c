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

bool reserve(Vector *vector, size_t size);
void resize(Vector *vector);
void push_front(Vector *vector, TYPE value);

int main(){

}

bool reserve(Vector *vector, size_t size){
        TYPE *tmp = realloc(vector->ptr, size * sizeof(TYPE));
if(tmp == NULL){
    perror("Realloc error");
    return false;
}
        vector->ptr = tmp;
        vector->capacity = size;
        return true;
}

void resize(Vector *vector){
        if(vector->size == vector->capacity){
                reserve(vector, vector->capacity * 2);
}

}

void push_front(Vector *vector, TYPE value){
        resize(vector);
        for(int i = vector->size; i > 0; --i){
    vector->ptr[i] = vector->ptr[i - 1];
        }
}
