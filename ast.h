//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <vector>
#include "stringParser.h"
#include "tableManager.h"



static int nodeNum = 0;
static int graphNum = 0;
static std::ofstream myfile;
extern void yyerror(const char*);
extern void yyerror(const char*, const char);
static int zeroflag = 0;

class Ast {
public:
  Ast(std::string n, char key) : nodetype(n), myNode(nodeNum), key('n') { ++nodeNum; 
    right = NULL; left = NULL; }
  virtual ~Ast() {}
  std::string getNodetype() const { return nodetype; }
  const int getNodeNum() const{ return myNode; }
  virtual Ast* getLeft() const { return left; }
  virtual Ast* getRight() const { return right; }
  virtual std::string getNumber() const { throw std::string("No Number"); }
  //virtual void setKey(char c) { key = c; }
  virtual char getChar() const { return key;}
  virtual void setNodes(Ast* l, Ast* r) { left = l; right = r; }
  virtual std::string myeval() const { throw std::string("No eval");
       }   // Evaluate an AST
 virtual void treeFree() const { throw std::string("No tree");
  } // delete and free an AST */
 virtual void setVal(std::string value) {     
  }
  virtual void setKey(std::string akey) {   
  }
  virtual std::string getKey() { throw std::string("No key");
  }
  virtual bool checkGlobal() {  }
  virtual void setGlobal() { }
  
  void initGraph();
  virtual void makeGraph();
  void closeGraph();
private:
  std::string nodetype;
  int myNode;
  char key;
  Ast* left;
  Ast* right;
};

class AddNode : public Ast {
public:
  AddNode(std::string nodetype) : Ast(nodetype, 'a') {}
  virtual ~AddNode() {}  
  virtual std::string myeval() const;

private:
   std::string answer;
  
};

class SubNode : public Ast {
public:
  SubNode(std::string nodetype) : Ast(nodetype, 's') {}
  virtual ~SubNode() {}
  virtual std::string myeval() const;
private:
  std::string answer;
};

class MultNode : public Ast {
public:
   MultNode(std::string nodetype) : Ast(nodetype, 'm') {}
   virtual ~MultNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class DivNode : public Ast {
public:
   DivNode(std::string nodetype) : Ast(nodetype, 'd') {}
   virtual ~DivNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class DivDivNode : public Ast {
public:
   DivDivNode(std::string nodetype) : Ast(nodetype, 'd') {}
   virtual ~DivDivNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class ModNode : public Ast {
public:
   ModNode(std::string nodetype) : Ast(nodetype, '%') {}
   virtual ~ModNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class UMinNode : public Ast {
public:
   UMinNode(std::string nodetype) : Ast(nodetype, 'u') {}
   virtual ~UMinNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class UPosNode : public Ast {
public:
   UPosNode(std::string nodetype) : Ast(nodetype, 'u') {}
   virtual ~UPosNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class ParenNode : public Ast {
public:
   ParenNode(std::string nodetype) : Ast(nodetype, 'p') {}
   virtual ~ParenNode() {}
   
   virtual std::string myeval() const;
private:
  std::string answer;
};

class ExpoNode : public Ast {
public:
   ExpoNode(std::string nodetype) : Ast(nodetype, 'x') {}
   virtual ~ExpoNode() {}
   virtual std::string myeval() const;
private:
  std::string answer;
};

class AstFunc : public Ast {
public: 
   AstFunc(std::string nodetype, std::string fname, std::vector<Ast*>* vec) : 
      Ast(nodetype, 'f'), funcname(fname), fvec(vec) {
         tableManager& tabmgr = tableManager::getInstance(); 
         int scope = tabmgr.getScope();
         myscope = scope;
         //std::cout << " in AstFunc " << std::endl;
        }
   virtual ~AstFunc() {
      std::vector<Ast*>::iterator ptr = fvec->begin();
      while ( ptr != fvec->end() ) {
          ptr = fvec->erase(ptr);
        
      
      }
   }
   virtual std::string myeval() const;
   
private:
  int myscope;
  std::string funcname;
  std::vector<Ast*>* fvec;
};

class AstCall : public Ast {
public:
  AstCall(std::string nodetype, std::string functocall) : Ast(nodetype, 'c'), 
    functionname(functocall) {}
  virtual ~AstCall(){}
  virtual std::string getNumber() const { return functionname; }
  virtual std::string myeval() const{
      tableManager& tabmgr = tableManager::getInstance();
//std::cout << " in AstCall " << std::endl;
      Ast* funcdo = tabmgr.getVal(functionname);
 //std::cout << " in AstCall 2" << std::endl;   
 //std::cout << " funcdo: " << funcdo->getNodetype() << std::endl;
 return funcdo->myeval();
   }
   virtual std::string getfname() {
      return functionname;
   }
private:
  std::string functionname;

};

class AstNumber : public Ast {
public:
  AstNumber(std::string nodetype, std::string& n) : Ast(nodetype, 'k'), number(n) {
    } 
  virtual ~AstNumber() {}
  virtual std::string getNumber() const { return number; }
  virtual std::string myeval() const { return number; }
  
  virtual void treeFree() const {
      delete this;
   }
   
   virtual void makeGraph() {
     
  }
private:
  std::string number;
};

class AstPrint : public Ast {
public: 
  AstPrint(std::string nodetype, Ast* toprint) : Ast(nodetype, 'p')  { 
    toPrint = toprint; } 
  virtual ~AstPrint() {}
  virtual std::string getNumber() const { throw std::string("No Number"); }
  virtual std::string myeval() const {
    //std::cout << " in print myeval () " << std::endl;

    std::cout << toPrint->myeval() << std::endl;
    std::string ret = "";
     return ret;
  }

private:
  Ast* toPrint;
  
};

class AstReturn : public Ast {
public: 
  AstReturn(std::string nodetype, Ast* toprint) : Ast(nodetype, 'r')  { 
    toPrint = toprint; } 
  virtual ~AstReturn() {}
  virtual std::string getNumber() const { throw std::string("No Number"); }
  virtual std::string myeval() const {
    //std::cout << " in print myeval () " << std::endl;
    std::cout << toPrint->myeval() << std::endl;
    std::string ret = "";
     return ret;
  }

private:
  Ast* toPrint;
  
};

class AstVar : public Ast {
public: 
  AstVar(std::string);
  virtual ~AstVar() {}
  virtual std::string getNumber() const ;
  virtual std::string myeval() const ;
  virtual void setVal(std::string value) ;
  virtual void setKey(std::string);
  virtual std::string getKey();
  virtual bool checkGlobal() { return global; }
  virtual void setGlobal() { global = true; }

private:
  bool global;
  std::string key;
  std::string value;
  tableManager& tabmgr;
  
};

class voidNode : public Ast {
public:
   voidNode(std::string nodetype) : Ast(nodetype, 'v') {}
   virtual ~voidNode() {}
   
   virtual std::string myeval() const {
      return "void";
   }
private:
  std::string answer;
};
