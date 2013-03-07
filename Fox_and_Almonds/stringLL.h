/* 
 * File:   stringLL.h
 * Author: Abdulkhalbor
 *
 * Created on March 6, 2013, 4:37 PM
 * Purpose:  The purpose of this file is to create a data type
 *           of type linked list of which order is no concern.
 *           <Use templates eventually :D>
 *           
 */

#include <string>

#ifndef STRINGLL_H
#define	STRINGLL_H

class CstringLL {
public:
    std::string data;  // Data contained within CstringLL
    CstringLL *next;    // Next node in the linked list
    
    /* Member functions */
    void addString(std::string s, CstringLL*);
    
    /* Constructors */
    CstringLL(std::string s);
    CstringLL();
};

#endif	/* STRINGLL_H */

