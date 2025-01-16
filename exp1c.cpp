// 3. program to display multiplication table of a number
#include <iostream>
using namespace std;

class Mtable {
public:
    void displayTable(int num)
{
  for (int i = 1; i <= 10; i++)
  {
     cout << num << " * " << i << " = " << num * i <<"\n";
  }
    }
};

int main() {
    int num;

    cout << "Enter a number: "; 
    cin >> num;  

    Mtable t ;
    t.displayTable(num); 

    return 0;
}

