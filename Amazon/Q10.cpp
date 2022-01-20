int partition(char stuff[],int l,int r){

        int index = l;

        for(int i=l;i<r;i++){

            if(stuff[i]<=stuff[r]){

                swap(stuff[index],stuff[i]);
                index++;
            }

        }

        swap(stuff[index],stuff[r]);

        return index;
    }

    void qsort(char stuff[],int l,int r){

        int p;
        if(l<r){

            p=partition(stuff,l,r);

            qsort(stuff,l,p-1);
            qsort(stuff,p+1,r);

        }

    }

void matchPairs(char nuts[], char bolts[], int n) {
    
    qsort(nuts,0,n-1);
    qsort(bolts,0,n-1);

}