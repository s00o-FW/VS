
#include "..\inc\DataAlignment.h"

void SelectSort(int *data, int size)
{
	int i,j,min,idx,temp;
	
	for(i=0; i<size-1;i++) {
		min = 9999;
		for(j=i; j<size; j++) {
			if(min>data[j]) {
				idx = j;
				min = data[j];
			} else ;
		}

		temp = data[idx];
		data[idx] = data[i];
		data[i] = temp;
	}

	for(i=0;i<size;i++)
		printf("%d ", data[i]);
}

void InsertSort(int *data, int size)
{
	int i,j,searchVal;

	for(i=1;i<size;i++){
		searchVal=data[i];
		for(j=i;j>0;j--) {
			if(searchVal<data[j-1]) {
				data[j] = data[j-1];
				data[j-1] = searchVal;
			}
		}
	}

	for(i=0;i<size;i++)
		printf("%d ", data[i]);
}

void BubbleSort(int *data, int size)
{
	int i,j,temp;

	for(i=0; i<size-1;i++) {
		for(j=0; j<size-1-i; j++) {
			if(data[j]>data[j+1]) {
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}

	for(i=0;i<size;i++)
		printf("%d ", data[i]);
}

void QuickSort(int start, int end, int *data)
{

}

void BinarySearch(void)
{

}
