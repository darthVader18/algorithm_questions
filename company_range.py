distance = []
N = int(input("Enter no. of person :"))
dir_range = int(input("Enter range :"))
for i in range (0,N):
    dist = int (input())
    distance.append(dist)
print(distance)
for i in range(0,N):
    if abs(distance[i]) > dir_range:
     distance.pop(i)
print(distance)