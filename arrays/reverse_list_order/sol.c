#include <stdlib.h>

// return a dynamically allocated int array
// return array will be freed by the tester

int *reverse_list(const int *array, size_t length) {
  int* list = (int*) malloc(sizeof(int) * length);
  
  for (size_t i = 0, j = length - 1; i < length; i++, j--) {
    list[i] = array[j]; 
  }
  
  return list;
}
