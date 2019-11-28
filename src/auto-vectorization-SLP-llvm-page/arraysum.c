#include <stdio.h>

void foo(int a1, int a2, int b1, int b2, int *A) {
  A[0] = a1*(a1 + b1)/b1 + 50*b1/a1;
  A[1] = a2*(a2 + b2)/b2 + 50*b2/a2;
}

int main(int argc, char* argv[]) {
				int A[100];
				foo(1,1,2,2,A);
}
