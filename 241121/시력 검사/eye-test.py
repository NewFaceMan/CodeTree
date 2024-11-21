leftEyeVision = float(input())
rightEyeVision = float(input())

if leftEyeVision >= 1.0 and rightEyeVision >= 1.0 :
    print("High")
elif leftEyeVision >= 0.5 and rightEyeVision >= 0.5 :
    print("Middle")
else :
    print("Low")
