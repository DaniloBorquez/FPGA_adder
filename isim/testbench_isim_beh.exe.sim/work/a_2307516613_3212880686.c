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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/block_norm.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1366267000076357978_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_2307516613_3212880686_p_0(char *t0)
{
    char t5[16];
    char t17[16];
    char t22[16];
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
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    unsigned int t21;
    int t23;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6016U);
    t3 = (t0 + 6194);
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
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5968U);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 6016U);
    t10 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t10 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5968U);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 6016U);
    t10 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t10 != 0)
        goto LAB9;

LAB10:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5968U);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t3 = (t0 + 6016U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t10 != 0)
        goto LAB13;

LAB14:
LAB3:    t1 = (t0 + 3624);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t7 = (t0 + 6200);
    t12 = (t0 + 3704);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 6U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 6206);
    t3 = (t0 + 3768);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 11U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB3;

LAB5:    xsi_set_current_line(81, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t6 = (t0 + 3704);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5968U);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 6016U);
    t6 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t17, t2, t1, t4, t3);
    t7 = (t0 + 1352U);
    t11 = *((char **)t7);
    t10 = *((unsigned char *)t11);
    t7 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t5, t6, t17, t10);
    t12 = (t5 + 12U);
    t9 = *((unsigned int *)t12);
    t18 = (1U * t9);
    t19 = (11U != t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    t13 = (t0 + 3768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t7, 11U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB7:    xsi_size_not_matching(11U, t18, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(84, ng0);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t9 = (10 - 5);
    t18 = (t9 * 1U);
    t21 = (0 + t18);
    t6 = (t7 + t21);
    t11 = (t0 + 3704);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 6U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 6217);
    t3 = (t0 + 6225);
    t7 = ((IEEE_P_2592010699) + 4000);
    t11 = (t17 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t9;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 2;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t23 = (2 - 0);
    t9 = (t23 * 1);
    t9 = (t9 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t9;
    t6 = xsi_base_array_concat(t6, t5, t7, (char)97, t1, t17, (char)97, t3, t22, (char)101);
    t9 = (8U + 3U);
    t10 = (11U != t9);
    if (t10 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 3768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t6, 11U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB11:    xsi_size_not_matching(11U, t9, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(87, ng0);
    t6 = (t0 + 1832U);
    t7 = *((char **)t6);
    t6 = (t0 + 3704);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6228);
    t3 = (t0 + 6231);
    t7 = ((IEEE_P_2592010699) + 4000);
    t11 = (t17 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 2;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t9;
    t12 = (t22 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 7;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t23 = (7 - 0);
    t9 = (t23 * 1);
    t9 = (t9 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t9;
    t6 = xsi_base_array_concat(t6, t5, t7, (char)97, t1, t17, (char)97, t3, t22, (char)101);
    t9 = (3U + 8U);
    t10 = (11U != t9);
    if (t10 == 1)
        goto LAB15;

LAB16:    t13 = (t0 + 3768);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    memcpy(t20, t6, 11U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB15:    xsi_size_not_matching(11U, t9, 0);
    goto LAB16;

}


extern void work_a_2307516613_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2307516613_3212880686_p_0};
	xsi_register_didat("work_a_2307516613_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_2307516613_3212880686.didat");
	xsi_register_executes(pe);
}
