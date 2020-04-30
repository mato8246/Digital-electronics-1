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
static const char *ng0 = "/home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/clock_enable.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1169993789_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 3184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t14 = *((char **)t7);
    memcpy(t14, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 1808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 16U);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1808U);
    t7 = *((char **)t5);
    t5 = (t0 + 4992U);
    t14 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t13, t7, t5, 1);
    t15 = (t0 + 1808U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t17 = (t13 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    memcpy(t15, t14, t19);
    goto LAB3;

LAB7:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    t1 = (t0 + 992U);
    t10 = xsi_signal_has_event(t1);
    t4 = t10;
    goto LAB12;

}


extern void work_a_1169993789_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1169993789_3212880686_p_0};
	xsi_register_didat("work_a_1169993789_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_1169993789_3212880686.didat");
	xsi_register_executes(pe);
}
