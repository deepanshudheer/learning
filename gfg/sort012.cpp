void sort012(int a[], int n)
    {
        // code here 
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high) {
            if (a[mid] == 0){
                mid++;
            } else if (a[low] > a[mid]) {
                swap(a[low], a[mid]);
                low++;
                mid++;
            } else {
                swap(a[high], a[mid]);
                high--;
            }
        }
    }
