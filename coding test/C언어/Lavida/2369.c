#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct data
{
	char arr[20];
	int price;
};

int main()
{
	struct data list[10];
	int a, b, c, num;
	int ccunt = 0, addcount = 0;
	char oword[25];

	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		scanf("%s", &list[i].arr);
		scanf("%d", &list[i].price);
	}

	for (int i = 0; i < b; i++){
		while (1){
			int count = 0;
			scanf("%s", &oword);
			if (oword[0] == '.'){
				printf("%d\n", ccunt + addcount);
				ccunt = 0, addcount = 0;
				break;
			}else{
				num = strlen(oword);
				ccunt += (num * 2);
				for (c = 0; c < a; c++){
					if (num == strlen(list[c].arr)){
						for (int i = 0; i < num; i++){
							if (tolower(oword[i]) == tolower(list[c].arr[i])){
								count++;
							}
						}
						if (count == num){
							addcount += list[c].price;
							ccunt -= (num * 2);
						}
						count = 0;
					}
				}
			}
		}
	}
	return 0;
}