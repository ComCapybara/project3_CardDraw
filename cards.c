#include <stdio.h>
#include <stdlib.h>

int main() {
	char op = 0;
	float val = 0.0;
	float score = 0.0;
	int index = 0;
	char* chararr = (char*)malloc(8);
	float* fltarr = (float*)malloc(sizeof(float) * 8);
	while (1) {
		int res = scanf("%c %f", &op, &val);
		// if(usrInput == EOF) break;
		if (res != EOF) {
			switch (op) {
			case 'g': // g - 103
				printf("%c %f", chararr[(int)val], fltarr[(int)val]);
				break;
			case 'r': // r - 114
				break;
			case 'a': // a - 97
				score += val;
				printf("%f\n", score);
				chararr[index] = op;
				fltarr[index] = val;
				index++;
				break;
			case 's': // s - 115
				score -= val;
				printf("%f\n", score);
				chararr[index] = op;
				fltarr[index] = val;
				index++;
				break;
			case 'm': // m - 109
				score *= val;
				printf("%f\n", score);
				chararr[index] = op;
				fltarr[index] = val;
				index++;
				break;
			case 'd': // d - 100
				score /= val;
				printf("%f\n", score);
				chararr[index] = op;
				fltarr[index] = val;
				index++;
				break;
			default:
				break;
			}
		} else break;
	}
	free(chararr);
	free(fltarr);
	return 0;
}
