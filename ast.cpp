// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <math.h>

#include "ast.h"



void Ast::initGraph() {
      ++graphNum;
      myfile.open("graph"+ std::to_string(graphNum) + ".gv");
      //++graphNum;
      myfile << "digraph graph"+ std::to_string(graphNum) + " {\n";
      myfile << "node [shape = record,height=.1]\n";   
  }
  void Ast::makeGraph() {
    
  }
  void Ast::closeGraph() {
  }

  std::string AddNode::myeval() const {
    
     std::string s;
     int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
     std::string one = getLeft()->myeval();

     std::string two = getRight()->myeval();
     //std::cout << one <<two << std::endl;
     stringParser* parser = new stringParser();
 
       int ptzero = parser->ptZero(one, two);
       float a = atof(one.c_str());
       float b = atof(two.c_str());
       float c = a + b;

        s = std::to_string(c);
        s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
        s.erase ( s.find_last_not_of('.') + 1, std::string::npos );
       if(ptzero == 1){
          s.append(".0");
         // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
        delete parser;
       return s;
       }

  std::string SubNode::myeval() const {
      std::string s;
     int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     } 
     std::string one = getLeft()->myeval();
     std::string two = getRight()->myeval();
     stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(one, two);
       float a = atof(one.c_str());
       float b = atof(two.c_str());
       float c = a - b;
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );
       if(ptzero == 1){
          s.append(".0");
           // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
        delete parser;
       return s;
       }

   std::string MultNode::myeval() const {
      std::string s;
      int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
     std::string one = getLeft()->myeval();
     std::string two = getRight()->myeval();
     stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(one, two);
       float a = atof(one.c_str());
       float b = atof(two.c_str());
       float c = a * b;
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
           // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
        delete parser;
       return s;
       }

   std::string DivNode::myeval() const {
      std::string one;
      std::string two;
      std::string s;
      int varflag = 0;
      
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }

      float c = 0;
      one = getLeft()->myeval();
      two = getRight()->myeval();
      stringParser* parser = new stringParser();

      int ptzero = parser->ptZero(one, two);
      float a = atof(one.c_str());
      float b = atof(two.c_str());
       if( b == 0){
          std::cout << "Traceback (most recent call last):" << std::endl;
          std::cout << "  File \"<stdin>\", line 1, in <module>" << std::endl;
          std::cout << "ZeroDivisionError: integer division or modulo by zero" << std::endl;
          return 0;
       }
       c = a / b;
       //std::cout<< getLeft()->getNodetype() << " " << getRight()->getNodetype() << std::endl;
        if((getLeft()->getNodetype().compare("integer") == 0) && (getRight()->getNodetype().compare("integer") == 0)){
        //std::cout << "div " << std::endl;
            c = floor(c);
          // if(c < 0 && c > -1 )
          //   c = -1;
          // if(c > 0 && c < 1)
          //   c = 0;
       }
       else{
          if(c < 0 && c > -1 )
            c = -1;
          if(c > 0 && c < 1)
            c = 0;
       }
       //std::cout << " c: " <<  std::setprecision(16) << c << std::endl;
       //c = floor (c);
       std::ostringstream ss;
       // if(ptzero ==2){
       //   ss.precision(16);
       //   ss << std::setprecision(16) << c;
       //   s = (ss.str());
       // }
       // else{
       if(c == -0)
          c = 0;
         ss << c;
         s = (ss.str());
      // }//std::cout << s << std::endl;
       //std::cout << c << std::endl;
       if(ptzero == 1){    
         // s.append(".0");
          
           // zeroflag = 1;

          //return s;
       }
       // s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       // s.erase ( s.find_last_not_of('.') + 1, std::string::npos );
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
     // std::cout << s << std::endl;
        delete parser;
       return s;

       }

   std::string DivDivNode::myeval() const {
    std::string one;
      std::string two;
      std::string s;
      int varflag = 0;
      
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }

      float c = 0;
      one = getLeft()->myeval();
      two = getRight()->myeval();
      // stringParser* parser = new stringParser();

      // int ptzero = parser->ptZero(one, two);
      float a = atof(one.c_str());
      float b = atof(two.c_str());
       if( b == 0){
          std::cout << "Traceback (most recent call last):" << std::endl;
          std::cout << "  File \"<stdin>\", line 1, in <module>" << std::endl;
          std::cout << "ZeroDivisionError: integer division or modulo by zero" << std::endl;
          return 0;
       }
       c = a / b;
       //std::cout<< getLeft()->getNodetype() << " " << getRight()->getNodetype() << std::endl;
        //if((getLeft()->getNodetype().compare("integer") == 0) && (getRight()->getNodetype().compare("integer") == 0)){
        //std::cout << "div " << std::endl;
            c = floor(c);
          // if(c < 0 && c > -1 )
          //   c = -1;
          // if(c > 0 && c < 1)
          //   c = 0;
        // }
        // else {
        //     c = ceil(c);
        // }
       //std::cout << " c: " <<  std::setprecision(16) << c << std::endl;
       //c = floor (c);
       std::ostringstream ss;
       // if(ptzero ==2){
       //   ss.precision(16);
       //   ss << std::setprecision(16) << c;
       //   s = (ss.str());
       // }
       // else{
         ss << c;
         s = (ss.str());
      // }//std::cout << s << std::endl;
       //std::cout << c << std::endl;
       if((getLeft()->getNodetype().compare("float") == 0) && (getRight()->getNodetype().compare("float") == 0)){    
          s.append(".0");
          
           // zeroflag = 1;

          //return s;
       }
       // s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       // s.erase ( s.find_last_not_of('.') + 1, std::string::npos );
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
     // std::cout << s << std::endl;
        //delete parser;
       return s;

       }

   std::string ModNode::myeval() const {
      std::string s;
      int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
      float c = 0;
     std::string one = getLeft()->myeval();
     std::string two = getRight()->myeval();
     stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(one, two);
       float a = atof(one.c_str());
       float b = atof(two.c_str());
       if( b == 0)
       {
          std::cout << "Traceback (most recent call last):" << std::endl;
          std::cout << "  File \"<stdin>\", line 1, in <module>" << std::endl;
          std::cout << "ZeroDivisionError: integer division or modulo by zero" << std::endl;
          return 0;
       }
       float d = fmod(a, b);
       float e = d + b;
        
       c = fmod(e, b);
                            
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
          // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
        delete parser;
       return s;
       }


   std::string UMinNode::myeval() const {
      std::string s;
      int varflag = 0;
     if(getRight()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
      float c = 0;
      std::string two = getRight()->myeval();
       stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(two, two);
       float b = atof(two.c_str());
       c = -1 * b;
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
          // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
        delete parser;
       return s;
       }

   std::string UPosNode::myeval() const {
      std::string s;
      int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
      float c = 0;
      std::string two = getRight()->myeval();
      stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(two, two);
       float b = atof(two.c_str());
       c = b;
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
        // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
       return s;
       }

   std::string ParenNode::myeval() const {
      std::string s;
      int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
      float c = 0;
      std::string two = getLeft()->myeval();
      stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(two, two);
       float b = atof(two.c_str());
       c = b;
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
        // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
       return s;
       }

   std::string ExpoNode::myeval() const {
    std::string s;
    int varflag = 0;
     if(getLeft()->getNodetype().compare("var") == 0){
        varflag = 1;
     }
     std::string one = getLeft()->myeval();
     std::string two = getRight()->myeval();
     stringParser* parser = new stringParser();
      int ptzero = parser->ptZero(one, two);
       float a = atof(one.c_str());
       float b = atof(two.c_str());
       float c = pow(a, b);
       s = std::to_string(c);
       s.erase ( s.find_last_not_of('0') + 1, std::string::npos );
       s.erase ( s.find_last_not_of('.') + 1, std::string::npos );

       if(ptzero == 1){    
          s.append(".0");
          // zeroflag = 1;

          //return s;
       }
      // std::cout << " in AddNode myeval() " << s << std::endl;
       if(varflag == 1)
          getLeft()->setVal(s);
      //  else{
      //zeroflag = 0;
       return s;
       }
  std::string AstFunc::myeval() const{
    tableManager& tabmgr = tableManager::getInstance();
    int retscope = tabmgr.getScope();
    tabmgr.pushScope(myscope);
//std::cout << " in AstFunc myeval() " << std::endl;

int j  = fvec->size() - 1;

      for(int i = j; i >= 0 ; --i){
        //std::cout << " in AstFunc.myeval() " << std::endl;
       // if((*fvec)[i]->getNodetype().compare("funcdef") == 0 ){

        // }
        // if((*fvec)[i]->getNodetype().compare("print") == 0 ){
         //}
         //else{
         // std::cout << " in AstFunc.myeval() 2" << std::endl;
             // std::cout << (*fvec)[i]->myeval() << std::endl;
            //  std::cout << " in AstFunc.myeval() 3" << std::endl;
        // }
        /* else{
            
         }*/
         if((*fvec)[i]->getNodetype().compare("funcdef") == 0){
            //(*fvec)[i]->myeval();
         }
         else{
            (*fvec)[i]->myeval();
         }
         

      }
      tabmgr.pushScope(retscope);

      std::string nada = "";
      return nada;
  }

  AstVar::AstVar(std::string nodetype) : Ast(nodetype, 'v'), global(false),
    tabmgr(tableManager::getInstance()) {}
  std::string AstVar::getNumber() const { 
      
      return value;
  }

  std::string AstVar::myeval() const {
    //std::cout << " in AstVar myeval () " << std::endl;
      Ast* found = tabmgr.getVal(key);
      return found->getNumber();
  }
  void AstVar::setVal(std::string val) {
      value = val;
      tabmgr.setVal(key, this);
     // std::cout << " val " << val << " key " << key << std::endl;
      
  }
  void AstVar::setKey(std::string akey) {
    key = akey;
  }
  std::string AstVar::getKey() {
    return key;
   
  }
