int sansaXor(vector<int> arr) {
    int n = arr.size();
    int result = 0;

    // If the number of elements is odd, XOR all elements
    if (n % 2 == 1) {
        for (int i = 0; i < n; i += 2) {
            result ^= arr[i];
        }
    }

    return result;
}