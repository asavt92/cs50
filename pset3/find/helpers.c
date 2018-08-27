/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int i;
    for(i=0;i<n;i++){
    if(values[i] == value) return true;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{   
int c,i,v;
    do{
        c=0;
        for(i=1;i<n;i++){
            if(values[i]<values[i-1]){
                v = values[i-1];
                values[i-1] = values[i];
                values[i] = v;
                c++;}
        }
        
    } while(c>0);
    // TODO: implement an O(n^2) sorting algorithm
    return;
}
