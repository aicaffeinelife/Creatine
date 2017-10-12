#ifndef _COMMON_HPP_
#define _COMMON_HPP_ 

/* Defines common macros used by classes. */

#define DISABLECOPYASSIGN(Clsname) \
(\ 
Clsname(const Clsname &) = delete; \
Clsname & operator=(const Clsname &); \
)
 





#endif 