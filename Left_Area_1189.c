#include <stdio.h>int main(){	double m[12][12];	int row, col, count = 0;	double sum = 0, average;	char O;	scanf("%c ", &O);	for(row = 0; row < 12; row++){		for(col = 0; col < 12; col++){			scanf("%lf", &m[row][col]);		}	}	int row_increment = 6, row_decrement = 5;	for(col = 7; col <= 11; col++){		for(row = row_decrement; row <= row_increment; row++){			sum += m[row][col];			count++;		}		row_increment++;		row_decrement--;	}	average = sum / count;	if(O == 'S'){		printf("%0.1lf\n", sum);	}	if(O == 'M'){		printf("%0.1lf\n", average);	}	return 0;	}