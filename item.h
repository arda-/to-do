//  Created by Arda Ungun on 12/22/14.
//
//

#ifndef ITEM
#define ITEM
#include <stdio.h>
#include <string>

using namespace std;

// to do item class


class item {

    
// ostream and istream operators for output and input
    friend ostream & operator<<(ostream &, const item &);
    friend istream & operator>>(istream &, item &);
    
public:

// CREATING ITEMS
    
    item();   // default constructor
    item(const item &);     // copy constructor
    
    item(const string &); // one type of constructor
    item(const string &, const char &); // if only one U/I parameter is given
    item(const string &, const char &, const char &); // user input constructor
    
    
    
// DATA manipulation
    void setText(const string &);
    void setU(bool);
    void setI(bool);
    // No getters needed, for now
        
    ~item(); // default destructor

    
    
    
private:
    
    // DATA
    string text;
    bool U;
    bool I;
    int rank;
    
};



#endif
