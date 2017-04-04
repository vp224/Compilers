.section	.rodata
.LC0 : 
.string	"We try and find the levasthein distance between two strings\n"
	.text
  # func printi starts
  # func prints starts
  # func readi starts
  # func main starts
	.global	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$41360,	%rsp
  # t0 = 100
	movl	$100,	-4(%rbp)
  # l1 = t0
	movl	-4(%rbp),	%eax
	movl	%eax,	-8(%rbp)
  # t1 = 100
	movl	$100,	-12(%rbp)
  # l2 = t1
	movl	-12(%rbp),	%eax
	movl	%eax,	-16(%rbp)
  # param .LC0
  # call prints 1
	movl	-24(%rbp),	%esi
	pushq	%rsi	
	call	prints
	addq	$4,	%rsp
	movl	%eax,	-28(%rbp)
  # t3 = 101
	movl	$101,	-40(%rbp)
  # t4 = 101
	movl	$101,	-44(%rbp)
  # t5 = 1001
	movl	$1001,	-40852(%rbp)
  # t6 = 1023
	movl	$1023,	-40957(%rbp)
  # t7 = 0
	movl	$0,	-41062(%rbp)
  # i = t7
	movl	-41062(%rbp),	%eax
	movl	%eax,	-32(%rbp)
  # t8 = 1
.L2:
	movl	$1,	-41066(%rbp)
  # if i <l1 goto .L0
	movl	-32(%rbp),	%eax
	cmpl	-8(%rbp),	%eax
	jge	.L64
	jmp	.L0
.L64:
  # t8 = 0
	movl	$0,	-41066(%rbp)
  # goto .L1
	jmp	.L1
  # goto .L1
	jmp	.L1
  # t9 = i
.L3:
	movl	-32(%rbp),	%eax
	movl	%eax,	-41070(%rbp)
  # i = i + 1
	movl	-32(%rbp),	%eax
	negl	%eax
	movl	%eax,	-32(%rbp)	
  # goto .L2
	jmp	.L2
  # t10 = 0
