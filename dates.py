dates=["02/01/1","28/02/100","16/05/1000","03/08/2019","31/02/2999",
"17/05/3400","31/01/9999999","31/12/999999999999"]
def calculate(date):
    date_sep = []
    date_sep = date.split('/')
    sum = (int(date_sep[2]) - 1)*365 + (int(date_sep[1]) - 1)*31 + int(date_sep[0])-1
    return sum % 7
sum=0
for i in dates:
    sum += calculate(i)
print(sum)