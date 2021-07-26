def testcase(name):
    print("저의 이름은:"+name)

testcase("Ubuntu")

def calculate_area (radius):
    global area
    area = 3.14 * radius ** 2
    return area

area = 0
r = float(input("원의 반지름: "))
calculate_area(r)
print(area)

def greet(nmae, msg="병일 없죠?"):
    print("인녕", nmae + "," + msg)

greet("영희")