#include "Pet.h"

void Pet::SetName(string petName) {
  name = petName;
}

void Pet::SetAge(int petAge) {
  age = petAge;
}

void Pet::SetType(string petType) {
  type = petType;
}

void Pet::SetWeight(double petWeight) {
  weight = petWeight;
}

string Pet::GetName() const {
  return name;
}

int Pet::GetAge() const {
  return age;
}

string Pet::GetType() const {
  return type;
}

double Pet::GetWeight() const {
  return weight;
}
