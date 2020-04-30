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
static const char *ng0 = "/home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/distance.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3156080020_3212880686_p_0(char *t0)
{
    char t5[16];
    char t9[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1672U);
    t6 = *((char **)t1);
    t1 = (t0 + 6208U);
    t7 = (t0 + 6304);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (1 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t5, t6, t1, t7, t9);
    t14 = (t0 + 2248U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (t5 + 12U);
    t13 = *((unsigned int *)t16);
    t17 = (1U * t13);
    memcpy(t14, t11, t17);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t13 = (23 - 23);
    t17 = (t13 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 23;
    t7 = (t6 + 4U);
    *((int *)t7) = 13;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t12 = (13 - 23);
    t19 = (t12 * -1);
    t19 = (t19 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t19;
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t5);
    t7 = (t0 + 2128U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t20;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t3 = (t12 > 458);
    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t12 = *((int *)t2);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t12, 9);
    t6 = (t0 + 3888);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 9U);
    xsi_driver_first_trans_fast_port(t6);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6306);
    t7 = (t0 + 3888);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t1, 9U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB6;

}

static void work_a_3156080020_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 3952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 3808);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3156080020_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3156080020_3212880686_p_0,(void *)work_a_3156080020_3212880686_p_1};
	xsi_register_didat("work_a_3156080020_3212880686", "isim/hcsr04_tb_isim_beh.exe.sim/work/a_3156080020_3212880686.didat");
	xsi_register_executes(pe);
}
