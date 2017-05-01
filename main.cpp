#include <iostream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <sstream>

using namespace std;

int main(void) {
    curlpp::Cleanup myCleanup;
    std::ostringstream os;

    os << curlpp::options::Url(std::string("https://api.ipify.org"));
    string myIp = os.str();

    cout << myIp << endl;

    exit(0);
}
