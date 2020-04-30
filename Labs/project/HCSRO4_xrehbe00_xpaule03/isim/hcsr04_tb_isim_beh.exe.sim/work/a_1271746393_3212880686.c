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
static const char *ng0 = "/home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/unit_converter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1271746393_3212880686_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char t27[16];
    char t28[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    int t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    int t24;
    int t25;
    unsigned char t26;
    char *t29;
    char *t30;
    int t31;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(21U);
    memset(t1, 0, 21U);
    t2 = t1;
    memset(t2, (unsigned char)2, 21U);
    t3 = (t0 + 1928U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 21U);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1928U);
    t3 = *((char **)t1);
    t5 = (20 - 8);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    memcpy(t1, t2, 9U);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5469);
    *((int *)t1) = 0;
    t2 = (t0 + 5473);
    *((int *)t2) = 8;
    t8 = 0;
    t9 = 8;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t5 = (20 - 20);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3304);
    t4 = (t3 + 56U);
    t10 = *((char **)t4);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t5 = (20 - 16);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3368);
    t4 = (t3 + 56U);
    t10 = *((char **)t4);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t5 = (20 - 12);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3432);
    t4 = (t3 + 56U);
    t10 = *((char **)t4);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3224);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1928U);
    t4 = *((char **)t3);
    t5 = (20 - 18);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 18;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - 18);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t10 = xsi_base_array_concat(t10, t11, t12, (char)97, t3, t13, (char)99, (unsigned char)2, (char)101);
    t15 = (t0 + 1928U);
    t18 = *((char **)t15);
    t17 = (20 - 19);
    t19 = (t17 * 1U);
    t20 = (0 + t19);
    t15 = (t18 + t20);
    t21 = (19U + 1U);
    memcpy(t15, t10, t21);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 5469);
    t16 = *((int *)t1);
    t23 = (t16 < 8);
    if (t23 == 1)
        goto LAB9;

LAB10:    t22 = (unsigned char)0;

LAB11:    if (t22 != 0)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5469);
    t16 = *((int *)t1);
    t23 = (t16 < 8);
    if (t23 == 1)
        goto LAB15;

LAB16:    t22 = (unsigned char)0;

LAB17:    if (t22 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 5469);
    t16 = *((int *)t1);
    t23 = (t16 < 8);
    if (t23 == 1)
        goto LAB21;

LAB22:    t22 = (unsigned char)0;

LAB23:    if (t22 != 0)
        goto LAB18;

