#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

char hex(int s) {
    switch (s) {
        case 10:
            return 'A';
            break;
        case 11:
            return 'B';
            break;
        case 12:
            return 'C';
            break;
        case 13:
            return 'D';
            break;
        case 14:
            return 'E';
            break;
        case 15:
            return 'F';
            break;
    }
}

int main() {
    int v[8];
    int x;
    scanf("%d", &x);


    if (x > 255 || x < 0) {
        return -1;
    }
    
    for (int i = 7; i >= 0; i--) {
        v[i] = x % 2;
        x /= 2;
    }
    
    int s1 = 0;
    int p = 3;
    for (int i = 0; i <= 3; i++) {
        if (v[i] == 1) {
            s1 += pow(2, p);
        }
        p--;
    }
    
    int s2 = 0;
    p = 3;
    for (int i = 4; i <= 7; i++) {
        if (v[i] == 1) {
            s2 += pow(2, p);
        }
        p--;
    }
    
    if (s1 >= 10) {
        printf("%c", hex(s1));
    }
    else {
        printf("%d", s1);
    }
    
    if (s2 >= 10) {
        printf("%c", hex(s2));
    }
    else {
        printf("%d", s2);
    }
}

// base-2
// int main() {
// 	int v[8];
// 	int x;
// 	scanf("%d", &x);
//  
//  if (x > 255 || x < 0) {
//      return -1;
//  }
// 
// 	for (int i = 7; i >= 0; i--) {
// 		v[i] = x % 2;
// 		x /= 2;
// 	}
// 
// 	for (int i = 0; i <= 7; i++) {
// 		printf("%d ", v[i]);
// 	}
// }
