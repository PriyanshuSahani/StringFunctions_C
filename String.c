#include "String.h"

int str_len(char* s) {
    int i=0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}

char* str_cpy(char *s1, char *s2) {// Overrites conent of s1
    int i=0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        s1[i] = s2[i];
        ++i;
    }
    //s1[i] = '\0';
    return s1;
}

int str_comp(char* s1, char *s2) {
    int i=0;
    while(s1[i]!= '\0' || s2[i] != '\0') {
        if (s1[i] == '\0' || s1[i]<s2[i]) {
            return -1;
        }
        if (s2[i] == '\0' || s1[i]>s2[i]) {
            return 1;
        }
        ++i;
    }
    return 0;
}

char* str_cat(char *s1, char *s2) {
    int n1 = str_len(s1);
    int n2 = str_len(s2);
    
    for (int i=0; i<n2; ++i) {
        s1[n1+i] = s2[i];
    }
    
    return &s1[0];

}

void to_upper(char* s) {
    char *p = s;
    while(*p != '\0') {
        if (*p>=97 && *p<=122) {
            *p -= 32;
        }
        ++p;
    }
}

void to_lower(char *s) {
    char *p = s;
    while (*p != '\0') {
        if (*p>=65 && *p<=90) {
            *p += 32;
        }
        ++p;
    }
}