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
static const char *ng0 = "/home/filipe/Documents/AAC/lab1-original/simpleDualPortMemory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_1299257503;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_0150327492_3212880686_p_0(char *t0)
{
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 2408U);
    t4 = *((char **)t3);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = ((WORK_P_1299257503) + 1528U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (15 - t8);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t3 = (t5 + t11);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 15;
    t14 = (t13 + 4U);
    *((int *)t14) = 2;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (2 - 15);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t17 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t12);
    t18 = (t17 - 0);
    t16 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t17);
    t19 = (32U * t16);
    t20 = (0 + t19);
    t14 = (t4 + t20);
    t21 = (t0 + 4048);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 32U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB3;

}

static void work_a_0150327492_3212880686_p_1(char *t0)
{
    char t16[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2408U);
    t3 = *((char **)t1);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t1 = ((WORK_P_1299257503) + 1528U);
    t7 = *((char **)t1);
    t11 = *((int *)t7);
    t12 = (t11 - 1);
    t13 = (15 - t12);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t4 + t15);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t19 = (2 - 15);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t20;
    t21 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t1, t16);
    t22 = (t21 - 0);
    t20 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t21);
    t23 = (32U * t20);
    t24 = (0 + t23);
    t9 = (t3 + t24);
    t10 = (t0 + 4112);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 1832U);
    t7 = *((char **)t3);
    t3 = (t0 + 2408U);
    t8 = *((char **)t3);
    t3 = (t0 + 1672U);
    t9 = *((char **)t3);
    t3 = ((WORK_P_1299257503) + 1528U);
    t10 = *((char **)t3);
    t11 = *((int *)t10);
    t12 = (t11 - 1);
    t13 = (15 - t12);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t3 = (t9 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 15;
    t18 = (t17 + 4U);
    *((int *)t18) = 2;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (2 - 15);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t21 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t3, t16);
    t22 = (t21 - 0);
    t20 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t21);
    t23 = (32U * t20);
    t24 = (0 + t23);
    t18 = (t8 + t24);
    memcpy(t18, t7, 32U);
    t25 = (t0 + 2352U);
    xsi_variable_act(t25);
    goto LAB6;

}


extern void work_a_0150327492_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0150327492_3212880686_p_0,(void *)work_a_0150327492_3212880686_p_1};
	xsi_register_didat("work_a_0150327492_3212880686", "isim/singleCoreProcessor_tb_isim_beh.exe.sim/work/a_0150327492_3212880686.didat");
	xsi_register_executes(pe);
}
