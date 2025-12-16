#geometry transformation
import cv2

img= cv2.imread("bgr.jpg")
resized= cv2.resize(img,(300,300))

cv2.imshow(resized)
cv2.destroyAllWindows(0)
cv2.waitKey(0)