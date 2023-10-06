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
 * @file stats.h 
 * @brief The header file for the function declarations 
 *
 * This file contains the function declarations, the necessary documentation on 
 * functions and parameters, etc.
 *
 * @author İbrahim İpek
 * @date 06.10.2023 (DD.MM.YYYY) 
 *
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/** @brief Prints the array statistics.
 *  
 *  Prints the input array, the sorted version, its median, mean, maximum and minimum values.
 *
 *  @param array Our array of numbers on which we do statistical calculations.
 *  @param length The size of our array.
 *
 *  @return NOTHING. 
 */
void print_statistics(double array[], size_t length);

/** @brief Prints the array.
 *  
 *  Prints the array in a beautiful format.
 *
 *  @param array The array of numbers on which we do statistical calculations.
 *  @param length The size of array.
 *
 *  @return NOTHING. 
 */
void print_array(double array[], size_t length);

/** @brief Returns the median value in the array
 *  
 *  Calculates and returns the median value of the array, using the function sort_array.
 *
 *  @param array The array of numbers.
 *  @param length The size of the array.
 *
 *  @return The median value of the array rounded to an integer. 
 */
int find_median(double array[], size_t length);

/** @brief Returns the median value of the array
 *  
 *  Calculates and returns the arithmetic mean value of the array.
 *
 *  @param array The array of numbers.
 *  @param length The size of the array.
 *
 *  @return The mean value of the array rounded to an integer. 
 */
int find_mean(double array[], size_t length);

/** @brief Returns the maximum value of the array
 *  
 *  Calculates and returns the maximum value of the array, using the function sort_array.
 *
 *  @param array The array of numbers.
 *  @param length The size of the array.
 *
 *  @return The maximum value of the array rounded to an integer. 
 */
int find_maximum(double array[], size_t length);

/** @brief Returns the minimum value of the array
 *  
 *  Calculates and returns the minimum value of the array, using the function sort_array.
 *
 *  @param array The array of numbers.
 *  @param length The size of the array.
 *
 *  @return The minimum value of the array rounded to an integer. 
 */
int find_minimum(double array[], size_t length);

/** @brief Sorts the array in descending order.
 *  
 *  Sorts the input array and leaves it that way.
 *
 *  @param array The array of numbers.
 *  @param length The size of the array.
 *
 *  @return NOTHING. 
 */
void sort_array(double array[], size_t length);

#endif /* __STATS_H__ */
