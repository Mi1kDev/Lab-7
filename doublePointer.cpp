#include <iostream>

int main(){
  double num = 2.4;
  double* numPtr = &num;
  std::cout << "Variable value: " << num << std::endl;
  std::cout << "Address: " << &num << std::endl;
  std::cout << "Pointer Value: " << numPtr << std::endl;
  std::cout << "Pointer Address: " << &numPtr << std::endl;
  std::cout << "Pointer Derefenced: " << *numPtr << std::endl;
  return 0;
}
