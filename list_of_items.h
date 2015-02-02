//
//  list_of_items.h
//
//  Created by Arda Ungun on 1/2/15.
//

#ifndef LIST_OF_ITEMS
#define LIST_OF_ITEMS

#include <iostream>
#include "item.h"
#include <string>

using namespace std;

// list of items class


// TO DO: convert to vector
class LOI {

// no iostream friends, we're going to make our own printing functions.
    
public:
    
    
    // LIST CREATION
    LOI(); // default constructor
    LOI(const LOI &); // copy constructor
    // creation from a giant string, - likely pulled from an infile... leave io to main
    
    /*  probably won't need operator= or operator==
        ...they might be useful in copying but I can 
        always make them later - Arda, Jan 2 '15 haha
    */
    
    
    // NODE
    // addition
    // modification
    // deletion
    
    // SORTING
    // sort by alpha
    // sort by rank
    
    // PRINTING
    // print nodes to display - create a new list each time?
    // print to be saved to an outfile
    
    
    
private:
    item Item; // ?
    item * nextItem;
    int rank; // is the higest rank of its contents
    int numContents; // is the count of the internal items/ length of the list
    
    
};







#endif /* defined(____list_of_items__) */
