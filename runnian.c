#include <stdio.h>

int y;

int main()
{
	scanf("%d", &y);
	
	if(y%4==0 && y%100 != 0)
	{
		printf("1");
	}
	
	else printf("0");
	
	return 0£» 
 } 
/*
.data
	messgae_input_y: .asciiz "pleace input y\n" 
	messgae_output_y: .asciiz "the ans is\n"
	ans1: .asciiz "1\n"
	ans2: .asciiz "0\n"
	stack: .space 100
.text

	la $a0, messgae_input_y
	li $v0, 4
	syscall
	
	li &v0, 5
	syscall
	move $t0, $v0

	li $t1, 4
	li $t2, 100


	div $t0, $t1
	mfhi &t3
	beq $t3, &zero, if_1_else
	nop
	div $t0, $t2
	mfhi &t3
	beq $t3, &zero, if_2_else
	nop
	la $a0, ans1
	li $v0, 4
	syscall
	j if_2_end
	
	j if_1_end
	
	
	
	
	
	if_1_else:
		la $a0, ans2
		li $v0, 4
		syscall
		
	if_1 _end:jr $ra
	
	if_2_else:
		la $a0, ans2
		li $v0, 4
		syscall
	if_1 _end:jr $ra
