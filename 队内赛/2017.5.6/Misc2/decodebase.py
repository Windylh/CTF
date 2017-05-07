# -*- coding: utf-8 -*-

import base64

a=''

for i in range (1,100):
    try:
    	a=base64.b16decode(a)
    except:
    	try:
    		a=base64.b32decode(a)
    	except:
    		a=base64.b64decode(a)
    if "flag" in a :
    	break	
print(a)