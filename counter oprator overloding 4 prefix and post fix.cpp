//countpp1.cpp
// increment counter variable with ++ operator with parametrized constructer
#include <iostream>

using namespace std;
////////////////////////////////////////////////////////////////
class Counter {
  private:
   unsigned int count; //count
  public:
   Counter(): count(0) //constructor
  {}
  Counter(int c)
  {
  	count=c;
  }
  unsigned int get_count() //return count
  {
    return count;
  }
  Counter operator++() //increment (prefix)
  {
    ++count;
    return Counter(count);
   
  }
    Counter operator++ (int) //increment (postfix)
  {
    count++;
    return Counter(count);
   
  }
};
////////////////////////////////////////////////////////////////
int main() {
  Counter c1, c2, c3; //define and initialize
  cout << "\nc1=" << c1.get_count(); //display
  cout << "\nc2=" << c2.get_count();
    cout << "\nc3=" << c3.get_count();
    cout<<"===================="<<endl;
    ++c1;
   c2=++c1;
   c3=++c2;

  cout << "\nc1=" << c1.get_count(); //display again
  cout << "\nc2=" << c2.get_count();
  cout << "\nc3=" << c3.get_count() << endl;
  cout<<"===================="<<endl;
  c2=c1++;
  c3=c2++;
  cout << "\nc1=" << c1.get_count(); //display again
  cout << "\nc2=" << c2.get_count();
  cout << "\nc3=" << c3.get_count() << endl;
  cout<<"===================="<<endl;
  return 0;
}
