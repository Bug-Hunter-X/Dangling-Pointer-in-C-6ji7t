int main() { 
    int a = 10;
    int *ptr = &a; 
    *ptr = 20; 
    printf("%d\n", a); // Output: 20
    int b = 30; 
    int *ptr2 = &b; //Corrected: Create a new pointer to avoid dangling pointer
    *ptr2 = 40;
    printf("%d\n", a); // Output: 20
    printf("%d\n", b); //Output: 40
    return 0;
}