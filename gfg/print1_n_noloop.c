void printNos(int N)
{
    //Your code here
    if (N > 0) {
        printNos(N - 1);
        printf("%d ", N);
    }
}
