#ifndef NETWORK_COMMUNICATION_HPP
#define NETWORK_COMMUNICATION_HPP

#include <boost/asio.hpp>
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <string>
#include <sstream>
#include <iomanip>
#include <zlib.h>
#include <nlohmann/json.hpp>
#include <thread> 

#include "ParticleSimulation.hpp"

using boost::asio::ip::tcp;
namespace asio = boost::asio;
using boost::system::error_code;
using json = nlohmann::json;

std::vector<char> prepareMessageForJavaUTF(const std::string& message);

std::string decompressGzip(const std::vector<char>& compressedData);

#endif // NETWORK_COMMUNICATION_HPP
