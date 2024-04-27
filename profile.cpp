#include <iostream>
#include "profile.hpp"

// This is the constructor and will instantiate a new object with these attributes
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

// This method and any additional methods need to be defined outside of the constructor
std::string Profile::view_profile() {

  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies:\n";

  for (std::string hobby : hobbies) {

    hobby_string += " - " + hobby + "\n";

  }

  return bio + "\n" + hobby_string;

}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}