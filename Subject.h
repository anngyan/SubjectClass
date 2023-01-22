#pragma once

class Subject {
private:
   char name[100];
public:
   Subject(char n[]); // Constructor
   char* GetName(); // Copies the name and returns the copy
};