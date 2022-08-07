def solution(X, A):
    steps = X
    bitmap = [False]*(steps+1)
    for i in range(len(A)):
        if not bitmap[A[i]]:
            bitmap[A[i]] = True
            steps -= 1
            if steps == 0:
                return i

    return -1

print(solution(5, [1, 3, 1, 4, 2, 3, 5, 4]))