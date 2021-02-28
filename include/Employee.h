// Copyright 2021 TimurZaytsev
//

#ifndef INCLUDE_EMPLOYEE_H_
#define INCLUDE_EMPLOYEE_H_

#include <string>

typedef uint64_t id_type;

enum class Position {
Driver,
 Cleaner,
 Tester,
 Programmer,
 TeamLeader,
 ProjectManager,
 SeniorManager
};


class Project {
 protected:
std::string _id;
int _budget;
};


class Employee {
 public:
Employee(id_type id, const std::string& name);
virtual ~Employee() = default;
void worktime(unsigned int wt);
virtual void calc() = 0;
virtual void print_info() = 0;
friend class StaffFactory;
 protected:
  id_type _id;
  std::string _nameof;
  Position _position;
  unsigned int _timeofwork;
  unsigned int _payment;
};

#endif  // INCLUDE_EMPLOYEE_H_
