#ifndef __SORTING_H
#define __SORTING_H

#include "iostream"
#include "list"
#include "Eigen/Eigen"
#include "map"

using namespace std;
using namespace Eigen;

namespace SortLibrary {


  struct DecreasingInt
  {
    int value;
    DecreasingInt() = default;
    DecreasingInt(const int& value): value(value){}

  };

  inline ostream &operator<<(ostream &os, const DecreasingInt &obj)
  {
    os << obj.value;
    return os;
  }

  inline bool operator==(const DecreasingInt &obj1, const DecreasingInt &obj2)
  {
    return obj1.value == obj2.value;
  }

  inline bool operator!=(const DecreasingInt &obj1, const DecreasingInt &obj2)
  {
    return !(obj1 == obj2);
  }

  inline bool operator<(const DecreasingInt &obj1, const DecreasingInt &obj2)
  {
    return obj1.value > obj2.value;
  }

  inline bool operator>(const DecreasingInt &obj1, const DecreasingInt &obj2)
  {
    return obj1.value < obj2.value;
  }

  template<typename T>
  vector<T> HeapSort(const vector<T>& v){
    return v;
  }

   /// ... and other

}




#endif // __SORTING_H
