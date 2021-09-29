import turtle

t = turtle.Turtle()
t.width(3)
t.shape("turtle")
t.shapesize(3,3)

while True:
    command = input("명령어를 입력해주세요: ")
    if command == "l":
        t.left(90)
        t.forward(100)
    if command == "r":
        t.right(90)
        t.forward(100)
