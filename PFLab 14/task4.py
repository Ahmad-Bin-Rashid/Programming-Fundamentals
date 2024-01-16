def number_length (num):
    count = 0
    for i in num:
        count += 1
    return count

num = int ( input ("Enter the number: "))
print (number_length(str(num)))