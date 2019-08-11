def reverse(string):
	return string[::-1];
	
def bitAND(a, b):
	if(len(a) <= len(b)):
		k = len(a);
	else:
		k = len(b);
	
	arr = [];
	for i in range(k,0,-1):
		arr.append(int(a[len(a) - i:len(a) - i+1]) & int(b[len(b) - i:len(b) - i+1 ]));
		
	return (arr);

n = int(input());
total = 0;

arr = list(map(int, input().strip().split()));

	

for i in range(0, n):

	for j in range(i+1, n):

		a = arr[i];
		b = arr[j];
		
		binA = (bin(a))[2:];
		binB = (bin(b))[2:];
		#print(binA + " " + binB);
		list = bitAND(binA, binB);
		sum = 0;
		for i in list:
			sum = sum*10 + list[i-1];
		
		total += (int(str(sum), 2));
print(total%101);
