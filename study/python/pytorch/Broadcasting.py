import torch

m1 = torch.FloatTensor([[1,2],[3,4]])
m2 = torch.FloatTensor([[1],[2]])

print('shape of Matrix 1:', m1.shape)
print('shape of Matrix 2:', m2.shape)
print(m1.matmul(m2))

print("------------------------")

#평균
ts = torch.FloatTensor([1,2])
print(ts.mean())

print("------------------------")

print(m1*m2)

print(m1.mul(m2))
