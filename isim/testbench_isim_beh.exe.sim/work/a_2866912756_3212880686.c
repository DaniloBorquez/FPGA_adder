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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/norm.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);


static void work_a_2866912756_3212880686_p_0(char *t0)
{
    char t5[16];
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5944U);
    t3 = (t0 + 6297);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 5;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (5 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6308);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 11U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 3768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 57U);
    xsi_driver_first_trans_delta(t1, 12U, 57U, 0LL);

LAB3:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 11U);
    xsi_driver_first_trans_delta(t1, 1U, 11U, 0LL);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t8 = (68 - 68);
    t9 = (t8 * -1);
    t26 = (1U * t9);
    t27 = (0 + t26);
    t1 = (t2 + t27);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 3768);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = t10;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    t1 = (t0 + 3624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(85, ng0);
    t7 = (t0 + 6303);
    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t15 = ((IEEE_P_2592010699) + 4000);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 4;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (4 - 0);
    t9 = (t19 * 1);
    t9 = (t9 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t9;
    t18 = (t0 + 5944U);
    t12 = xsi_base_array_concat(t12, t14, t15, (char)97, t7, t16, (char)97, t13, t18, (char)101);
    t9 = (5U + 6U);
    t20 = (11U != t9);
    if (t20 == 1)
        goto LAB5;

LAB6:    t21 = (t0 + 3704);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t12, 11U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t9 = (56 - 56);
    t26 = (t9 * 1U);
    t27 = (0 + t26);
    t1 = (t2 + t27);
    t4 = ((IEEE_P_2592010699) + 4000);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 56;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (1 - 56);
    t28 = (t8 * -1);
    t28 = (t28 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t28;
    t3 = xsi_base_array_concat(t3, t5, t4, (char)97, t1, t14, (char)99, (unsigned char)3, (char)101);
    t28 = (56U + 1U);
    t10 = (57U != t28);
    if (t10 == 1)
        goto LAB7;

LAB8:    t7 = (t0 + 3768);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t3, 57U);
    xsi_driver_first_trans_delta(t7, 12U, 57U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(11U, t9, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(57U, t28, 0);
    goto LAB8;

}


extern void work_a_2866912756_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2866912756_3212880686_p_0};
	xsi_register_didat("work_a_2866912756_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_2866912756_3212880686.didat");
	xsi_register_executes(pe);
}
