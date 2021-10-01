num=2  
for a in range (1,6):  
    print  (num * a)

print('------------')
sum=0  
for n in range(1,11):  
    sum+=n  
print (sum)  


print('------------')
for letter in 'Python':     
   if letter == 'h':
      break
   print ('Current Letter :', letter)
  

print('------------')
var = 10                    
while var > 0:              
   print ('Current variable value :', var)
   var = var -1
   if var == 5:
      break

print('------------')  
for letter in 'Python':     
   if letter == 'h':
      continue
   print ('Current Letter :', letter)

   
print('------------')
var = 10                    
while var > 0:              
   var = var -1
   if var == 5:
      continue
   print ('Current variable value :', var)
