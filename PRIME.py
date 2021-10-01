# prime or not
num=int(input("Enter a number"))
n=1
count=0
while (n<=num):
       if((num%n)==0):
           count=count+1
       n=n+1
	      
if(count==2):
	print ('prime',num)
else:
    print (' not prime',num)
