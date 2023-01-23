void rotate(int *input, int d, int n)
{
    int temp[n];int k =0;
    for(int i=d;i<n;i++){
        temp[k] =  input[i];
        k++;
    }
    for(int i =0;i<d;i++){
        temp[k] = input[i];
        k++;
    }
    for(int i=0;i<n;i++){
        input[i]= temp[i];
    }
}
