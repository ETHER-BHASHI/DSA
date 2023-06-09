string gamingArray(vector<int> arr) {
    int n = arr.size();
    int maxIndex = 0;
    int turns = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
            turns++;
        }
    }

    if (turns % 2 == 0) {
        return "BOB";
    } else {
        return "ANDY";
    }
}