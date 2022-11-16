void insertionSortImparPar(int* v, int n){
    int j, key;                             
    for(int i = 1; i < n; i++){             
        key = v[i];                         
        j =  i -1;                           
        while(j >= 0){                       
            if(key % 2 != 0 && v[j] % 2 == 0){
                v[j+1] = v[j];
                j--;
                v[j+1] = key;

            }
            else if(key % 2 == 0 && v[j] % 2 ==0){
                if(key > v[j]){
                    v[j+1] = v[j];
                    j--;
                    v[j+1] = key;
                }else{
                    j--;
                }
            }
            else if(key % 2 != 0 && v[j] % 2 !=0){
                if(key < v[j]){
                    v[j+1] = v[j];
                    j--;
                    v[j+1] = key;
                }else{
                    j--;
                }
            }else{
                j--;
            }
        }
    }
}