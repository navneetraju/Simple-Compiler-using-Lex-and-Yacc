.text
MOV R0,=t1
MOV R1,[R0]
MOV R2,=t2
MOV R3,[R2]
MOV R4,=t2
MOV R5,[R4]
ADD R5,R1,R3
STR R5, [R4]
MOV R6,=t1
MOV R7,[R6]
MOV R8,=t2
MOV R9,[R8]
CMP R7,R9
BGE L0:
MOV R10,=t3
MOV R11,[R10]
MOV R12,=t3
MOV R0,[R12]
ADD R0,#11,R1
STR R0, [R12]
L0:
MOV R1,=t3
MOV R2,[R1]
MOV R3,=t3
MOV R4,[R3]
SUBS R4,#2,R1
STR R4, [R3]
SWI 0x011
.DATA
t0: .WORD 1
t1: .WORD 2

