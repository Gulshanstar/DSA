mat_180 = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]
r_180=len(mat_180)
c_180=len(mat_180[0])
for i in range(r_180):
    start=0
    end=r_180-1
    while(start<end):
        mat_180[i][start], mat_180[i][end] = mat_180[i][end], mat_180[i][start]
print(mat_180)