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
	while (1) {
		int res = scanf(" %c %f ", &op, &val);
		// if(usrInput == EOF) break;
		if (res != EOF) {
			if ((op == 'g') || (op == 'r')) {
				switch (op) {
				case 'g': // g - 103
					printf("%c %f\n", chararr[(int)val], fltarr[(int)val]);
					break;
				case 'r': // r - 114
					rscore = 0.0;
					for(int i = val; i < arrsize; i++) {
						char rop = chararr[i];
						float rval = fltarr[i];
						switch (rop) {
						case 'a': // a - 97
							rscore += rval;
							break;
						case 's': // s - 115
							rscore -= rval;
							break;
						case 'm': // m - 109
							rscore *= rval;
							break;
						case 'd': // d - 100
							rscore /= rval;
							break;
						default:
							break;
						}
					}
					printf("%f\n", rscore);
					break;
				}
			} else if (op != 10) {
				if (index >= arrsize) {
					chararr = realloc(chararr, (sizeof(char) * arrsize * 2));
					fltarr = realloc(fltarr, (sizeof(float) * arrsize * 2));
					arrsize *= 2;
				}
				chararr[index] = op;
				fltarr[index] = val;
				index++;
			}
		} else break;
	}
	free(chararr);
	free(fltarr);
	return 0;
}
