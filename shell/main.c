#include<stdio.h>

int shell_sort(int *data, int size);

int main(void)
{
	int data[10] = {9, 2, 3, 7, 4, 5, 0, 1, 6, 8};
	int size = 0;

	size = sizeof(data)/sizeof(int);

	printf("shell_sort size = %d, data = %p\n",size, data);
	printf("9 2 3 7 4 5 0 1 6 8\n");
	shell_sort(data, size);

	return 0;
}


int shell_sort(int *data, int size)
{
	int i = 0, j = 0, k = 0, z = 0;
	int temp = 0;
	int incre = 0;
	
	printf("data= %p\n", data);

	for(incre = size/2; incre > 0; incre /= 2) {
		printf("incre = %d\n",incre);
		for(i = 0; i < incre; i++) {	
			for(j = i + incre; j < size; j+=incre) {
				temp = data[j];
				k = j - incre;
				while(k >=0 && data[k] > temp) {
					data[k + incre] = data[k];
					k -= incre;
				}		
				data[k + incre] = temp;		
			}	
			//debug
			for(z = 0; z < size; z++) {
				printf("%d ",data[z]);
			}
			printf("\n");	
			
		}
	}
}
