def total_overs(num):
    overs = num // 6
    balls = num % 6
    return overs, balls

num = int(input("Enter the number of balls: "))
over, balls = total_overs(num)
print (f"{over}.{balls}")