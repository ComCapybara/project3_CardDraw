#include <stdio.h>

int main() {
	char op;
	float val = 0;
	while(1){
		int usrInput = scanf(" %c %f", &op, &val);
		if(usrInput == EOF) break;
		switch (op) {
		case 97: // a
			val += val;
		case 115: // s
			val -= val;
		case 109: // m
			val *= val;
		case 100: // d
			val /= val;
		}
	}
}
