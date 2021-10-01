num=int(input("enter a number"));
n=1234
n=num;
sum=0;

while(num>0):
	p=num%10;
	sum=sum+p;
	num=num//10;
print("sum of digits of ",n," is ",sum);

