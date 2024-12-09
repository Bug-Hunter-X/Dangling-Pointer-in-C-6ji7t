int main() { 
    int a = 10;
    int *ptr = &a; 
    *ptr = 20; 
    printf("%d\n", a); // Output: 20
    int b = 30;
    ptr = &b; 
    *ptr = 40;
    printf("%d\n", a); // Output: 20, Expected: 40
    return 0; 
}