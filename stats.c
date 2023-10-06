/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

/**
 * @file stats.c
 * @brief Implementation of the statistical functions.
 *
 * Implementation of the statistical functions in the header file stats.h, 
 * together with a runtime test.
 *
 * @author İbrahim İpek
 * @date 06.10.2023 (DD.MM.YY)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  double test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);
  return 0;
}

void print_array(double array[], size_t length) {
  printf("{");
  for(size_t i = 0; i < length - 1; i++) {
    printf("%f, ", array[i]);
  }
  printf("%f}\n", array[length - 1]);
}

int find_median(double array[], size_t length) {
  sort_array(array, length);

  if(length % 2) {
      return round(array[(length - 1)/2]);
  }

  return round((array[length/2 - 1] + array[length/2]) / 2);
}

int find_mean(double array[], size_t length) {
  double sum = 0;
  for(size_t i = 0; i < length; i++) {
    sum += array[i];
  }
  return round(sum / length);
}

int compare(const void *P, const void *Q) {
  int A = *(const double *) P;
  int B = *(const double *) Q;

  if(A < B)
  {
      return 1; // 1 for descending order.
  }
  if (A > B)
  {
      return -1; // -1 for descending order.
  }

  return 0;
}

void sort_array(double array[], size_t length) {
  qsort(array, length, sizeof(double), compare);
}

int find_maximum(double array[], size_t length) {
  sort_array(array, length);
  return round(array[0]);
}

int find_minimum(double array[], size_t length) {
  sort_array(array, length);
  return round(array[length - 1]);
}

void print_statistics(double array[], size_t length) {
  printf("Input array: ");
  print_array(array, length);
  printf("\n");
  
  printf("Array sorted in descending order: ");
  sort_array(array, length);
  print_array(array, length);
  printf("\n");

  printf("Maximum value: %d\n", find_maximum(array, length));
  printf("Minimum value: %d\n", find_minimum(array, length));
  printf("Mean value: %d\n", find_mean(array, length));
  printf("Median value: %d\n", find_median(array, length));
}


