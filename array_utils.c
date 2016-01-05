#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"array_utils.h"

ArrayUtil create (int type_size, int length){
  ArrayUtil ele;
  ele.length = length;
  ele.type_size = type_size;
  ele.base = calloc(length,type_size);
  return ele;
}

int areEqual(ArrayUtil a, ArrayUtil b){
  int length = a.length > b.length ? a.length : b.length;
  int compare = memcmp(a.base, b.base, length);
  if(compare == 0 && a.length==b.length && a.type_size==b.type_size){
    return 0;
  }else{
    return 1;
  }
}
