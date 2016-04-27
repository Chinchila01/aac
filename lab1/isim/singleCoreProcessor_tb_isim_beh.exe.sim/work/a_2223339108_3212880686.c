/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/filipe/Documents/AAC/lab1/branch_control.vhd";
extern char *IEEE_P_3620187407;
extern char *WORK_P_1299257503;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2223339108_3212880686_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 10568U);
    t3 = xsi_get_transient_memory(32U);
    memset(t3, 0, 32U);
    t4 = t3;
    t5 = ((WORK_P_1299257503) + 1288U);
    t6 = *((char **)t5);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    if (-1 == -1)
        goto LAB5;

LAB6:    t9 = 0;

LAB7:    t10 = (t9 - 31);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t5 = (t4 + t12);
    t13 = ((WORK_P_1299257503) + 1288U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (0 - t16);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t19 = (1U * t18);
    memset(t5, (unsigned char)2, t19);
    t13 = (t20 + 0U);
    t21 = (t13 + 0U);
    *((int *)t21) = 0;
    t21 = (t13 + 4U);
    *((int *)t21) = 31;
    t21 = (t13 + 8U);
    *((int *)t21) = 1;
    t22 = (31 - 0);
    t23 = (t22 * 1);
    t23 = (t23 + 1);
    t21 = (t13 + 12U);
    *((unsigned int *)t21) = t23;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t20);
    if (t24 != 0)
        goto LAB3;

LAB4:
LAB8:    t29 = (t0 + 7152);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)2;
    xsi_driver_first_trans_fast(t29);

LAB2:    t34 = (t0 + 6960);
    *((int *)t34) = 1;

LAB1:    return;
LAB3:    t21 = (t0 + 7152);
    t25 = (t21 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)3;
    xsi_driver_first_trans_fast(t21);
    goto LAB2;

LAB5:    t9 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_1299257503) + 1288U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 31);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 7216);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t10;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 6976);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_2(char *t0)
{
    char t5[16];
    char t21[16];
    char t39[16];
    char t57[16];
    char t75[16];
    char t98[16];
    char t119[16];
    char t132[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t40;
    char *t41;
    int t42;
    unsigned char t43;
    char *t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned char t52;
    char *t53;
    char *t54;
    char *t55;
    char *t58;
    char *t59;
    int t60;
    unsigned char t61;
    char *t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned char t70;
    char *t71;
    char *t72;
    char *t73;
    char *t76;
    char *t77;
    int t78;
    unsigned char t79;
    unsigned char t80;
    char *t81;
    unsigned char t82;
    unsigned char t83;
    char *t84;
    unsigned char t85;
    unsigned char t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned char t92;
    unsigned char t93;
    char *t94;
    char *t95;
    char *t96;
    char *t99;
    char *t100;
    int t101;
    unsigned char t102;
    char *t103;
    unsigned char t104;
    unsigned char t105;
    char *t106;
    unsigned char t107;
    unsigned char t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned char t114;
    char *t115;
    char *t116;
    char *t117;
    char *t120;
    char *t121;
    int t122;
    unsigned char t123;
    char *t124;
    unsigned char t125;
    unsigned char t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t133;
    char *t134;
    int t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 10536U);
    t3 = (t0 + 10749);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t17 = (t0 + 10536U);
    t19 = (t0 + 10752);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 2;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (2 - 0);
    t9 = (t24 * 1);
    t9 = (t9 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t9;
    t25 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t18, t17, t19, t21);
    if (t25 == 1)
        goto LAB7;

LAB8:    t16 = (unsigned char)0;

LAB9:    if (t16 != 0)
        goto LAB5;

LAB6:    t35 = (t0 + 1512U);
    t36 = *((char **)t35);
    t35 = (t0 + 10536U);
    t37 = (t0 + 10755);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 0;
    t41 = (t40 + 4U);
    *((int *)t41) = 2;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 0);
    t9 = (t42 * 1);
    t9 = (t9 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t9;
    t43 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t36, t35, t37, t39);
    if (t43 == 1)
        goto LAB12;

LAB13:    t34 = (unsigned char)0;

LAB14:    if (t34 != 0)
        goto LAB10;

