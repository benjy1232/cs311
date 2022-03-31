//
// Created by Benjamin Serrano on 3/31/2022.
//

#ifndef LAB8_13_VECTORLIBRARY_H
#define LAB8_13_VECTORLIBRARY_H

#include "Book.h"
#include <vector>
using namespace std;

class VectorLibrary {
public:
    VectorLibrary();

    int InsertSorted(const Book &newBook, int counter);

    void PrintLibrary() const;

private:
    // vector library
    vector<Book> library;

};


#endif //LAB8_13_VECTORLIBRARY_H
