#! /usr/bin/python3.5
i=1
while(i<=15):
	tres=(i/3);cinco=(i/5)
	a = 0;r = ''
	if(str(tres).split('.')[1] == '0'): a = 1;r = "fizz \n"
	if(str(cinco).split('.')[1] == '0'):
		if(a==1):r ="fizz buzz \n"
		else:r = "buzz \n"
	else:
		if(a == 0): print(i)
	i=i+1;print(r)