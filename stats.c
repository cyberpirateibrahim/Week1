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
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);
  return 0;
}

void print_array(double array[], size_t length) {
 
}

int find_median(double array[], size_t length) {

}

int find_mean(double array[], size_t length) {

}


void sort_array(double array[], size_t length) {

}

int find_maximum(double array[], size_t length) {

}

int find_minimum(double array[], size_t length) {

}

void print_statistics(double array[], size_t length) {

}


