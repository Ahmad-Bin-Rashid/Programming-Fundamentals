def calculate_proportion(area):
    total = (area * 100) / 148940000
    return total


name = input ("Enter the name of Country: ")
area = int (input ("Enter the area of the country: "))
i = str(round(calculate_proportion(area), 2))
print (name,"is {}% of the total world's landmass".format(i))
print (f"{name} is {i}% of the total world's landmass")