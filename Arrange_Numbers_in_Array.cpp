void arrange(int *arr, int n)
{
    int left = 0;
    int right = n-1;
    int count = 1;
    while( left <= right){
        if(count % 2 == 1){
            arr[left] = count;
            count++;
            left++;
        }
        else{
          arr[right] = count;
          count++;
          right--;
        }
    }
}
