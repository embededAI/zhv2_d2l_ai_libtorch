/*
 * =====================================================================================
 *
 *       Filename:  custom_def.hpp
 *
 *    Description:  store self-defined macros 
 *
 *        Version:  1.0
 *        Created:  03/18/2021 02:19:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  hanliu (liuhang20011@163.com)
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef CUSTOM_DEF
#define CUSTOM_DEF



//NOTE: a custom print function, 
//      used to print tensor content;
#define printT(tensor) do { \
          std::cout << #tensor << " = " << std::endl << tensor << std::endl; \
          std::cout << "<<--->>" << std::endl << std::endl; \
          } while(0);



#endif
