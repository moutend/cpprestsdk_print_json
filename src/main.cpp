#include <cpprest/http_client.h>
#include <iostream>

using namespace web;

void printObject() {
  json::value data;

  data["valueA"] = json::value(111);
  data["valueB"] = json::value(222);
  data["valueC"] = json::value(333);

  std::cout << data.serialize().c_str() << std::endl;
}

void printArray() {
  json::value data;

  for (int i = 0; i < 10; i++) {
    data["values"][i] = json::value(i);
  }

  std::cout << data.serialize().c_str() << std::endl;
}

void printComplexArray() {
  json::value data;

  for (int i = 0; i < 3; i++) {
    json::value o;

    o["type"] = json::value("number");
    o["value"] = json::value(i);

    data["values"][i] = o;
  }

  std::cout << data.serialize().c_str() << std::endl;
}

int main() {
  printObject();
  printArray();
  printComplexArray();

  return 0;
}
