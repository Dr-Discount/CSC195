#include <iostream>  
#include <array>  
#include <vector>  
#include <list>  
#include <map> // Include the missing header for std::map  

using namespace std;  

void printVector(vector<int> vec) {  
  for (int i = 0; i < vec.size(); i++) {  
      cout << vec[i] << " ";  
  }  
  cout << endl;  
}  

void printList(list<string> lst) {  
  for (auto it = lst.begin(); it != lst.end(); ++it) {  
      cout << *it << " ";  
  }  
  cout << endl;  
}  

int main() {  
  // Array  
  array<string, 7> daysOfWeek = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };  
  cout << daysOfWeek.size() << endl;  
  cout << " " << endl;
  for (int i = 0; i < daysOfWeek.size(); i++) {  
      cout << daysOfWeek[i] << endl;  
  }  

  // Vector  
  cout << " " << endl;
  vector<int> nums = { 17, 22, 13, 44, 5 };  
  printVector(nums);  
  nums.push_back(99);  
  nums.push_back(69);  
  printVector(nums);  
  nums.pop_back();  
  printVector(nums);  

  // List  
  cout << " " << endl;
  list<string> fruit = { "Apple", "Banana", "Grapes" };  
  printList(fruit);  
  fruit.push_front("Orange");  
  printList(fruit);  
  fruit.remove("Apple");  
  printList(fruit);  

  // Map  
  cout << " " << endl;
  map<string, int> fruits = { {"apples", 10}, {"bananas", 15}, {"grapes", 13} }; 
  for (const auto& pair : fruits) {  
      cout << pair.first << ": " << pair.second << endl;  
  }  
  cout << " " << endl;
  fruits["bananas"] = 20;
  for (const auto& pair : fruits) {
      cout << pair.first << ": " << pair.second << endl;
  }
  return 0;  
}