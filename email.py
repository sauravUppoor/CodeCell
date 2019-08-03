def check(email):
	id = email.split('@')
	newEmail = ""
	id[0] = id[0].replace('.', '')
	if(id[0].find('+') != -1):
		if(not ((id[0][0: id[0].find('#')] + id[1]) in unique)):
			unique.append(id[0][0: id[0].find('+')] + id[1])
			
	else:

		if(not ((id[0]+ id[1]) in unique)):
			unique.append(id[0]+ id[1])
			
	

ID = input()
Email = ID.split(" ")
unique = []

for i in Email:
	print(i)
	check(i)
print(len(unique))	
	
