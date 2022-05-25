'''def prime_or_not(num):
    """To check the number is prime or not."""
	for i in range(2,num):
		if (num % i) == 0:
			flag = True
			break

	if flag:
	    return("Not a prime")
	else:
	    return("Is a prime")
'''

def prime_or_not (num):
	flag = False
	for i in range(2,num):
		if (num % i) == 0:
			flag = True
			break
	if flag:
		print(f"{num} is not a prime number.")
	else:
		print(f"{num} is a prime number.")
while True:
	num = int(input("Enter the number:"))
	prime_or_not(num)
	inp = input("Continue?(Y/N)")
	if inp != "Y" and inp != "y" and inp != 'Yes':
		break



