def oddish_or_evenish(num):
    result = 0
    for i in str(num):
        result += int(i)
    if result % 2 == 1:
        return "Oddish"
    elif result % 2 == 0:
        return "Evenish"
    
num = int ( input ("Enter the number: "))
print (oddish_or_evenish(num))