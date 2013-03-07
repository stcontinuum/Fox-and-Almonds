#include <string>
#include "stringLL.h"

/* CONSTRUCTORS */

CstringLL::CstringLL(){  // Default constructor
    data = "";
    next = NULL;
}

CstringLL::CstringLL(std::string s){ // Constructor initializing data
    data=s;
    next = NULL;
}

/* FUNCTION: stringLL.h::addString                                 */
/* PURPOSE:  Add a node to the head node's (next) with the provided data. */

void CstringLL::addString(std::string s, CstringLL *csll){
    CstringLL *newNode = new CstringLL(s);  // Node to be added
    if(csll->next!=NULL){
        newNode->next = csll->next;
    }
    csll->next = newNode;
}
