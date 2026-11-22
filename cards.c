#include <stdio.h>
#include <stdlib.h>

int main() {
	char op = 0;
	float val = 0.0;
	int index = 0;
	float rscore = 0.0;
	int arrsize = 8;
	char* chararr = (char*)malloc(sizeof(char) * 8);
	float* fltarr = (float*)malloc(sizeof(float) * 8);
	printf("\n& \tentering while loop\n");
	while (1) {
		int res = scanf("%c %f", &op, &val);
		// if(usrInput == EOF) break;
		if (res != EOF) {
			if ((op == 'g') || (op == 'r')) {
				switch (op) {
				case 'g': // g - 103
					printf("%c %f\n", chararr[(int)val], fltarr[(int)val]);
					break;
				case 'r': // r - 114
					rscore = 0.0;
					printf("| & \tentering for loop\n");
					for(int i = val; i < arrsize; i++) {
						if (i >= arrsize) {
							chararr = realloc(chararr, (sizeof(char) * arrsize * 2));
							fltarr = realloc(fltarr, (sizeof(float) * arrsize * 2));
							arrsize *= 2;
						}
						char rop = chararr[i];
						float rval = fltarr[i];
						printf("| | &\tentering switch :\n");
						switch (rop) {
						case 'a': // a - 97
							rscore += rval;
							printf("| | |\ta\n");
							break;
						case 's': // s - 115
							rscore -= rval;
							printf("| | |\ts\n");
							break;
						case 'm': // m - 109
							rscore *= rval;
							printf("| | |\tm\n");
							break;
						case 'd': // d - 100
							rscore /= rval;
							printf("| | |\td\n");
							break;
						default:
							printf("| | |\tdefault\n");
							break;
						}
						printf("| | &\texited switch\n| |\n");
					}
					printf("| & \texiting for loop\n|\n");
					printf("| \trscore : %f\n", rscore);
					break;
				}
			} else if (op != 10) {
				printf("| & \tAdding to arrays\n");
				chararr[index] = op;
				printf("| | \tadded to chararr :\t%d\n", (int)op);
				fltarr[index] = val;
				printf("| | \tadded to fltarr  :\t%f\n", val);
				printf("| | \tindex++\n");
				index++;
				printf("| & \t Finished adding to arrays\n");
				printf("| \tlooping\n");
			}
		} else break;
	}
	printf("& \tfinished loop\n");
	for (int i = 0; i < arrsize; i++) {
		printf("%c ", chararr[i]);
	}
	printf("\n");
	for (int i = 0; i < arrsize; i++) {
		printf("%f ", fltarr[i]);
	}
	free(chararr);
	free(fltarr);
	return 0;
}
