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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/round.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1306455576397931277_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_1956806361_3212880686_p_0(char *t0)
{
    char t6[16];
    char t12[16];
    char t23[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (56 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 4989);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 3;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (3 - 0);
    t10 = (t15 * 1);
    t10 = (t10 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t10;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t6, t8, t12);
    if (t16 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (56 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 5045);
    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 3;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (3 - 0);
    t10 = (t15 * 1);
    t10 = (t10 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t10;
    t16 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t1, t6, t8, t12);
    if (t16 != 0)
        goto LAB5;

LAB6:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (56 - 56);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t0 + 3168);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 52U);
    xsi_driver_first_trans_fast(t7);

LAB3:    t1 = (t0 + 3072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t14 = (t0 + 4993);
    t18 = (t0 + 3168);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t14, 52U);
    xsi_driver_first_trans_fast(t18);
    goto LAB3;

LAB5:    xsi_set_current_line(43, ng0);
    t14 = (t0 + 1032U);
    t17 = *((char **)t14);
    t10 = (56 - 56);
    t24 = (t10 * 1U);
    t25 = (0 + t24);
    t14 = (t17 + t25);
    t18 = (t26 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 56;
    t19 = (t18 + 4U);
    *((int *)t19) = 5;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t27 = (5 - 56);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t28;
    t19 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t23, t14, t26, (unsigned char)3);
    t20 = (t23 + 12U);
    t28 = *((unsigned int *)t20);
    t29 = (1U * t28);
    t30 = (52U != t29);
    if (t30 == 1)
        goto LAB7;

LAB8:    t21 = (t0 + 3168);
    t22 = (t21 + 56U);
    t31 = *((char **)t22);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memcpy(t33, t19, 52U);
    xsi_driver_first_trans_fast(t21);
    goto LAB3;

LAB7:    xsi_size_not_matching(52U, t29, 0);
    goto LAB8;

}

static void work_a_1956806361_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 52U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3088);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1956806361_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1956806361_3212880686_p_0,(void *)work_a_1956806361_3212880686_p_1};
	xsi_register_didat("work_a_1956806361_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_1956806361_3212880686.didat");
	xsi_register_executes(pe);
}
