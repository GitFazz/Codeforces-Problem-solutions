INCLUDE 'EMU8086.INC'
.MODEL SMALL
.STACK 100H
.DATA

    NUM DW 0
    CNT DW 0

    N DW 0
    M DW 0
    GCD DW 0
    ANS DW 0

.CODE


MAIN PROC

    MOV AX, @DATA
    MOV DS,  AX

    XOR CX, CX ; RESET COUNTER
    XOR DX, DX ; RESET   THE RESULT


    ;;;;;;;;;; INPUT

     PRINT "INPUT : "

    FOR:
        MOV AH, 1
        INT 21H
        CMP AL, 0DH
        JE END_FOR
        SUB AX, 48
        MOV NUM, AX
        MOV AX, 10
        MUL DL
        ADD AX, NUM
        MOV DX, AX
        INC CNT
        JMP FOR

     END_FOR:

    PRINTN
    MOV AH, 2
    INT 21H
    PRINTN
    MOV NUM, DX



    ;;;;;;;;;;;; GCD


MOV N, 0
    MOV M, 0
    MOV ANS, 0


    MOV N, 1

    LOOP1:


    MOV BX, NUM
    CMP N, BX

    JGE FIRST

    MOV BX, N
    MOV M, BX
    INC M


    LOOP2:



    MOV BX, NUM
    CMP M, BX

    JG  SECOND

    MOV AH, 2
    MOV DL, '*'
    INT 21H






    ;;;;;;;;;;;;;;;;;;;;


    MOV AX, N
    MOV BX, M
    PART1:
        CMP AX, BX
        JE FINAL
        JB EXCNG

    PART2:
        MOV DX, 0H       ;PUT 0 AT DX (DIV MODE)
        DIV BX           ;DIV WITH AX
        CMP DX, 0        ;CHECK THE REMAINDER
        JE FINAL
        MOV AX, DX
        JMP PART1

    EXCNG:
        XCHG AX, BX
        JMP PART2

    FINAL:
        ADD ANS, BX




















    ;;;;;;;;;;;;;;;;;;;;;








    INC M
    JMP LOOP2

    SECOND:

    INC N

    MOV AH, 2
    MOV DL, 0DH
    INT 21H
    MOV DL, 0AH
    INT 21H
    JMP LOOP1


    FIRST:


    MOV DX, ANS
    MOV AH, 2
    INT 21H

    MOV AH, 4CH
    INT 21H















    ;;;; OUTPUT

    PRINT "OUTPUT : "

    XOR CX, CX
    MOV CX, CNT

    MOV BL, 10
    XOR AH, AH
    MOV AX, ANS


    FOR2:
         DIV BL
         XOR DX, DX
         MOV DL, AH
         ADD DL, 48
         PUSH DX

    LOOP FOR2

    XOR CX, CX
    MOV CX, CNT
    MOV AH, 2
    FOR3:

        POP DX
        INT 21H
    LOOP FOR3



    MOV AH, 4CH
    INT 21H

    MAIN ENDP





END MAIN
