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
static const char *ng0 = "/home/filipe/Documents/AAC/lab1/singleCoreProcessor_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *WORK_P_4054474977;
extern char *IEEE_P_0774719531;

int ieee_p_0774719531_sub_5108929503364814004_2162500114(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *work_p_4054474977_sub_1991549367214789767_1800819092(char *, char *, char *, char *);


static void work_a_4293684130_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    int64 t9;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (9 * t7);
    t9 = (t8 / 4);
    t2 = (t0 + 3376);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4293684130_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3624);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3624);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4293684130_3212880686_p_2(char *t0)
{
    char t12[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t13;
    int64 t14;
    char *t15;

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 4640);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t11 = (t2 == (unsigned char)3);
    if (t11 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3872);
    t4 = (t0 + 2848U);
    t7 = (t0 + 7552);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 18;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t5 = (18 - 1);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t13;
    std_textio_write7(STD_TEXTIO, t1, t4, t7, t12, (unsigned char)0, 0);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t14 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t1, t3, t14, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 7570);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 6;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t5 = (6 - 1);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 1672U);
    t7 = *((char **)t4);
    t4 = (t0 + 7256U);
    t8 = work_p_4054474977_sub_1991549367214789767_1800819092(WORK_P_4054474977, t12, t7, t4);
    t9 = (t12 + 12U);
    t13 = *((unsigned int *)t9);
    t13 = (t13 * 1U);
    t10 = (char *)alloca(t13);
    memcpy(t10, t8, t13);
    std_textio_write7(STD_TEXTIO, t1, t3, t10, t12, (unsigned char)0, 0);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 7576);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 5;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t5 = (5 - 1);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 1992U);
    t7 = *((char **)t4);
    t4 = (t0 + 7272U);
    t8 = work_p_4054474977_sub_1991549367214789767_1800819092(WORK_P_4054474977, t12, t7, t4);
    t9 = (t12 + 12U);
    t13 = *((unsigned int *)t9);
    t13 = (t13 * 1U);
    t15 = (char *)alloca(t13);
    memcpy(t15, t8, t13);
    std_textio_write7(STD_TEXTIO, t1, t3, t15, t12, (unsigned char)0, 0);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 7581);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 5;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t5 = (5 - 1);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 1992U);
    t7 = *((char **)t4);
    t4 = (t0 + 7272U);
    t5 = ieee_p_0774719531_sub_5108929503364814004_2162500114(IEEE_P_0774719531, t7, t4);
    std_textio_write5(STD_TEXTIO, t1, t3, t5, (unsigned char)0, 0);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3872);
    t3 = (t0 + 2848U);
    t4 = (t0 + 7586);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t5 = (1 - 1);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3872);
    t3 = ((STD_TEXTIO) + 1480U);
    t4 = (t0 + 2848U);
    std_textio_writeline(STD_TEXTIO, t1, t3, t4);
    goto LAB6;

}


extern void work_a_4293684130_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4293684130_3212880686_p_0,(void *)work_a_4293684130_3212880686_p_1,(void *)work_a_4293684130_3212880686_p_2};
	xsi_register_didat("work_a_4293684130_3212880686", "isim/singleCoreProcessor_tb_isim_beh.exe.sim/work/a_4293684130_3212880686.didat");
	xsi_register_executes(pe);
}
