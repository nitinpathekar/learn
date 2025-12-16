import cv2

img=cv2.imread("bgr.jpg")

# cv2.imshow("window image", img)
cv2.waitKey(0)

cv2.imwrite("output.jpg",img)

print(img.shape)
print(img.dtype)
print(img.size)


img_rgb= cv2.cvtColor(img,cv2.COLOR_BGR2RGB)
cv2.imwrite("outputRGB.jpg",img_rgb)
img_GRAY= cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
cv2.imwrite("outputGRAY.jpg",img_GRAY)


resized = cv2.resize(img, (300, 300))           # width, height
bigger  = cv2.resize(img, None, fx=2, fy=2)     # scale factors

cv2.imshow("window",resized)
cv2.imshow("window",bigger)


crop=img[50:200,50:200]

cv2.imshow("window", crop)
cv2.waitKey(0)
cv2.destroyAllWindows()