LAB11:    t53 = (t0 + 1512U);
    t54 = *((char **)t53);
    t53 = (t0 + 10536U);
    t55 = (t0 + 10758);
    t58 = (t57 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 0;
    t59 = (t58 + 4U);
    *((int *)t59) = 2;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t60 = (2 - 0);
    t9 = (t60 * 1);
    t9 = (t9 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t9;
    t61 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t54, t53, t55, t57);
    if (t61 == 1)
        goto LAB17;

LAB18:    t52 = (unsigned char)0;

LAB19:    if (t52 != 0)
        goto LAB15;

LAB16:    t71 = (t0 + 1512U);
    t72 = *((char **)t71);
    t71 = (t0 + 10536U);
    t73 = (t0 + 10761);
    t76 = (t75 + 0U);
    t77 = (t76 + 0U);
    *((int *)t77) = 0;
    t77 = (t76 + 4U);
    *((int *)t77) = 2;
    t77 = (t76 + 8U);
    *((int *)t77) = 1;
    t78 = (2 - 0);
    t9 = (t78 * 1);
    t9 = (t9 + 1);
    t77 = (t76 + 12U);
    *((unsigned int *)t77) = t9;
    t79 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t72, t71, t73, t75);
    if (t79 == 1)
        goto LAB22;

LAB23:    t70 = (unsigned char)0;

LAB24:    if (t70 != 0)
        goto LAB20;

LAB21:    t94 = (t0 + 1512U);
    t95 = *((char **)t94);
    t94 = (t0 + 10536U);
    t96 = (t0 + 10764);
    t99 = (t98 + 0U);
    t100 = (t99 + 0U);
    *((int *)t100) = 0;
    t100 = (t99 + 4U);
    *((int *)t100) = 2;
    t100 = (t99 + 8U);
    *((int *)t100) = 1;
    t101 = (2 - 0);
    t9 = (t101 * 1);
    t9 = (t9 + 1);
    t100 = (t99 + 12U);
    *((unsigned int *)t100) = t9;
    t102 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t95, t94, t96, t98);
    if (t102 == 1)
        goto LAB33;

LAB34:    t93 = (unsigned char)0;

LAB35:    if (t93 == 1)
        goto LAB30;

LAB31:    t92 = (unsigned char)0;

LAB32:    if (t92 != 0)
        goto LAB28;

LAB29:    t115 = (t0 + 1512U);
    t116 = *((char **)t115);
    t115 = (t0 + 10536U);
    t117 = (t0 + 10767);
    t120 = (t119 + 0U);
    t121 = (t120 + 0U);
    *((int *)t121) = 0;
    t121 = (t120 + 4U);
    *((int *)t121) = 2;
    t121 = (t120 + 8U);
    *((int *)t121) = 1;
    t122 = (2 - 0);
    t9 = (t122 * 1);
    t9 = (t9 + 1);
    t121 = (t120 + 12U);
    *((unsigned int *)t121) = t9;
    t123 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t116, t115, t117, t119);
    if (t123 == 1)
        goto LAB38;

LAB39:    t114 = (unsigned char)0;

LAB40:    if (t114 != 0)
        goto LAB36;

LAB37:
LAB41:    t133 = ((WORK_P_1299257503) + 1528U);
    t134 = *((char **)t133);
    t135 = *((int *)t134);
    t133 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t132, 4, t135);
    t136 = (t0 + 7280);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    memcpy(t140, t133, 16U);
    xsi_driver_first_trans_fast(t136);

LAB2:    t141 = (t0 + 6992);
    *((int *)t141) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1672U);
    t11 = *((char **)t7);
    t7 = (t0 + 7280);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 16U);
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t23 = (t0 + 1672U);
    t29 = *((char **)t23);
    t23 = (t0 + 7280);
    t30 = (t23 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t29, 16U);
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB7:    t23 = (t0 + 3112U);
    t26 = *((char **)t23);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)3);
    t16 = t28;
    goto LAB9;

LAB10:    t41 = (t0 + 1672U);
    t47 = *((char **)t41);
    t41 = (t0 + 7280);
    t48 = (t41 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t47, 16U);
    xsi_driver_first_trans_fast(t41);
    goto LAB2;

