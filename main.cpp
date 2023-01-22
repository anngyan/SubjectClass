#include <iostream>
#include "Subject.h"

int main() {

    char subject[100];
    std::cout << "Input the subject name: ";
    std::cin.getline(subject, 100);
    std::cout << std::endl;

    Subject s(subject);

    char* subjectName = s.GetName();

    std::cout << "Subject name: ";

    int i = 0;

    while((*(subjectName + i)) != '\0') {
        std::cout << *(subjectName + i);
        ++i;
    }
    std::cout << std::endl;
}