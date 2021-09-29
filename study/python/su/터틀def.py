import turtle # 터틀 그래픽 모듈을 포함한다.
def square(length):
    for i in range(4):
     turtle.forward(length)
     turtle.left(90)

def drawit(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.begin_fill()
    turtle.color("green")
    square(50)
    turtle.end_fill()
    
s = turtle.Screen() # 그림이 그려지는 화면을 얻음
s.onscreenclick(drawit) # 마우스 클릭 이벤트 처리 함수를 등록
