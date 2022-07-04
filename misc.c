/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

// int fib_recursion(int n);
// int fib(int n);
int linear_search(int x, int arr[], int n);
void all_occurances(int x, int arr[], int n);
int binary_search(int x, int arr[], int n, int l, int u);
int mid_index(int l, int u);

int main() {
    // 	int n=10;
    // 	int nth = fib_recursion(n);
    // 	int nth_ = fib(n);
    
    // 	printf("%d th fiboncci element is %d.\n", n, nth);
    // 	printf("%d th fiboncci element is %d.\n", n, nth_);
    // int a[8] = {1,3,2,5,7,5,8,10};
    // int index = linear_search(10, a, 8);
    // if (index==-1) {
    //     printf("Element not found!\n");
    // }else {
    //     printf("Element %d is present at %d th index.\n", 10, index);
    // }
    // all_occurances(5, a, 8);
    int n=10;
    int arr[] = {1,2,4,7,9,11,23,45,356,678};
    int x = 2;
    int index = binary_search(x, arr, n, 0, n-1);
    printf("%d\n", index);
	return 0;

}

// int fib(int n) {
//           if (n==0) {
// 		return 0;
// 	} else if (n==1) {
// 		return 0;
// 	} else if (n==2) {
// 		return 1;
// 	}
// 	int a=0, b=1;
// 	int c = 0;

// 	for (int i=3;i<n; ++i) {

//                     c = a+b;
//                     a = c-a;
//                     b=c;
// 	}
// 	return a+b;

// }
// int fib_recursion(int n) {
// 	if (n==0) {
// 		return 0;
// 	} else if (n==1) {
// 		return 0;
// 	} else if (n==2) {
// 		return 1;
// 	}
// 	return fib_recursion(n-1) + fib_recursion(n-2);
// }

int mid_index(int l, int u) {
    return (l+u)/2;
}

int binary_search(int x, int arr[], int n, int l, int u) {
    if (u==-1) {
        u = n-1;
    }
    int mid = mid_index(l, u); 
    printf("Checking %d\n", arr[mid]);
    if (arr[mid] < x) {
        binary_search(x, arr, n, mid+1, u);
    } else if (arr[mid] > x) {
        binary_search(x, arr, n, l, mid-1);
    }
    if (arr[mid] == x) {
        printf("Index %d\n", mid);
        return mid;
    }
    return mid;
}

int linear_search(int x, int arr[], int n) {
    for (int i=0; i<n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
    
}
void all_occurances(int x, int arr[], int n) {
    for (int i=0; i<n; i++) {
        if (arr[i] == x) {
            printf("%d, ", i);
        }
    }
    printf("\n");
}
