.text
MOV R0,=i
MOV R1,[R0]
MOV R2,#1
MOV R3,=t0
MOV R4,[R3]
STR R4, [R3]
MOV R5,=t0
MOV R6,[R5]
MOV R7,=
MOV R8,[R7]
CMP R6,R8
MOV R9,=i
MOV R10,[R9]
MOV R11,#1
MOV R12,=t1
MOV R0,[R12]
ADD R0,R10,R11
STR R0, [R12]
MOV R1,=i
MOV R2,[R1]
MOV R3,#t1
STR R3, [R1]
goto L1
MOV R4,=i
MOV R5,[R4]
MOV R6,#1
MOV R7,=t2
MOV R8,[R7]
SUBS R8,R5,R6
STR R8, [R7]
MOV R9,=i
MOV R10,[R9]
MOV R11,#t2
STR R11, [R9]
MOV R12,=i
MOV R0,[R12]
MOV R1,#3
MOV R2,=t3
MOV R3,[R2]
ADD R3,R0,R1
STR R3, [R2]
MOV R4,=i
MOV R5,[R4]
MOV R6,#t3
STR R6, [R4]
MOV R7,=i
MOV R8,[R7]
MOV R9,#t3
STR R9, [R7]
MOV R10,=i
MOV R11,[R10]
MOV R12,#10
MOV R0,=t4
MOV R1,[R0]
STR R1, [R0]
MOV R2,=t4
MOV R3,[R2]
MOV R4,=
MOV R5,[R4]
CMP R3,R5
MOV R6,=i
MOV R7,[R6]
MOV R8,#2
MOV R9,=t5
MOV R10,[R9]
ADD R10,R7,R8
STR R10, [R9]
MOV R11,=i
MOV R12,[R11]
MOV R0,#1
MOV R1,=t6
MOV R2,[R1]
ADD R2,R12,R0
STR R2, [R1]
MOV R3,=i
MOV R4,[R3]
MOV R5,#t6
STR R5, [R3]
goto L2
MOV R6,=a
MOV R7,[R6]
MOV R8,#3
MOV R9,=t7
MOV R10,[R9]
MUL R10,R7,R8
STR R10, [R9]
MOV R11,=t7
MOV R12,[R11]
MOV R0,#4
MOV R1,=t8
MOV R2,[R1]
ADD R2,R12,R0
STR R2, [R1]
MOV R3,=a
MOV R4,[R3]
MOV R5,#t8
STR R5, [R3]
MOV R6,=i
MOV R7,[R6]
MOV R8,#t8
STR R8, [R6]
MOV R9,=i
MOV R10,[R9]
MOV R11,#11
MOV R12,=t9
MOV R0,[R12]
STR R0, [R12]
MOV R1,=t9
MOV R2,[R1]
MOV R3,=
MOV R4,[R3]
CMP R2,R4
MOV R5,=i
MOV R6,[R5]
MOV R7,#2
MOV R8,=t10
MOV R9,[R8]
SUBS R9,R6,R7
STR R9, [R8]
MOV R10,=a
MOV R11,[R10]
MOV R12,#t10
STR R12, [R10]
goto L4
MOV R0,#2
MOV R1,=a
MOV R2,[R1]
MOV R3,=t11
MOV R4,[R3]
MUL R4,R0,R2
STR R4, [R3]
MOV R5,=i
MOV R6,[R5]
MOV R7,=t11
MOV R8,[R7]
MOV R9,=t12
MOV R10,[R9]
ADD R10,R6,R8
STR R10, [R9]
MOV R11,=a
MOV R12,[R11]
MOV R0,#t12
STR R0, [R11]
SWI 0x011
.DATA
i: .WORD 2
a: .WORD t5
