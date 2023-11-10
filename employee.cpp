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

void populate(Employee* worker);

void populate(Employee* worker, std::string fname, std::string lname, std::string id, std::string email, std::string phoneNum, float salary, Employee* manager){
  worker->firstName = fname;
  worker->lastName = lname;
  worker->id = id;
  worker->email = email;
  worker->phoneNum = phoneNum;
  worker->salary = salary;
  worker->manager = manager;
}

void initializeThreeWorkers(){
  Employee worker1;
  Employee worker2;
  Employee manager;

  populate(&worker1, "Joe", "Joeman", "WK0001", "joe@joeman.com", "08090", 3000, &manager);
  populate(&worker2, "Kyle", "Krill", "WK0002", "kyle@kalil.com", "08770", 5000, &manager);
  populate(&manager, "Joey", "Wheeler", "M00001", "j.wheeler@hotmail.com", "08890", 10000, nullptr);
}

int main(){
  std::cout << "How many staff members are there?\n>";
  int employeeNum;
  std::cin >> employeeNum;
  Employee* workers = new Employee[employeeNum];
  for(int i=0; i < employeeNum; i++){
    std::cout << "["<<(i+1)<<"] First Name: ";
    std::cin >> workers[i].firstName;
    std::cout << "["<<(i+1)<<"] Last Name: ";
    std::cin >> workers[i].lastName;
    std::cout << "["<<(i+1)<<"] ID: ";
    std::cin >> workers[i].id;
    std::cout << "["<<(i+1)<<"] Email: ";
    std::cin >> workers[i].email;
    std::cout << "["<<(i+1)<<"] Phone Number: ";
    std::cin  >> workers[i].phoneNum;
    std::cout << "["<<(i+1)<<"] Salary: ";
    std::cin >> workers[i].salary;
  }
  std::string employeeStr= "[ID]\t[FNAME]\t[LNAME]";
  std::cout << employeeStr << std::endl;
  std::cout << sep << std::endl;
  for(int i=0; i < employeeNum; i++){
    std::cout << workers[i].id << "\t" << workers[i].firstName << "\t" << workers[i].lastName << std::endl;
  }

  delete[] workers;
  workers = nullptr;
  return 0;
}
