










def calculate(date):
    date_sep = []
    date_sep = date.split('/')
    sum = (int(date_sep[2]) - 1)*365 + (int(date_sep[1]) - 1)*31 + int(date_sep[0])-1
    return sum % 7
dates = input()
sum = calculate(dates)
print(sum)