.L0:
	movl	$0,	-41074(%rbp)
  # t10 = t10 * 101
	movl	-41074(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41074(%rbp)
  # t10 = t10 + i
	movl	-41074(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41074(%rbp)	
  # t10 = t10 * 4
	movl	-41074(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41074(%rbp)
  # t11 = 0
	movl	$0,	-41078(%rbp)
  # t10 = t10 * 101
	movl	-41074(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41074(%rbp)
  # t10 = t10 + t11
	movl	-41074(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41074(%rbp)	
  # t10 = t10 * 4
	movl	-41074(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41074(%rbp)
  # t12 = 1
	movl	$1,	-41082(%rbp)
  # dp[t10] = t12
	movl	-41074(%rbp),	%edx
	movl	-41082(%rbp),	%eax
	movl	%eax,	-40848(%ebp,%edx,1)
  # t13 = 0
	movl	$0,	-41086(%rbp)
  # t14 = 0
	movl	$0,	-41090(%rbp)
  # t14 = t14 * 101
	movl	-41090(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41090(%rbp)
  # t14 = t14 + t13
	movl	-41090(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41090(%rbp)	
  # t14 = t14 * 4
	movl	-41090(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41090(%rbp)
  # t14 = t14 * 101
	movl	-41090(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41090(%rbp)
  # t14 = t14 + i
	movl	-41090(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41090(%rbp)	
  # t14 = t14 * 4
	movl	-41090(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41090(%rbp)
  # t15 = 1
	movl	$1,	-41094(%rbp)
  # dp[t14] = t15
	movl	-41090(%rbp),	%edx
	movl	-41094(%rbp),	%eax
	movl	%eax,	-40848(%ebp,%edx,1)
  # goto .L3
	jmp	.L3
  # t16 = 89
.L1:
	movl	$89,	-41102(%rbp)
  # t17 = 0
	movl	$0,	-41106(%rbp)
  # t17 = t17 * 101
	movl	-41106(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41106(%rbp)
  # t17 = t17 + t16
	movl	-41106(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41106(%rbp)	
  # t17 = t17 * 4
	movl	-41106(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41106(%rbp)
  # t18 = 98
	movl	$98,	-41110(%rbp)
  # t17 = t17 * 101
	movl	-41106(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41106(%rbp)
  # t17 = t17 + t18
	movl	-41106(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41106(%rbp)	
  # t17 = t17 * 4
	movl	-41106(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41106(%rbp)
  # t19 = dp[t17]
	movl	-41106(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41114(%rbp)
  # param t19
  # call printi 1
	movl	-41114(%rbp),	%esi
	pushq	%rsi	
	call	printi
	addq	$4,	%rsp
	movl	%eax,	-41118(%rbp)
  # t21 = 0
	movl	$0,	-41122(%rbp)
  # t22 = 0
	movl	$0,	-41126(%rbp)
  # t22 = t22 * 1001
	movl	-41126(%rbp),	%edx
	imull	 $1001,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41126(%rbp)
  # t22 = t22 + t21
	movl	-41126(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41126(%rbp)	
  # t22 = t22 * 4
	movl	-41126(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41126(%rbp)
  # t23 = a[t22]
	movl	-41126(%rbp),	%edx
	movl	-40953(%ebp,%edx,1),	%eax
	movl	%eax,	-41127(%rbp)
  # t24 = 6
	movl	$6,	-41131(%rbp)
  # t25 = 0
	movl	$0,	-41135(%rbp)
  # t25 = t25 * 1023
	movl	-41135(%rbp),	%edx
	imull	 $1023,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41135(%rbp)
  # t25 = t25 + t24
	movl	-41135(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41135(%rbp)	
  # t25 = t25 * 4
	movl	-41135(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41135(%rbp)
  # t26 = b[t25]
	movl	-41135(%rbp),	%edx
	movl	-41058(%ebp,%edx,1),	%eax
	movl	%eax,	-41136(%rbp)
  # t27 = 1
	movl	$1,	-41140(%rbp)
  # if t23 ==t26 goto .L4
	movl	-41127(%rbp),	%eax
	cmpl	-41136(%rbp),	%eax
	jne	.L65
	jmp	.L4
.L65:
  # t27 = 0
	movl	$0,	-41140(%rbp)
  # goto .L5
	jmp	.L5
  # goto .L5
	jmp	.L5
  # t28 = 5
.L4:
	movl	$5,	-41144(%rbp)
  # t29 = 0
	movl	$0,	-41148(%rbp)
  # t29 = t29 * 1023
	movl	-41148(%rbp),	%edx
	imull	 $1023,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41148(%rbp)
  # t29 = t29 + t28
	movl	-41148(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41148(%rbp)	
  # t29 = t29 * 4
	movl	-41148(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41148(%rbp)
  # t31 = b[t29]
	movl	-41148(%rbp),	%edx
	movl	-41058(%ebp,%edx,1),	%eax
	movl	%eax,	-41150(%rbp)
  # t30 = t31
	movl	-41150(%rbp),	%eax
	movl	%eax,	-41149(%rbp)
  # t31 = t31 + 1
	movl	-41150(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41150(%rbp)	
  # b[t29] = t31
	movl	-41148(%rbp),	%edx
	movl	-41150(%rbp),	%eax
	movl	%eax,	-41058(%ebp,%edx,1)
  # goto .L5
	jmp	.L5
  # t32 = 101
.L5:
	movl	$101,	-41154(%rbp)
  # t33 = 101
	movl	$101,	-41158(%rbp)
  # t34 = 1
	movl	$1,	-41162(%rbp)
  # i = t34
	movl	-41162(%rbp),	%eax
	movl	%eax,	-32(%rbp)
  # t35 = 1
.L8:
	movl	$1,	-41166(%rbp)
  # if i <=l1 goto .L6
  # t35 = 0
	movl	$0,	-41166(%rbp)
  # goto .L7
	jmp	.L7
  # goto .L7
	jmp	.L7
  # t36 = i
.L10:
	movl	-32(%rbp),	%eax
	movl	%eax,	-41170(%rbp)
  # i = i + 1
	movl	-32(%rbp),	%eax
	negl	%eax
	movl	%eax,	-32(%rbp)	
  # goto .L8
	jmp	.L8
  # t37 = 1
.L6:
	movl	$1,	-41174(%rbp)
  # j = t37
	movl	-41174(%rbp),	%eax
	movl	%eax,	-36(%rbp)
  # t38 = 1
.L12:
	movl	$1,	-41178(%rbp)
  # if j <=l2 goto .L9
  # t38 = 0
	movl	$0,	-41178(%rbp)
  # goto .L10
	jmp	.L10
  # goto .L11
	jmp	.L11
  # t39 = j
.L16:
	movl	-36(%rbp),	%eax
	movl	%eax,	-41182(%rbp)
  # j = j + 1
	movl	-36(%rbp),	%eax
	negl	%eax
	movl	%eax,	-36(%rbp)	
  # goto .L12
	jmp	.L12
  # t40 = 0
.L9:
	movl	$0,	-41186(%rbp)
  # t40 = t40 * 101
	movl	-41186(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41186(%rbp)
  # t40 = t40 + i
	movl	-41186(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41186(%rbp)	
  # t40 = t40 * 4
	movl	-41186(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41186(%rbp)
  # t41 = a[t40]
	movl	-41186(%rbp),	%edx
	movl	-40953(%ebp,%edx,1),	%eax
	movl	%eax,	-41187(%rbp)
  # t42 = 0
	movl	$0,	-41191(%rbp)
  # t42 = t42 * 101
	movl	-41191(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41191(%rbp)
  # t42 = t42 + j
	movl	-41191(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41191(%rbp)	
  # t42 = t42 * 4
	movl	-41191(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41191(%rbp)
  # t43 = b[t42]
	movl	-41191(%rbp),	%edx
	movl	-41058(%ebp,%edx,1),	%eax
	movl	%eax,	-41192(%rbp)
  # t44 = 1
	movl	$1,	-41196(%rbp)
  # if t41 ==t43 goto .L13
	movl	-41187(%rbp),	%eax
	cmpl	-41192(%rbp),	%eax
	jne	.L66
	jmp	.L13
.L66:
  # t44 = 0
	movl	$0,	-41196(%rbp)
  # goto .L14
	jmp	.L14
  # goto .L15
	jmp	.L15
  # t45 = 0
.L13:
	movl	$0,	-41200(%rbp)
  # t45 = t45 * 101
	movl	-41200(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41200(%rbp)
  # t45 = t45 + i
	movl	-41200(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41200(%rbp)	
  # t45 = t45 * 4
	movl	-41200(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41200(%rbp)
  # t45 = t45 * 101
	movl	-41200(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41200(%rbp)
  # t45 = t45 + j
	movl	-41200(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41200(%rbp)	
  # t45 = t45 * 4
	movl	-41200(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41200(%rbp)
  # t46 = 1
	movl	$1,	-41204(%rbp)
  # t47 = i - t46
	movl	-32(%rbp),	%edx
	movl	-41204(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41208(%rbp)
  # t48 = 0
	movl	$0,	-41212(%rbp)
  # t48 = t48 * 101
	movl	-41212(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41212(%rbp)
  # t48 = t48 + t47
	movl	-41212(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41212(%rbp)	
  # t48 = t48 * 4
	movl	-41212(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41212(%rbp)
  # t49 = 1
	movl	$1,	-41216(%rbp)
  # t50 = j - t49
	movl	-36(%rbp),	%edx
	movl	-41216(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41220(%rbp)
  # t48 = t48 * 101
	movl	-41212(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41212(%rbp)
  # t48 = t48 + t50
	movl	-41212(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41212(%rbp)	
  # t48 = t48 * 4
	movl	-41212(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41212(%rbp)
  # t51 = dp[t48]
	movl	-41212(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41224(%rbp)
  # t52 = 1
	movl	$1,	-41228(%rbp)
  # t53 = t51 + t52
	movl	-41224(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41232(%rbp)	
  # dp[t45] = t53
	movl	-41200(%rbp),	%edx
	movl	-41232(%rbp),	%eax
	movl	%eax,	-40848(%ebp,%edx,1)
  # goto .L16
	jmp	.L16
  # t54 = 1
.L14:
	movl	$1,	-41236(%rbp)
  # t55 = i - t54
	movl	-32(%rbp),	%edx
	movl	-41236(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41240(%rbp)
  # t56 = 0
	movl	$0,	-41244(%rbp)
  # t56 = t56 * 101
	movl	-41244(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41244(%rbp)
  # t56 = t56 + t55
	movl	-41244(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41244(%rbp)	
  # t56 = t56 * 4
	movl	-41244(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41244(%rbp)
  # t56 = t56 * 101
	movl	-41244(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41244(%rbp)
  # t56 = t56 + j
	movl	-41244(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41244(%rbp)	
  # t56 = t56 * 4
	movl	-41244(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41244(%rbp)
  # t57 = dp[t56]
	movl	-41244(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41248(%rbp)
  # t58 = 0
	movl	$0,	-41252(%rbp)
  # t58 = t58 * 101
	movl	-41252(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41252(%rbp)
  # t58 = t58 + i
	movl	-41252(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41252(%rbp)	
  # t58 = t58 * 4
	movl	-41252(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41252(%rbp)
  # t58 = t58 * 101
	movl	-41252(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41252(%rbp)
  # t58 = t58 + j
	movl	-41252(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41252(%rbp)	
  # t58 = t58 * 4
	movl	-41252(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41252(%rbp)
  # t59 = dp[t58]
	movl	-41252(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41256(%rbp)
  # t60 = 1
	movl	$1,	-41260(%rbp)
  # if t57 <t59 goto .L17
	movl	-41248(%rbp),	%eax
	cmpl	-41256(%rbp),	%eax
	jge	.L67
	jmp	.L17
.L67:
  # t60 = 0
	movl	$0,	-41260(%rbp)
  # goto .L18
	jmp	.L18
  # goto .L18
	jmp	.L18
  # t61 = 0
.L17:
	movl	$0,	-41264(%rbp)
  # t61 = t61 * 101
	movl	-41264(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41264(%rbp)
  # t61 = t61 + i
	movl	-41264(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41264(%rbp)	
  # t61 = t61 * 4
	movl	-41264(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41264(%rbp)
  # t61 = t61 * 101
	movl	-41264(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41264(%rbp)
  # t61 = t61 + j
	movl	-41264(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41264(%rbp)	
  # t61 = t61 * 4
	movl	-41264(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41264(%rbp)
  # t62 = 1
	movl	$1,	-41268(%rbp)
  # t63 = i - t62
	movl	-32(%rbp),	%edx
	movl	-41268(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41272(%rbp)
  # t64 = 0
	movl	$0,	-41276(%rbp)
  # t64 = t64 * 101
	movl	-41276(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41276(%rbp)
  # t64 = t64 + t63
	movl	-41276(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41276(%rbp)	
  # t64 = t64 * 4
	movl	-41276(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41276(%rbp)
  # t64 = t64 * 101
	movl	-41276(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41276(%rbp)
  # t64 = t64 + j
	movl	-41276(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41276(%rbp)	
  # t64 = t64 * 4
	movl	-41276(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41276(%rbp)
  # t65 = dp[t64]
	movl	-41276(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41280(%rbp)
  # dp[t61] = t65
	movl	-41264(%rbp),	%edx
	movl	-41280(%rbp),	%eax
	movl	%eax,	-40848(%ebp,%edx,1)
  # goto .L18
	jmp	.L18
  # t66 = 0
.L18:
	movl	$0,	-41284(%rbp)
  # t66 = t66 * 101
	movl	-41284(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41284(%rbp)
  # t66 = t66 + i
	movl	-41284(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41284(%rbp)	
  # t66 = t66 * 4
	movl	-41284(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41284(%rbp)
  # t67 = 1
	movl	$1,	-41288(%rbp)
  # t68 = j - t67
	movl	-36(%rbp),	%edx
	movl	-41288(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41292(%rbp)
  # t66 = t66 * 101
	movl	-41284(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41284(%rbp)
  # t66 = t66 + t68
	movl	-41284(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41284(%rbp)	
  # t66 = t66 * 4
	movl	-41284(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41284(%rbp)
  # t69 = dp[t66]
	movl	-41284(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41296(%rbp)
  # t70 = 0
	movl	$0,	-41300(%rbp)
  # t70 = t70 * 101
	movl	-41300(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41300(%rbp)
  # t70 = t70 + i
	movl	-41300(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41300(%rbp)	
  # t70 = t70 * 4
	movl	-41300(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41300(%rbp)
  # t70 = t70 * 101
	movl	-41300(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41300(%rbp)
  # t70 = t70 + j
	movl	-41300(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41300(%rbp)	
  # t70 = t70 * 4
	movl	-41300(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41300(%rbp)
  # t71 = dp[t70]
	movl	-41300(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41304(%rbp)
  # t72 = 1
	movl	$1,	-41308(%rbp)
  # if t69 <t71 goto .L19
	movl	-41296(%rbp),	%eax
	cmpl	-41304(%rbp),	%eax
	jge	.L68
	jmp	.L19
.L68:
  # t72 = 0
	movl	$0,	-41308(%rbp)
  # goto .L16
	jmp	.L16
  # goto .L20
	jmp	.L20
  # t73 = 0
.L19:
	movl	$0,	-41312(%rbp)
  # t73 = t73 * 101
	movl	-41312(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41312(%rbp)
  # t73 = t73 + i
	movl	-41312(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41312(%rbp)	
  # t73 = t73 * 4
	movl	-41312(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41312(%rbp)
  # t73 = t73 * 101
	movl	-41312(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41312(%rbp)
  # t73 = t73 + j
	movl	-41312(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41312(%rbp)	
  # t73 = t73 * 4
	movl	-41312(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41312(%rbp)
  # t74 = 0
	movl	$0,	-41316(%rbp)
  # t74 = t74 * 101
	movl	-41316(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41316(%rbp)
  # t74 = t74 + i
	movl	-41316(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41316(%rbp)	
  # t74 = t74 * 4
	movl	-41316(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41316(%rbp)
  # t75 = 1
	movl	$1,	-41320(%rbp)
  # t76 = j - t75
	movl	-36(%rbp),	%edx
	movl	-41320(%rbp),	%eax
	subl	%edx,	%eax
	movl	%eax,	-41324(%rbp)
  # t74 = t74 * 101
	movl	-41316(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41316(%rbp)
  # t74 = t74 + t76
	movl	-41316(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41316(%rbp)	
  # t74 = t74 * 4
	movl	-41316(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41316(%rbp)
  # t77 = dp[t74]
	movl	-41316(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41328(%rbp)
  # dp[t73] = t77
	movl	-41312(%rbp),	%edx
	movl	-41328(%rbp),	%eax
	movl	%eax,	-40848(%ebp,%edx,1)
  # goto .L16
	jmp	.L16
  # goto .L16
.L20:
	jmp	.L16
  # goto .L16
.L15:
	jmp	.L16
  # goto .L10
.L11:
	jmp	.L10
  # t78 = 0
.L7:
	movl	$0,	-41332(%rbp)
  # t78 = t78 * 101
	movl	-41332(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41332(%rbp)
  # t78 = t78 + l1
	movl	-41332(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41332(%rbp)	
  # t78 = t78 * 4
	movl	-41332(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41332(%rbp)
  # t78 = t78 * 101
	movl	-41332(%rbp),	%edx
	imull	 $101,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41332(%rbp)
  # t78 = t78 + l2
	movl	-41332(%rbp),	%eax
	negl	%eax
	movl	%eax,	-41332(%rbp)	
  # t78 = t78 * 4
	movl	-41332(%rbp),	%edx
	imull	 $4,	 %edx
	movl	 %edx,	 %eax
	movl	%eax,	-41332(%rbp)
  # t79 = dp[t78]
	movl	-41332(%rbp),	%edx
	movl	-40848(%ebp,%edx,1),	%eax
	movl	%eax,	-41336(%rbp)
  # param t79
  # call printi 1
	movl	-41336(%rbp),	%esi
	pushq	%rsi	
	call	printi
	addq	$4,	%rsp
	movl	%eax,	-41340(%rbp)
  # t81 = 0
	movl	$0,	-41344(%rbp)
  # return t81
	movl	-41344(%rbp),	%eax
  # func main ends
	leave
	ret
	.size	main,	.-main
