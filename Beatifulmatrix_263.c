//Before see this solution...I want to show you some hint, that you can implement this solution.....
## First of all you need to catch the 1, where it is?
## Than you should think----which index you want to move this 1.(obviously index 2(row-2 and col-2) as description.)


//May be you can do it now if you think logically to take more time for solution this problem.






#include <stdio.h>

int main(){
	int matrix[25][25], row, col, cnt = 0, i, j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] == 1){
				row = i;
				col = j;
			}
		}
	}
	if(row < 2){
		for(i = row + 1; i <= 2; i++){
			cnt++;
		}
	}
	if(row > 2){
		for(i = row - 1; i >= 2; i--){
			cnt++;
		}
	}
	
	if(col > 2){
		for(j = col - 1; j >= 2; j--){
			cnt++;
		}
	}
	if(col < 2){
		for(i = col + 1; i <= 2; i++){
			cnt++;
		}
	}
	
	
	
	printf("%d\n", cnt);
}