LAB12:    t41 = (t0 + 3112U);
    t44 = *((char **)t41);
    t45 = *((unsigned char *)t44);
    t46 = (t45 == (unsigned char)2);
    t34 = t46;
    goto LAB14;

LAB15:    t59 = (t0 + 1672U);
    t65 = *((char **)t59);
    t59 = (t0 + 7280);
    t66 = (t59 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memcpy(t69, t65, 16U);
    xsi_driver_first_trans_fast(t59);
    goto LAB2;

LAB17:    t59 = (t0 + 3272U);
    t62 = *((char **)t59);
    t63 = *((unsigned char *)t62);
    t64 = (t63 == (unsigned char)3);
    t52 = t64;
    goto LAB19;

LAB20:    t77 = (t0 + 1672U);
    t87 = *((char **)t77);
    t77 = (t0 + 7280);
    t88 = (t77 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memcpy(t91, t87, 16U);
    xsi_driver_first_trans_fast(t77);
    goto LAB2;

LAB22:    t77 = (t0 + 3272U);
    t81 = *((char **)t77);
    t82 = *((unsigned char *)t81);
    t83 = (t82 == (unsigned char)3);
    if (t83 == 1)
        goto LAB25;

LAB26:    t77 = (t0 + 3112U);
    t84 = *((char **)t77);
    t85 = *((unsigned char *)t84);
    t86 = (t85 == (unsigned char)3);
    t80 = t86;

LAB27:    t70 = t80;
    goto LAB24;

LAB25:    t80 = (unsigned char)1;
    goto LAB27;

LAB28:    t100 = (t0 + 1672U);
    t109 = *((char **)t100);
    t100 = (t0 + 7280);
    t110 = (t100 + 56U);
    t111 = *((char **)t110);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    memcpy(t113, t109, 16U);
    xsi_driver_first_trans_fast(t100);
    goto LAB2;

LAB30:    t100 = (t0 + 3112U);
    t106 = *((char **)t100);
    t107 = *((unsigned char *)t106);
    t108 = (t107 == (unsigned char)2);
    t92 = t108;
    goto LAB32;

LAB33:    t100 = (t0 + 3272U);
    t103 = *((char **)t100);
    t104 = *((unsigned char *)t103);
    t105 = (t104 == (unsigned char)2);
    t93 = t105;
    goto LAB35;

LAB36:    t121 = (t0 + 1672U);
    t127 = *((char **)t121);
    t121 = (t0 + 7280);
    t128 = (t121 + 56U);
    t129 = *((char **)t128);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    memcpy(t131, t127, 16U);
    xsi_driver_first_trans_fast(t121);
    goto LAB2;

LAB38:    t121 = (t0 + 3272U);
    t124 = *((char **)t121);
    t125 = *((unsigned char *)t124);
    t126 = (t125 == (unsigned char)2);
    t114 = t126;
    goto LAB40;

LAB42:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_3(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 10616U);
    t4 = ((WORK_P_1299257503) + 1528U);
    t5 = *((char **)t4);
    t6 = *((int *)t5);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 4, t6);
    t7 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t7 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 7344);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 7008);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 7344);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7408);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7024);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 7472);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 7040);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 7472);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2223339108_3212880686_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB3;

LAB4:
LAB2:    t10 = (t0 + 7056);
    *((int *)t10) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 7536);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

}

