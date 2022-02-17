// TODO: write your comment here
// descrption:
// name:
// date:

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<int> readIntsFromFile(const std::string& fileName);
std::vector<int> calculateDifferences(const std::vector<int>& v1,
                                      const std::vector<int>& v2);

// TODO: implement this function
std::vector<int> readIntsFromFile(const std::string& fileName) {
  std::fstream fileRead(fileName);
  std::string fileOut;
  std::vector<int> returnVal;
  int numLines = 0;
  while (std::getline(fileRead, fileOut)) {
    numLines++;
  }
  fileRead.clear();
  fileRead.seekg(0);
  for (int i = 0; i < numLines; i++) {
    int num;
    fileRead >> num;
    returnVal.push_back(num);
  }
  fileRead.close();
  return returnVal;
}

// TODO: implement this function
// PRE-condition: v1 and v2 are of same size.
std::vector<int> calculateDifferences(const std::vector<int>& v1,
                                      const std::vector<int>& v2) {
  std::vector<int> ret;
  if (v1.size() != v2.size()) {
    return {};
  }
  for (int i = 0; i < v1.size(); i++) {
    ret.push_back(v1[i] - v2[i]);
  }

  return ret;
}

int main() {
  // step1 : uncomment following code snippet to test function readIntsFromFile
  auto v1 = readIntsFromFile("n1.txt");
  auto v2 = readIntsFromFile("n2.txt");
  for (auto i : v1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // step 2: uncomment following code snippet to test function
  // calculateDifferences for(auto i : calculateDifferences(v1, v2)){
  //   std::cout << i << " ";
  // }
  // std::cout << std::endl;

  return 0;
}
