//
//  Quicksort.cpp
//  Algorithms
//
//  Created by Victor Cardozo on 13/01/2015.
//  Copyright (c) 2015 Victor Cardozo. All rights reserved.
//

#include "Quicksort.h"

void Quicksort::run(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = divide(arr, l, h); /* Partitioning index */
        run(arr, l, p - 1);
        run(arr, p + 1, h);
    }
}

int Quicksort::divide (int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
    
    for (int j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap current element with index
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void Quicksort::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}