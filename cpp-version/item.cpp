//  item.cpp
//  Created by Arda Ungun on 12/22/14.
//

#include <iostream>
#include <string>

#include "item.h"

using namespace std;



// — — — — — HELPER functions — — — — —

int calc_rank(bool u, bool i) {
    int rank = 0;
    
    if (u) rank+= 2;
    if (i) rank+= 1;
    
    return rank;
}




// — — — — — ITEM functions — — — — —


// ostream and istream operators for output and input
ostream & operator<<(ostream & out, const item & a) {
    out << a.text;
    if (a.U || a.I) out << ", ";
    if (a.U) out << "U";
    if (a.I) out << "I";
    out << ", " << a.rank;
    
    return out;
}



istream & operator>>(istream & in, item & a) {
    string inStr;
    in >> inStr;
    if ( inStr.find(',') /* != string::npos */ ) {
        int idx = inStr.find(',');
        a.text = inStr.substr(0,idx);
        if (inStr.substr(idx, inStr.length() - idx ).find('U') /* != string::npos */) a.U= true;
        if (inStr.substr(idx, inStr.length() - idx ).find('I') /* != string::npos */) a.I= true;
    }
    else { a.text = inStr; }
    a.rank = calc_rank(a.U, a.I);
    
    return in;
}
    




// — — — CONSTRUCTORS — — —

// default AND empty parameter constructor if only given a string
item::item() {
    text = "";
    U = false;
    I = false;
    rank = 0;
}


// constructor if only given a string
item::item(const string & in) {
    text = in;
    U = false;
    I = false;
    rank = 0;
}


// constructor if given string and only ONE priority parameter
item::item(const string & in, const char & a) {
    // depends on calc_rank external function!!

    text = in;
    U = false;
    I = false;
    
    // only acceptable input is capital U or capital I
    if (a == 'U') U = true;
    if (a == 'I') I = true;
    rank = calc_rank(U,I);
}




// default constructor
item::item(const string & in, const char & one, const char & two) {
    // depends on calc_rank external function!!
    
    text = in;
    U = false;
    I = false;
    
    // assumes inputs are correct (one != two, etc)
    if (one == 'U' || two == 'U') { U = true; };
    if (one == 'I' || two == 'I') { I = true; };
    
    rank = calc_rank(U,I);
}



// copy constructor
item::item(const item & other) {
    text = other.text;
    U = other.U;
    I = other.I;
    rank = other.rank;
    
}




// — — — DESTRUCTOR — — —
item::~item() {}




// — — — DATA manipulation — — —
void item::setText(const string & in) {
    text = in;
}


void item::setU(bool a) {
    U = a;
    rank = calc_rank(U,I);
}


void item::setI(bool a) {
    I = a;
    rank = calc_rank(U,I);
}



int main() {
    item a;
    cout << "a: " << a << endl;
    cin >> a;
    cout << "a: " << a << endl;
    
    return 0;
}




