#include <iostream>

struct Employee{
  std::string firstName;
  std::string lastName;
  std::string id;
  std::string email;
  std::string phoneNum;
  float salary;
  Employee* manager;
};

void populate(Employee* worker){

}

int main(){
  Employee worker1;
  Employee worker2;
  Employee manager;
  return 0;
}
