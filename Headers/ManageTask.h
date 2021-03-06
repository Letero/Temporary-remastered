#ifndef TASKTHREAD_H
#define TASKTHREAD_H

#include "Common.h"
#include "AllTasks.h"
#include <string>
#include <sstream>
#include <iostream>
#include <Windows.h> //windows library, QueryPerformanceCounter used from this lib

class ManageTask
{
public:
  explicit ManageTask(const std::string &newLine);
  ~ManageTask();
  /**
   * @brief Print results after calculating task
   * */
  void printResults();

private:
  /**
   * @brief Variable storing object of singleTask struct
   * */
  singleTask singleTaskStructObj;
  /**
     * @brief String with data to operate on
     * */
  std::string line;
  /**
   * @brief Helper function, extracts data from lines and saves to singleTask struct object
   * @param[in] line to operate on
   * @return Void
   * */
  void saveToStruct();
  /**
     * @brief Calculate given task and save results
     * @return Void 
     * */
  void calculateSingleTask();
  /**
   * @brief function to help with printing error messages
   * @param[in] errorCode
   * @return string to print
   * */
  std::string printErrorHelper(errorCode_t errCode);
};

#endif //TASKTHREAD_H
