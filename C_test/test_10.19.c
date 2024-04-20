#include <stdio.h>
/*
int main(){
	int  id = 0;
	float language = 0.0f, mathe = 0.0f, English = 0.0f;
	scanf("%d;%f,%f,%f", &id, &language, &mathe, &English);//输入
  
	printf("The each subject score of NO. %d is\n%.2f,%.2f,%.2f.", id, language, mathe, English);//输出
	
	return 0;
}
  
int main(){
	int n = printf("“Hello world!”");//赋值n输出
	
	printf("\n%d", n);//输出
		
	return 0;
	
}
  
int main(){
	printf("printf(\"Holle world!\\n\");\n");//输出
	
	printf("cout<<\"Holle world!\">> endl;");//输出
	
	return 0;
}

int main(){//分支比大小方法1
	int a = 0, b =0, c = 0, d = 0;//初始化
	
	scanf("%d %d %d %d", &a, &b, &c, &d);//输入
	
	printf("输入：%d %d %d %d\n", a, b, c, d);//输出
	int max1 = 0, max2 = 0, max3 = 0;//初始化比较数
	if(a > b)                       //比较大小
		max1 = a;
	else
		max1 = b;
	
	
	if(c > d)
		max2 = c;
	else
		max2 = d;	
	
	
	if(max1 > max2)
		max3 = max1;
	else
		max3 = max2;	
	
	
	printf("输出：%d\n",max3);//输出
	
	return 0;
}
  
int main(){//循环比大小方法2
	int arr[4] = {0};
	int max = arr[0];
	
	for(int i = 0; i < 4; i++){
		scanf("%d",&arr[i]);
		
		if(arr[i] > max){//比较最大值
			max = arr[i];	
		}
	}
	printf("输入：");
	for(int i = 0; i < 4; i++){
		printf("%d ", arr[i]);
	}

	printf("\n输出：%d\n",max);//输出
}*/

int main(){
	float height = 0.0f;
	float weight = 0.0f;
	
	printf("输入:");
	scanf("%f %f", &weight, &height);
	
	float BMI = weight/(height/100.0)/(height/100.0);
	printf("输出:%.2f\n", BMI);
	
}
