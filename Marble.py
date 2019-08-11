n = int(input())

active = 0

while(n != 0):
    if(n % 3 == 0):
         if(n > 1): 
             n -= 2;
         else: 
         	n -= 1;
         active = 1 - active;
    elif((n - 1) % 3 == 0):
         if(n > 2): 
         	n -= 3;
         else: 
         	n -= 1;
         active = 1 - active;
    elif((n - 2) % 3 == 0):
         if(n > 2): 
         	n -= 3;
         elif(n > 1):
         	n -= 2;
         else:
         	n -= 1;
         active = 1 - active;

if(active == 0):
	print(2);
else:
	print(1);
         	
