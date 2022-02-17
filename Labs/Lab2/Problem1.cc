// TODO: write your comment here 
// Description: 
// Name: Benjamin Serrano
// Date: 02-08-2022

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

// TODO: implement this function 
// visit https://www.cplusplus.com/reference/cstdlib/rand/ to learn about how to control the range of random numbers 
std::vector<int> numRandomNumbers(int start, int end, int numRandomNumbers){ 
  // create a result vector 
  std::vector<int> randomNums;
  int diff = end - start;

  // need a loop to run numRandomNumbers times. 
  // call rand() function and use proper parameters to control the range for random numbers. 
  for(int i = 0; i < numRandomNumbers; i++) {
      randomNums.push_back(rand() % diff + start);
  }

  // update return function. 
  return randomNums;
}

int main()
{   
  // step 1: uncomment following code snippet to test your function
  // expected output: 
  // 40 1 79 84 56 23 5 70 81 71 80 28 97 47 90 1 80 38 10 43 

   srand(100); 
   for (auto i : numRandomNumbers(0, 100, 20)){
     std::cout << i << " "; 
   }
   std::cout << std::endl;
  
  
  // step 2: uncomment following code snippet to test your function
  // expected output: 
  // 40 1 79 84 56 23 5 70 81 71 80 28 97 47 90 1 80 38 10 43 
  // 503 580 564 562 553 574 570 594 559 519 590 583 531 582 546 574 545 595 544 520 
  
  srand(200); 
  for (auto i : numRandomNumbers(500, 600, 20)){
    std::cout << i << " "; 
  }
  std::cout << std::endl;

  return 0;
}