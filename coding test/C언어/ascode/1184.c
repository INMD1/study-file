int main() {
	int a;
	int b = 0 , c = 0, d = 0; // 500 100 50
	scanf("%d", &a);
	b = a / 500;
	c = (a - 500 * b) / 100;
	d = (a - (100 * c) - (500 * b)) / 50;
	printf("500:%d 100:%d 50:%d", b, c, d);
    return 0;
}