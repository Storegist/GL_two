#include "include/signal.hpp"

#include <csignal>
#include <cstdio>
#include <iostream>
using namespace std;

void signal_handler(int signal_num) {
  cout << "The interrupt signal is (" << signal_num << "). \n";

  // It terminates the  program
  exit(signal_num);
}
