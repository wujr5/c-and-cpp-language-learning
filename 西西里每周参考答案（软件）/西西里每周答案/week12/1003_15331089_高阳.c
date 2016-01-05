int smallestElement(int* array, int size){
    int i, min = array[size - 1];
    for(i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}                                 
