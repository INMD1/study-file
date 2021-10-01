import torch

ts = torch.FloatTensor([[1,2],[3,4]])
print(ts.mean())

print(ts.mean(dim=1 ))