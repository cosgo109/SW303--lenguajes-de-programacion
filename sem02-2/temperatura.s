	.file	"temperatura.c"
	.text
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "=== CONVERSOR DE TEMPERATURAS ===\0"
.LC1:
	.ascii "C - Celsius a Fahrenheit\0"
.LC2:
	.ascii "F - Fahrenheit a Celsius\0"
.LC3:
	.ascii "Seleccione una opci\303\263n: \0"
.LC4:
	.ascii " %c\0"
	.align 8
.LC5:
	.ascii "Ingrese temperatura en Celsius: \0"
.LC6:
	.ascii "%f\0"
.LC10:
	.ascii "%.2f\302\260C = %.2f\302\260F\12\0"
	.align 8
.LC11:
	.ascii "Ingrese temperatura en Fahrenheit: \0"
.LC12:
	.ascii "%.2f\302\260F = %.2f\302\260C\12\0"
.LC13:
	.ascii "Opci\303\263n inv\303\241lida\0"
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
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC1(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	puts
	leaq	.LC3(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-9(%rbp), %rax
	leaq	.LC4(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	movzbl	-9(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$102, %eax
	je	.L2
	cmpl	$102, %eax
	jg	.L3
	cmpl	$99, %eax
	je	.L4
	cmpl	$99, %eax
	jg	.L3
	cmpl	$67, %eax
	je	.L4
	cmpl	$70, %eax
	je	.L2
	jmp	.L3
.L4:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-4(%rbp), %rax
	leaq	.LC6(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	movss	-4(%rbp), %xmm1
	movss	.LC7(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC8(%rip), %xmm2
	movaps	%xmm0, %xmm1
	divss	%xmm2, %xmm1
	movss	.LC9(%rip), %xmm0
	addss	%xmm1, %xmm0
	movss	%xmm0, -8(%rbp)
	movss	-8(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movapd	%xmm1, %xmm2
	movapd	%xmm2, %xmm1
	movq	%xmm2, %rcx
	movapd	%xmm0, %xmm2
	movapd	%xmm2, %xmm0
	movq	%xmm2, %rdx
	leaq	.LC10(%rip), %rax
	movapd	%xmm1, %xmm2
	movq	%rcx, %r8
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	jmp	.L5
.L2:
	leaq	.LC11(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-8(%rbp), %rax
	leaq	.LC6(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	movss	-8(%rbp), %xmm0
	movss	.LC9(%rip), %xmm2
	movaps	%xmm0, %xmm1
	subss	%xmm2, %xmm1
	movss	.LC8(%rip), %xmm0
	mulss	%xmm1, %xmm0
	movss	.LC7(%rip), %xmm1
	divss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	pxor	%xmm1, %xmm1
	cvtss2sd	%xmm0, %xmm1
	movss	-8(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	movapd	%xmm1, %xmm2
	movapd	%xmm2, %xmm1
	movq	%xmm2, %rcx
	movapd	%xmm0, %xmm2
	movapd	%xmm2, %xmm0
	movq	%xmm2, %rdx
	leaq	.LC12(%rip), %rax
	movapd	%xmm1, %xmm2
	movq	%rcx, %r8
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	jmp	.L5
.L3:
	leaq	.LC13(%rip), %rax
	movq	%rax, %rcx
	call	puts
.L5:
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC7:
	.long	1091567616
	.align 4
.LC8:
	.long	1084227584
	.align 4
.LC9:
	.long	1107296256
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev5, Built by MSYS2 project) 16.1.0"
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
