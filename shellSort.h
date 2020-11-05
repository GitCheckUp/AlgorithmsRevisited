void shellSort(int arr[], int n) 
{ 
	int gap;
	for (gap = n/2; gap > 0; gap/= 2){
		int i;
		for (i = gap; i < n; i += 1){
			int temp = arr[i];
			int j;
			
			for(j=i; j >= gap && arr[j - gap] > temp; j -= gap){
				arr[j] = arr[j - gap];
			}
			arr[j] = temp;
		}
	}
	return;
} 
