#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <iostream>
#include "linux_parser.h"
#include <string>
#include <vector>

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
   float total_jiffies{0.0};
   float total_jiffies_prev{0.0};
   float idle_jiffies{0.0};
   float util_jiffies{0.0};
   float util_jiffies_prev{0.0};
   float usage{0.0};
};

#endif
