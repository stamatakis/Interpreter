#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <cstdlib>


class stringParser {
public:
  stringParser() {}
  ~stringParser() {}
  bool intCheck(std::string& one, std::string& two) {
     std::string itest("integer");
   
    if((one.compare(itest) == 0) && (two.compare(itest) == 0))
      return true;
    else
      return false;
  }
  int ptZero(std::string& one, std::string& two) {
  	 int flag = 0;
  	 int flag2 = 0;

  	 std::size_t found1 = one.find(".");
  	 if (found1 != std::string::npos){
  	 	int onel = one.length();
  	    int diff1 = onel - found1;
  	    if(diff1 == 2){ /// check for .0
  	 	   if(one.at(onel-1) == '0')
  	 		    flag = 1;
          else
            flag2 = 1;
  	    }
  	    if(diff1 > 2) //check for more that .0 after decimal
  	    	flag2 = 1;
  	}
  	 

  	 std::size_t found2 = two.find(".");
  	 if (found2 != std::string::npos){
  	    int twol = two.length();
  	    int diff2 = twol - found2;
  	    if(diff2 == 2) {
  	    	if(two.at(twol-1) == '0')
  	 		flag = 1;
  	    }
  	    if(diff2 > 2)
  	    	flag2 = 1;
  	 	
  	 }
  	 if(flag2 == 1 )
  	 	return 2; //more than .0
  	 if(flag == 1)
  	 	return 1; //put a .0 in the format
  	 else
  	 	return 0;

  	 
  }
  /*int removeZero(std::string& answer) {
  	 int len = answer.length();
  	 int aftdec = 0
  	 std::size_t found = answer.find(".");
  	 if(found != std::string::npos){
  	 	aftdec = len - (found + 1);

  	 }
  }*/
private:
  
};