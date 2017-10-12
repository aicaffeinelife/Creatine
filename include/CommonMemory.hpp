
#ifndef _COMMON_MEMORY_HPP_
#define _COMMON_MEMORY_HPP_ 

#include <cstdlib>
/*
 CommonMemory: A class managing both CPU and GPU memory management. 
*/
 


class CommonMemory
{
  public:
	explicit CommonMemory();
	~CommonMemory();



 private: 
 	 CommonMemory(const  CommonMemory &); 
 	 CommonMemory & operator=(const CommonMemory &);
	
};








#endif

