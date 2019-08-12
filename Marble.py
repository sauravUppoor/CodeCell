n = [22, 45, 26, 75]
#taking the test cases as input directly
sum = 0
for i in n:
	if(i % 3 == 0):
		sum += 2
	elif((i - 1) % 3 == 0 or (i - 2) % 3 == 0):
		sum += 1
print(sum)   	