static void work_a_2223339108_3212880686_p_7(char *t0)
{
    char t9[16];
    char t11[16];
    char t33[16];
    char t55[16];
    char t69[16];
    char t70[16];
    char t76[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned char t47;
    char *t48;
    char *t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    unsigned char t53;
    unsigned char t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned char t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned char t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t26 = (t0 + 2472U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)3);
    if (t29 == 1)
        goto LAB12;

LAB13:    t25 = (unsigned char)0;

LAB14:    if (t25 != 0)
        goto LAB10;

LAB11:    t48 = (t0 + 2472U);
    t49 = *((char **)t48);
    t50 = *((unsigned char *)t49);
    t51 = (t50 == (unsigned char)3);
    if (t51 == 1)
        goto LAB19;

LAB20:    t47 = (unsigned char)0;

LAB21:    if (t47 != 0)
        goto LAB17;

LAB18:
LAB24:    t71 = (t0 + 1352U);
    t72 = *((char **)t71);
    t71 = (t0 + 10520U);
    t73 = (t0 + 2952U);
    t74 = *((char **)t73);
    t73 = (t0 + 10616U);
    t75 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t70, t72, t71, t74, t73);
    t77 = ((WORK_P_1299257503) + 1528U);
    t78 = *((char **)t77);
    t79 = *((int *)t78);
    t77 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t76, 4, t79);
    t80 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t69, t75, t70, t77, t76);
    t81 = (t69 + 12U);
    t82 = *((unsigned int *)t81);
    t83 = (1U * t82);
    t84 = (16U != t83);
    if (t84 == 1)
        goto LAB26;

LAB27:    t85 = (t0 + 7600);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memcpy(t89, t80, 16U);
    xsi_driver_first_trans_fast_port(t85);

LAB2:    t90 = (t0 + 7072);
    *((int *)t90) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t2 = (t0 + 10520U);
    t12 = ((WORK_P_1299257503) + 1528U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t11, 4, t14);
    t15 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t9, t10, t2, t12, t11);
    t16 = (t9 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (16U != t18);
    if (t19 == 1)
        goto LAB8;

LAB9:    t20 = (t0 + 7600);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 16U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB2;

LAB5:    t2 = (t0 + 2792U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t18, 0);
    goto LAB9;

LAB10:    t26 = (t0 + 1352U);
    t34 = *((char **)t26);
    t26 = (t0 + 10520U);
    t35 = (t0 + 2952U);
    t36 = *((char **)t35);
    t35 = (t0 + 10616U);
    t37 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t33, t34, t26, t36, t35);
    t38 = (t33 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    t41 = (16U != t40);
    if (t41 == 1)
        goto LAB15;

LAB16:    t42 = (t0 + 7600);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t37, 16U);
    xsi_driver_first_trans_fast_port(t42);
    goto LAB2;

LAB12:    t26 = (t0 + 3432U);
    t30 = *((char **)t26);
    t31 = *((unsigned char *)t30);
    t32 = (t31 == (unsigned char)3);
    t25 = t32;
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, t40, 0);
    goto LAB16;

LAB17:    t48 = (t0 + 2632U);
    t56 = *((char **)t48);
    t48 = (t0 + 10600U);
    t57 = (t0 + 2952U);
    t58 = *((char **)t57);
    t57 = (t0 + 10616U);
    t59 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t55, t56, t48, t58, t57);
    t60 = (t55 + 12U);
    t61 = *((unsigned int *)t60);
    t62 = (1U * t61);
    t63 = (16U != t62);
    if (t63 == 1)
        goto LAB22;

LAB23:    t64 = (t0 + 7600);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memcpy(t68, t59, 16U);
    xsi_driver_first_trans_fast_port(t64);
    goto LAB2;

LAB19:    t48 = (t0 + 3432U);
    t52 = *((char **)t48);
    t53 = *((unsigned char *)t52);
    t54 = (t53 == (unsigned char)2);
    t47 = t54;
    goto LAB21;

LAB22:    xsi_size_not_matching(16U, t62, 0);
    goto LAB23;

LAB25:    goto LAB2;

LAB26:    xsi_size_not_matching(16U, t83, 0);
    goto LAB27;

}


extern void work_a_2223339108_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2223339108_3212880686_p_0,(void *)work_a_2223339108_3212880686_p_1,(void *)work_a_2223339108_3212880686_p_2,(void *)work_a_2223339108_3212880686_p_3,(void *)work_a_2223339108_3212880686_p_4,(void *)work_a_2223339108_3212880686_p_5,(void *)work_a_2223339108_3212880686_p_6,(void *)work_a_2223339108_3212880686_p_7};
	xsi_register_didat("work_a_2223339108_3212880686", "isim/singleCoreProcessor_tb_isim_beh.exe.sim/work/a_2223339108_3212880686.didat");
	xsi_register_executes(pe);
}
