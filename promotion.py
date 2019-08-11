n = int(input());
total = 0;
arr = list(map(int, input().strip().split()));
for i in range(0, n):
	for j in range(i+1, n):
		a = arr[i];
		b = arr[j];
		sum = 0;
		sum += a & b;
		total += sum;
print(total%101);
