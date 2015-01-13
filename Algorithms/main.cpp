//
//  main.cpp
//  Algorithms
//
//  Created by Victor Cardozo on 13/01/2015.
//  Copyright (c) 2015 Victor Cardozo. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "Quicksort.h"

using namespace std;

void chooseAlgorithm(string choice, int* arr, int l, int r)
{
    if(choice == "q")
    {
        Quicksort quick;
        
        quick.run(arr, l, r);
    }
    else
    {
        cout << "Algorithm chosen does not exist." << endl;
    }
}

//Print array.
void print(int arr[], int size)
{
    for(int x = 0; x < size; ++x)
    {
        cout << arr[x] << " ";
    }
    
    cout << endl;
}

int main(int argc, const char * argv[])
{
    //seed random generator.
    srand(time(NULL));
    
    string size, algo = "x", stop = "y";;
    int s;
    
    try
    {
        while(stop != "n")
        {
            cout << "Pick array size: " << endl;
            getline(cin, size);
            
            s = stoi(size);
            
            int array[s];
            
            //Fill array with random values.
            for(int x = 0; x < s; ++x)
            {
                array[x] = (rand() % 100);
            }
            
            cout << "Input: " << endl;
            print(array, s);
            
            cout << "Choose Algorithm. Quicksort (q): " << endl;
            getline(cin, algo);
            
            chooseAlgorithm(algo, array, 0, s-1);
            
            cout << "Output: " << endl;
            print(array, s);
            
            cout << "Continue? (y/n) " << endl;
            getline(cin, stop);
        }
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }
    
    return 0;
}
