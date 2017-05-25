#include <iostream>
#include <stdlib.h>
#include <utility>
#include "symbolTable.h"
#include "ast.h"



bool symbolTable::myFind(const std::string& s) {

     std::map<std::string, Ast*>::const_iterator it =
        myMap.find(s);
     if ( it == myMap.end() ) {
         return false;
     }
     else {
         return true;
     }
  }  
  void symbolTable::myInsert(std::string key, Ast* val) {
    //std::cout << " In symbolTable.myInsert() ";
    //std::cout << val << std::endl;
    //std::cout << key << " " << val->getNumber() << std::endl;
    
     myMap[key] = val;
    // std::cout << " inside symboltable myinsert " << std::endl; 
     
  }
  Ast* symbolTable::getVal(std::string key) {
     // std::cout << key ;
      //std::cout << " In symbolTable.getVal() " << std::endl;
    Ast* found = myMap[key];
    return found;
      
  }