#include "Person.h"

Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string firstName, float newWeight) {
    mFirstName = firstName;
    mWeight = newWeight;
    mAge = 0;
}

Person::~Person() {
}

float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}

bool Person::operator>(const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}

bool Person::operator<(const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}
