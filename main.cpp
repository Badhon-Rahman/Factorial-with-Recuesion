#include <iostream>

using namespace std;

int Factorial(int fact){
  if(fact == 1){
    return 1;
  }
  else{
    return fact * Factorial(fact - 1);
  }
}

int main()
{
    int findFact, value;

    cout << "Enter finding factorial number:";
    cin >> findFact;

    value = Factorial(findFact);
    cout << "Factorial of " << findFact << " is: " << value << endl;
    return 0;
}
