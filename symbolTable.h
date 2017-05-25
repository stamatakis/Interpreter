#ifndef SYMBOLTABLE__H
#define SYMBOLTABLE__H
#include <cstdlib>  // for rand()
#include <iostream>
#include <map>
#include <string>

class Ast;

class symbolTable {
public:
  symbolTable() : myMap() {}
  symbolTable(const symbolTable&);
  symbolTable& operator=(const symbolTable&);
  ~symbolTable() {}
  bool myFind(const std::string& s);
  void myInsert(std::string, Ast*);
  Ast* getVal(std::string);
  
  
private:
  std::map<std::string, Ast*> myMap; 

  
  
};
#endif
// int main() {
//   symbolTable& symbolTable = symbolTable::getInstance();
//   std::cout << symbolTable(1,100) << std::endl;
// }
