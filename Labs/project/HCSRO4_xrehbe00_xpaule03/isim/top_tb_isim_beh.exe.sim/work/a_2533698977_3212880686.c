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
static const char *ng0 = "/home/ise/Desktop/HCSRO4_xrehbe00_xpaule03/hex_to_7seg.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2533698977_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned char t54;
    unsigned char t55;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6363);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB19:    t5 = (t0 + 6367);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB20:    t8 = (t0 + 6371);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB21:    t11 = (t0 + 6375);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB22:    t14 = (t0 + 6379);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB23:    t17 = (t0 + 6383);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB24:    t20 = (t0 + 6387);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB25:    t23 = (t0 + 6391);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB26:    t26 = (t0 + 6395);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB27:    t29 = (t0 + 6399);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB28:    t32 = (t0 + 6403);
    t34 = xsi_mem_cmp(t32, t2, 4U);
    if (t34 == 1)
        goto LAB13;

LAB29:    t35 = (t0 + 6407);
    t37 = xsi_mem_cmp(t35, t2, 4U);
    if (t37 == 1)
        goto LAB14;

LAB30:    t38 = (t0 + 6411);
    t40 = xsi_mem_cmp(t38, t2, 4U);
    if (t40 == 1)
        goto LAB15;

LAB31:    t41 = (t0 + 6415);
    t43 = xsi_mem_cmp(t41, t2, 4U);
    if (t43 == 1)
        goto LAB16;

LAB32:    t44 = (t0 + 6419);
    t46 = xsi_mem_cmp(t44, t2, 4U);
    if (t46 == 1)
        goto LAB17;

LAB33:
LAB18:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6528);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);

LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (6 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 3824);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (5 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 3888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (4 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 3952);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (3 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 4016);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (2 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 4080);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (1 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 4144);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t4 = (0 - 6);
    t51 = (t4 * -1);
    t52 = (1U * t51);
    t53 = (0 + t52);
    t1 = (t2 + t53);
    t54 = *((unsigned char *)t1);
    t55 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t54);
    t3 = (t0 + 4208);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t55;
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3744);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(50, ng0);
    t47 = (t0 + 6423);
    t49 = (t0 + 2448U);
    t50 = *((char **)t49);
    t49 = (t50 + 0);
    memcpy(t49, t47, 7U);
    goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 6430);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB5:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 6437);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 6444);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 6451);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB8:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 6458);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB9:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 6465);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB10:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 6472);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB11:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 6479);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB12:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 6486);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB13:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6493);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB14:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 6500);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB15:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 6507);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB16:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 6514);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB17:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 6521);
    t3 = (t0 + 2448U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 7U);
    goto LAB2;

LAB34:;
}


extern void work_a_2533698977_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2533698977_3212880686_p_0};
	xsi_register_didat("work_a_2533698977_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_2533698977_3212880686.didat");
	xsi_register_executes(pe);
}