LAB20:
LAB19:
LAB4:    t1 = (t0 + 5469);
    t8 = *((int *)t1);
    t2 = (t0 + 5473);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB24:    t16 = (t8 + 1);
    t8 = t16;
    t3 = (t0 + 5469);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);
    t15 = (t0 + 1928U);
    t18 = *((char **)t15);
    t17 = (20 - 12);
    t19 = (t17 * 1U);
    t20 = (0 + t19);
    t15 = (t18 + t20);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 12;
    t30 = (t29 + 4U);
    *((int *)t30) = 9;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (9 - 12);
    t21 = (t31 * -1);
    t21 = (t21 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t21;
    t30 = (t0 + 5481);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t21 = (t36 * 1);
    t21 = (t21 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t21;
    t35 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t27, t15, t28, t30, t33);
    t37 = (t0 + 1928U);
    t38 = *((char **)t37);
    t21 = (20 - 12);
    t39 = (t21 * 1U);
    t40 = (0 + t39);
    t37 = (t38 + t40);
    t41 = (t27 + 12U);
    t42 = *((unsigned int *)t41);
    t43 = (1U * t42);
    memcpy(t37, t35, t43);
    goto LAB7;

LAB9:    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t5 = (20 - 12);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t4 = (t11 + 0U);
    t10 = (t4 + 0U);
    *((int *)t10) = 12;
    t10 = (t4 + 4U);
    *((int *)t10) = 9;
    t10 = (t4 + 8U);
    *((int *)t10) = -1;
    t24 = (9 - 12);
    t17 = (t24 * -1);
    t17 = (t17 + 1);
    t10 = (t4 + 12U);
    *((unsigned int *)t10) = t17;
    t10 = (t0 + 5477);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t25 = (3 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t26 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t11, t10, t13);
    t22 = t26;
    goto LAB11;

LAB12:    xsi_set_current_line(58, ng0);
    t15 = (t0 + 1928U);
    t18 = *((char **)t15);
    t17 = (20 - 16);
    t19 = (t17 * 1U);
    t20 = (0 + t19);
    t15 = (t18 + t20);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 16;
    t30 = (t29 + 4U);
    *((int *)t30) = 13;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (13 - 16);
    t21 = (t31 * -1);
    t21 = (t21 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t21;
    t30 = (t0 + 5489);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t21 = (t36 * 1);
    t21 = (t21 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t21;
    t35 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t27, t15, t28, t30, t33);
    t37 = (t0 + 1928U);
    t38 = *((char **)t37);
    t21 = (20 - 16);
    t39 = (t21 * 1U);
    t40 = (0 + t39);
    t37 = (t38 + t40);
    t41 = (t27 + 12U);
    t42 = *((unsigned int *)t41);
    t43 = (1U * t42);
    memcpy(t37, t35, t43);
    goto LAB13;

LAB15:    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t5 = (20 - 16);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t4 = (t11 + 0U);
    t10 = (t4 + 0U);
    *((int *)t10) = 16;
    t10 = (t4 + 4U);
    *((int *)t10) = 13;
    t10 = (t4 + 8U);
    *((int *)t10) = -1;
    t24 = (13 - 16);
    t17 = (t24 * -1);
    t17 = (t17 + 1);
    t10 = (t4 + 12U);
    *((unsigned int *)t10) = t17;
    t10 = (t0 + 5485);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t25 = (3 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t26 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t11, t10, t13);
    t22 = t26;
    goto LAB17;

LAB18:    xsi_set_current_line(62, ng0);
    t15 = (t0 + 1928U);
    t18 = *((char **)t15);
    t17 = (20 - 20);
    t19 = (t17 * 1U);
    t20 = (0 + t19);
    t15 = (t18 + t20);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 20;
    t30 = (t29 + 4U);
    *((int *)t30) = 17;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (17 - 20);
    t21 = (t31 * -1);
    t21 = (t21 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t21;
    t30 = (t0 + 5497);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t21 = (t36 * 1);
    t21 = (t21 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t21;
    t35 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t27, t15, t28, t30, t33);
    t37 = (t0 + 1928U);
    t38 = *((char **)t37);
    t21 = (20 - 20);
    t39 = (t21 * 1U);
    t40 = (0 + t39);
    t37 = (t38 + t40);
    t41 = (t27 + 12U);
    t42 = *((unsigned int *)t41);
    t43 = (1U * t42);
    memcpy(t37, t35, t43);
    goto LAB19;

LAB21:    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t5 = (20 - 20);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t4 = (t11 + 0U);
    t10 = (t4 + 0U);
    *((int *)t10) = 20;
    t10 = (t4 + 4U);
    *((int *)t10) = 17;
    t10 = (t4 + 8U);
    *((int *)t10) = -1;
    t24 = (17 - 20);
    t17 = (t24 * -1);
    t17 = (t17 + 1);
    t10 = (t4 + 12U);
    *((unsigned int *)t10) = t17;
    t10 = (t0 + 5493);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t25 = (3 - 0);
    t17 = (t25 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t26 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t11, t10, t13);
    t22 = t26;
    goto LAB23;

}


extern void work_a_1271746393_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1271746393_3212880686_p_0};
	xsi_register_didat("work_a_1271746393_3212880686", "isim/hcsr04_tb_isim_beh.exe.sim/work/a_1271746393_3212880686.didat");
	xsi_register_executes(pe);
}
