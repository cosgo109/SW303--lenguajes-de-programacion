	.file	"hola.c"
	.text
	.section .rdata,"dr"
.LC1:
	.ascii "Hola mundo en C\0"
.LC2:
	.ascii "Edad: %d a\303\261os\12\0"
.LC3:
	.ascii "Altura %.2f metros\12\0"
.LC4:
	.ascii "Inicial: %c\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$25, -4(%rbp)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, -8(%rbp)
	movb	$74, -9(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	-4(%rbp), %eax
	leaq	.LC2(%rip), %rcx
	movl	%eax, %edx
	call	printf
	pxor	%xmm0, %xmm0
	cvtss2sd	-8(%rbp), %xmm0
	movapd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	movq	%xmm1, %rdx
	leaq	.LC3(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	movsbl	-9(%rbp), %eax
	leaq	.LC4(%rip), %rcx
	movl	%eax, %edx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1071644672
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev5, Built by MSYS2 project) 16.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
