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
static const char *ng0 = "/home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/trigger_gen.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1448593376_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968U);
    t4 = *((char **)t2);
    t2 = ((IEEE_P_2592010699) + 4000);
    t5 = xsi_vhdl_greater(t2, t3, 24U, t4, 24U);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB3:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088U);
    t4 = *((char **)t2);
    t5 = 1;
    if (24U == 24U)
        goto LAB14;

LAB15:    t5 = 0;

LAB16:    if (t5 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 5787);
    t9 = 1;
    if (24U == 24U)
        goto LAB20;

LAB21:    t9 = 0;

LAB22:    t1 = t9;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB9:    t2 = (t0 + 3384);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t10 = (t0 + 3464);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB3;

LAB5:    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    t6 = (t0 + 2088U);
    t8 = *((char **)t6);
    t6 = ((IEEE_P_2592010699) + 4000);
    t9 = xsi_vhdl_lessthan(t6, t7, 24U, t8, 24U);
    t1 = t9;
    goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t13 = (t0 + 3528);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB9;

LAB11:    t1 = (unsigned char)1;
    goto LAB13;

LAB14:    t15 = 0;

LAB17:    if (t15 < 24U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t2 = (t3 + t15);
    t6 = (t4 + t15);
    if (*((unsigned char *)t2) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t15 = (t15 + 1);
    goto LAB17;

LAB20:    t16 = 0;

LAB23:    if (t16 < 24U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB21;

LAB25:    t16 = (t16 + 1);
    goto LAB23;

}


extern void work_a_1448593376_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1448593376_3212880686_p_0};
	xsi_register_didat("work_a_1448593376_3212880686", "isim/hcsr04_tb_isim_beh.exe.sim/work/a_1448593376_3212880686.didat");
	xsi_register_executes(pe);
}
