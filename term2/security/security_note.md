# Lecture 1 buffer overflow

Stack pointer(SP)指向栈顶，低地址

栈底固定，高地址

栈包含logical stack frame, which r pushed when calling a func and dropped when returning（logical stack frame包含	func的参数，还有当前函数的变量，还有after this call的指令指针IP，常用ret表示）

Frame pointer(FP)指向frame 内固定地址

root 密码xxh0227