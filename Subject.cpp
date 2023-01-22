#include <iostream>
#include "Subject.h"

Subject::Subject(char n[]) {
    int i = 0;
    while(n[i] != '\0') {
        name[i] = n[i];
        ++i;
    }
}

char* Subject::GetName() {
    int i = 0;
    static char nameCopy[100];
    while(name[i] != '\0') {
        nameCopy[i] = name[i];
        ++i;
    }
    return nameCopy;
}