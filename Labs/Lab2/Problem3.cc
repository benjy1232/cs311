#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int> mergeTwoVectors(const vector<int>& v1, const vector<int>& v2);

vector<int> mergeTwoVectors(const vector<int>& v1, const vector<int>& v2) {
  // implement mergeTwoVectors function
  // basic logic: compare candidate element from each vector, and put smaller
  // one into result vector. Then bring one new candidate (do not bring two) and
  // repeat the process. Fulsh remaining elements from the unfinished vector to
  // result vector.

  unsigned i = 0;
  unsigned j = 0;
  vector<int> result;
  while (i < v1.size() && j < v2.size()) {
    // TODO: compare two candicates v1[i] vs v2[j]
    // push the smaller one into result vector,
    // update corresponding index to point at next candidate number.

    if (v1[i] < v2[j]) {
      result.push_back(v1[i]);
      i++;
    } else {
      result.push_back(v2[j]);
      j++;
    }

  }

  // flush any remaining elements from vector v1 to result vector
  while (i < v1.size()) {  // check if v1 is unfinished
    result.push_back(v1[i]);
    i++;
  }

  // missing something: what if v2 has any remaining elements?
  while (j < v2.size()) {
    result.push_back(v2[j]);
    j++;
  }

  return result;
}

int main() {
  // step 1: uncomment following code snippet to pass step 1 check.
  // expected output:
  // 5 10 20 25 30 40 45 50 100 200
  vector<int> v1{10, 20, 30, 40, 50, 100};
  vector<int> v2{5, 25, 45, 200};
  for (auto i : mergeTwoVectors(v1, v2)) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}