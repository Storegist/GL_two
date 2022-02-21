#include <csignal>
#include <iostream>

#include "include/signal.hpp"
using namespace std;

void signal_handler(int signal_num);

int main() {
  // register signal SIGABRT and signal handler
  // SIGABART performs the termination of the program when we press Ctrl+C
  signal(SIGABRT, signal_handler);  // register the signal SIGABRT that we'd
                                    // like to catch and signal handler

  while (true) cout << "Hello. This is program..." << endl;
  return 0;
}
