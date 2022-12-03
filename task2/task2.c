#include <stdio.h>
#include <stdlib.h>

/* Functions declared here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program ();

int main (void) {
	int a = 6;
	int b = 3;
	int op_specified;
	int (*function_ptr[5])(int a, int b);

	/* Function pointer array initialized here */
	function_ptr[0] = add;
	function_ptr[1] = subtract;
	function_ptr[2] = multiply;
	function_ptr[3] = divide;
	function_ptr[4] = exit_program;
	
	printf("Operand 'a': %d | Operand 'b': %d\n", a, b);
	printf("Specify the operation to perform (0: add | 1: subtract | 2: multiply | 3: divide | 4: exit):\n");
	scanf("%d", &op_specified);
	printf("x = %d\n", (*function_ptr[op_specified])(a, b));
	
	return 0;
}

/* Functions defined here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
int exit_program () { 
  printf ("Come again soon!\n"); 
  exit(0);
	return 0;
}