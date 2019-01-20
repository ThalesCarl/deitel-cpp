#include <iostream>
#include <vector>
using namespace std;
#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
  for(int i=0;i<100;++i)
  {
    set[i]=false;
  }
}

IntegerSet::IntegerSet(int* input,int size)
{
  for(int i=0;i<100;++i)
  {
    set[i]=false;
  }
  for(int i=0;i<size;i++)
  {
    int index = input[i];
    if(isInRange(index))
      set[index] = true;
  }
}

void IntegerSet::insertElement(int element)
{
  if(isInRange(element))
    set[element] = true;
}

void IntegerSet::deleteElement(int element)
{
  if(isInRange(element))
    set[element] = false;
}

bool IntegerSet::isInRange(int value)
{
  if(value<0 || value>99)
  {
    cout << "Integer must be at the range 0-99" << endl;
    return false;
  }
  else
    return true;
}

void IntegerSet::print() const
{
  cout << "Set = ";
  for(int i=0;i<100;i++)
  {
    if(set[i]==true)
      cout << i << " ";
  }
  cout << endl;
}
