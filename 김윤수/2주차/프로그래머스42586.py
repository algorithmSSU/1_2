import math
def solution(progresses, speeds):
    stack = []
    answer = []
    for progress, speed in zip(progresses, speeds):
        duringTime = math.ceil((100 - progress) / speed)
        stack.append(duringTime)
    top = stack[0]
    count = 0
    idx = 0
    answer.append(0)
    for val in stack:
        if top < val:
            top = val
            idx += 1
            answer.append(1)
        else:
            answer[idx] += 1
    return answer