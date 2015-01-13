//
//  Quicksort.h
//  Algorithms
//
//  Created by Victor Cardozo on 13/01/2015.
//  Copyright (c) 2015 Victor Cardozo. All rights reserved.
//

#ifndef __Algorithms__Quicksort__
#define __Algorithms__Quicksort__

#include <stdio.h>

class Quicksort
{
public:
    void run(int arr[], int l, int h);
    
private:
    int divide (int arr[], int l, int h);
    void swap(int* a, int* b);
};

#endif /* defined(__Algorithms__Quicksort__) */
