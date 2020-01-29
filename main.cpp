#include <iostream>
using namespace std;

#include "Pet.h"

int main(int argc, char ** argv) {
  Pet dog;
  dog.SetName("Tom");
  dog.SetAge(4);
  dog.SetType("Dog");
  dog.SetWeight(25.0);

  cout << "Name: " << dog.GetName() << ", Age: " << dog.GetAge() << ", Type: " << dog.GetType() << ", Weight: " << dog.GetWeight() << endl;

  cout << endl;

  Pet cat;
  cat.SetName("Jack");
  cat.SetAge(2);
  cat.SetType("Cat");
  cat.SetWeight(14.3);

  cout << "Name: " << cat.GetName() << ", Age: " << cat.GetAge() << ", Type: " << cat.GetType() << ", Weight: " << cat.GetWeight() << endl;

  return 0;
}
