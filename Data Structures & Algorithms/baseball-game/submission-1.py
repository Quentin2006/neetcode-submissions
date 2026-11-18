class Solution:
    def calPoints(self, operations: List[str]) -> int:
        stack = []
        for op in operations:
            if op == "+":
                a, b = stack[len(stack)-1], stack[len(stack)-2]
                stack.append(a+b)
            elif op == "D":
                a = stack[len(stack)-1]
                stack.append(2*a)
            elif op == "C":
                stack.pop()
            else:
                stack.append(int(op))
                
        return sum(stack)