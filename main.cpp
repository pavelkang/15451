#include <boost/program_options.hpp>
#include <iostream>

namespace po = boost::program_options;
using namespace std;

int main(int argc, const char *argv[]) {

  po::options_description desc("Allowed options");
  desc.add_options()
          ("help", "produce help message");
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);

  if (vm.count("help")) {
    cout << desc << endl;
    return 1;
  }



  return 0;
}