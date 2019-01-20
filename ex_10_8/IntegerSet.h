#ifndef INTSET_H
#define INTSET_H
#include <vector>
using namespace std;

class IntegerSet
{
  public:
    IntegerSet();
    IntegerSet(int* input,int sizeOfTheInput);

    IntegerSet&        unionOfSets(IntegerSet& anotherSet);
    IntegerSet& intersectionOfSets(IntegerSet& anotherSet);
    void insertElement(int);
    void deleteElement(int);
    void print() const;
  private:
    bool set[100];
    bool isInRange(int value);

};


#endif
