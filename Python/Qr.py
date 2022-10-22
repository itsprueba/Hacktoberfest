import cv2
import numpy as np
from pyzbar.pyzbar import decode
Qr={}
sort_key={}
sort_dict={}
img=cv2.imread("V:/eYentr@/task-1/PB_Task1_Windows/Task1B/public_test_cases/qr_1.png")
data =decode(img)
for code in data:
	centre_x=int((code.polygon[0][0]+code.polygon[2][0])/2)
	centre_y=int((code.polygon[0][1]+code.polygon[2][1])/2)
	data=code.data.decode('utf-8')
	Qr[data]=[centre_x,centre_y]

sort_key = sorted(Qr.keys())
sort_dict = {key:Qr[key] for key in sort_key }
print(sort_dict) 