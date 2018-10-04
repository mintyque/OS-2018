#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

void *custom_realloc(void *ptr, size_t size)
{
	void *new;
	if(!ptr){
		new = malloc(size);
	} else {
        new = malloc(size);
        memcpy(new, ptr, malloc_usable_size(ptr));			
    }
	free(ptr);
	return(new);
}
