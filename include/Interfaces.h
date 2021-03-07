// Copyright 2021 TimurZaytsev
//

#ifndef INCLUDE_INTERFACES_H_
#define INCLUDE_INTERFACES_H_

#include <string>
#include <utility>

class WorkBaseTime {
 public:
  virtual int calcBase(int HourSalary, int worktime) = 0;
  virtual int calcBonus() = 0;
};

class ProjectBudget {
 public:
  virtual int calcPartOfBudget(float part, int budget) = 0;
  virtual int calcPAditions() = 0;
};

class Heading {
 public:
  virtual int calcHeads() = 0;
};

class Project {
 private:
  int m_Budget;
  std::string m_Title;

 public:
  Project(int budget, std::string title)
      : m_Budget{budget}, m_Title{std::move(title)} {}

  int getBudget() { return m_Budget; }
  const std::string& getTitle() { return m_Title; }
};

#endif  // INCLUDE_INTERFACES_H_
