// File: bugs.cpp 
// Name: Huabo Lu 
// Date: 01/26/2022

#include <iostream>
#include <string>
#include <algorithm>    // for std::reverse()

std::string D2BConverter(int num);

int main(){ 

  // expected output : 110001
  std::cout << D2BConverter(49) << std::endl; 

  // expected output : 1011110
  std::cout << D2BConverter(94) << std::endl; 

  // expected output : 1001101
  std::cout << D2BConverter(77) << std::endl; 

  return 0; 
}

std::string D2BConverter(int num){ 
  std::string r_result{}; 

  while(num != 1){ 
    r_result.append(std::to_string(num%2));
    num /= 2;
  }
  r_result.append(std::to_string(num));
  std::reverse(r_result.begin(), r_result.end());

    return r_result;
}