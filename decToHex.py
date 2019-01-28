"""
Function taking a single integer input and converting it to hexadecimal
returns a string containing the hex value
"""

def decToHex(decimal):
	hex = ''
	hexExtra = {10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F'}
	while decimal > 0:
		if (decimal % 16) > 9:
			hex = hexExtra[decimal % 16] + hex
		else:
			hex = str(decimal % 16) + hex
		decimal = int(decimal / 16)
	return hex
  
  dec = int(input("Insert a whole number: "))
