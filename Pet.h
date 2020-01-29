#include <iostream>
#include <string>

using namespace std;

class Pet {
  public:
    void SetName(string petName);
    void SetAge(int petAge);
    void SetType(string petType);
    void SetWeight(double petWeight);

    string GetName() const;
    int GetAge() const;
    string GetType() const;
    double GetWeight() const;

  private:
    string name;
    int age;
    string type;
    double weight;
};
