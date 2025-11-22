; crc32_step.asm
; Input: rcx = crc, dl = byte
; Output: rax = new crc

global crc32_step

section .text
crc32_step:
    mov eax, ecx
    xor al, dl

    mov ecx, 8

.loop:
    test eax, 1
    jz .no_xor
    shr eax, 1
    xor eax, 0EDB88320h
    jmp .next

.no_xor:
    shr eax, 1

.next:
    loop .loop
    ret
