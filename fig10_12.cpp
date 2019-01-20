#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
  Date birth(1,25,1997);
  Date hire (1, 7,2019);
  Employee slave("Thales", "Carl", birth,hire);

  cout << endl;
  slave.print();
}
