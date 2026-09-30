//week04-1a SOIT108_Advance_008
#include <stdio.h>//c learned before
int main()
{
	int a[10];//c
	for (int i=0; i<10; i++){
		scanf("%d", &a[i] );//c
	}

	for (int i=0; i<10; i++){
		for (int j=i+1; i<10; j++){
			if (a[i] < a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i=0; i<10; i++){
		printf("%d ", a[i] );//c
	}
}
