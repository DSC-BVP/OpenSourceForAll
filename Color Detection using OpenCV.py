#color detection of red and green color in image
#necessary library

import cv2  
import numpy as np 

green = np.uint8([[[0, 255, 0]]])  #green color
hsvGreen = cv2.cvtColor(green, cv2.COLOR_BGR2HSV) #hsv value of green color 
print(hsvGreen) 

lowerLimit = hsvGreen[0][0][0] - 10, 100, 100  # range of green color lower limit and upper limit
upperLimit = hsvGreen[0][0][0] + 10, 255, 255

print(upperLimit)
print(lowerLimit)

red = np.uint8([[[0, 0, 255]]]) #red color
hsvred = cv2.cvtColor(red, cv2.COLOR_BGR2HSV) #hsv value of red color
print(hsvred)

lower = hsvred[0][0][0] - 10, 100, 100 # range of red color lower limit and upper limit
upper = hsvred[0][0][0] + 10, 255, 255

print(upper)
print(lower)

image = cv2.imread(r'your file image path') #load your image
hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV) #convert the image into hsv

lg = np.array(lowerLimit) #range of green color
ug = np.array(upperLimit)

green_mask = cv2.inRange(hsv, lg, ug) #green masked image
cv2.imshow('green', green_mask) #show the image 

lr = np.array(lower) #range of red color
ur = np.array(upper)

red_mask = cv2.inRange(hsv, lr, ur) #red masked image
cv2.imshow('red', red_mask)  #show the image 

cv2.waitKey(0)
cv2.destroyAllWindows()
