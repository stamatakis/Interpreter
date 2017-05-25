#include <iostream>
#include <stdlib.h>
#include "tableManager.h"
#include "ast.h"


tableManager& tableManager::getInstance() {
  static tableManager instance;
  return instance;
}

bool tableManager::myFind(const std::string& val) {
	int scope = currscope;

	while(scope >= 0){
		if(tabMgr[scope]->myFind(val) == true){
			return true;
		}
	    else{
	    	 --scope;
	    }
	}
	return false;
}

Ast* tableManager::getVal(const std::string& val) {
	int scope = currscope;
	Ast* found = nullptr;

	while(scope >= 0){
		if(tabMgr[scope]->myFind(val) == true){
			found = tabMgr[scope]->getVal(val);
			return found;
		}
		else{
			--scope;
		}
	}
	return found;

}

void tableManager::setGlobal(const std::string& val) {
	
	int scope = tabMgr.size() - 1;
	Ast* found = nullptr;

	while(scope >= 0){
		if(tabMgr[scope]->myFind(val) == true){
			found = tabMgr[scope]->getVal(val);
		    found->setGlobal();
			--scope;
		}
	}


}

void tableManager::setVal(std::string& key, Ast* var){
	
	int scope = currscope;
//std::cout << "table size " << tabMgr.size() << "scope: " << scope << std::endl;
	if (scope <= tabMgr.size()){
		symbolTable* stable = new symbolTable();
		tabMgr.push_back(stable);
		//std::cout << " inside tablemanager setVal " << std::endl;
		//std::cout << "table size: " << tabMgr.size() << std::endl;
	}
//d::cout << " key: " << key << " var : " << var->getNumber() << std::endl;
//std::cout << " inside tablemanager setVal " << std::endl; 
	if(var->checkGlobal() == true){
		int scope = tabMgr.size() - 1;
		while(scope >= 0){
			tabMgr[scope]->myInsert(key, var);
			--scope;
		}
	}
	if(var->checkGlobal() == false){
		tabMgr[scope]->myInsert(key, var);
	}
	
}