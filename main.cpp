#include <iostream>
#include "Subject.h"

int main() {

    //inputing the subject name
    char subject[100];
    std::cout << "Input the subject name: ";
    std::cin.getline(subject, 100);
    std::cout << std::endl;

    //creating a Subject object
    Subject s(subject);

    //Getting the name of the subject with GetName() function
    char* subjectName = s.GetName();

    std::cout << "Subject name: ";

    int i = 0;
    //outputing the name
    while((*(subjectName + i)) != '\0') {
        std::cout << *(subjectName + i);
        ++i;
    }
    std::cout << std::endl;
}