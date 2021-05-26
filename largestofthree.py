num1=int(input('Enter 1st number : '))
num2=int(input('Enter 2nd number : '))
num3=int(input('Enter 3rd number : '))


def check():
    largest=num1
    if largest < num2:
        if num2 > num3:
            largest=num2
        else:
            largest=num3
    elif largest < num3:
        if num3 > num2:
            largest=num3
        else:
            largest=num2
    else:
        largest=num1
    print('The largest number is ' + str(largest))

if (num1==num2 and num1==num3):
    print('All three numbers are equal ')

else:
    check()
