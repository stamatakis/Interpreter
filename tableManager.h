#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H
#include <cstdlib>  // for rand()
#include <iostream>
#include <vector>
#include <string>
#include "symbolTable.h"




class tableManager {
public:
	static tableManager& getInstance();
	~tableManager() {
		 std::vector<symbolTable*>::iterator ptr = tabMgr.begin();
		  while ( ptr != tabMgr.end() ) {
		      ptr = tabMgr.erase(ptr);
		    
		  
		  }
        
	}
	bool myFind(const std::string&);
	Ast* getVal(const std::string&);
	void setGlobal(const std::string&);
	void setVal(std::string&, Ast*);
	int getScope() { return currscope; }
	void pushScope(int scopenow) { currscope = scopenow; }






private:
	std::vector<symbolTable*> tabMgr;
	int currscope;

	tableManager() : tabMgr(), currscope(0) { 
	  symbolTable* stable = new symbolTable();
		tabMgr.push_back(stable);
	}
	tableManager(const tableManager&);
	tableManager& operator=(const tableManager&);

};
#endif