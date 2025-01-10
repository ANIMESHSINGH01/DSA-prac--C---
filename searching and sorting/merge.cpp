void merge(vector<int> &arr, int n, int low, int mid, int high){

    vector<int> ans;

    int i=low;

    int j = mid+1;

    while(i<=mid && j<=high){

        if(arr[i] <= arr[j]){

            ans.push_back(arr[i]);

            i++;

        }

        else{

            ans.push_back(arr[j]);

            j++;

        }

    }

    while(i<=mid){

        ans.push_back(arr[i]);

        i++;

    }

    while(j<=high){

        ans.push_back(arr[j]);

        j++;

    }

 

    for(int i=low;i<=high;i++){

        arr[i] = ans[i-low];

    }

}

 

void ms(vector<int> &arr, int n, int low, int high){

    if(low==high){

        return;

    }

    int mid = (low+high)/2;

    ms(arr, n, low, mid);

    ms(arr, n, mid+1, high);

    merge(arr, n, low, mid, high);

}

 

void mergeSort(vector < int > & arr, int n) {

    ms(arr, n, 0, n-1);

}

