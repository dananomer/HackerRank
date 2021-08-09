void miniMaxSum(int arr_count, int* arr) {
    long max = arr[0];
    long min = arr[0];
    long sum = 0;
    
    for(int i=0;i<arr_count;i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    
    printf("%ld %ld",sum - max,sum - min);
}
