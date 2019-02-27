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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/mux_ns.vhd";
extern char *IEEE_P_3620187407;



static void work_a_1783844501_3212880686_p_0(char *t0)
{
    char t5[16];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5728U);
    t3 = (t0 + 6062);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t16 = (t0 + 1672U);
    t17 = *((char **)t16);
    t16 = (t0 + 5728U);
    t18 = (t0 + 6064);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (1 - 0);
    t9 = (t23 * 1);
    t9 = (t9 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t9;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t16, t18, t20);
    if (t24 != 0)
        goto LAB5;

LAB6:
LAB7:    t30 = (t0 + 6066);
    t32 = (t0 + 3808);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t30, 69U);
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 3712);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1032U);
    t11 = *((char **)t7);
    t7 = (t0 + 3808);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 69U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t22 = (t0 + 1352U);
    t25 = *((char **)t22);
    t22 = (t0 + 3808);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 69U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_1783844501_3212880686_p_1(char *t0)
{
    char t5[16];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5728U);
    t3 = (t0 + 6135);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t16 = (t0 + 1672U);
    t17 = *((char **)t16);
    t16 = (t0 + 5728U);
    t18 = (t0 + 6137);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (1 - 0);
    t9 = (t23 * 1);
    t9 = (t9 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t9;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t16, t18, t20);
    if (t24 != 0)
        goto LAB5;

LAB6:
LAB7:    t30 = (t0 + 6139);
    t32 = (t0 + 3872);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t30, 69U);
    xsi_driver_first_trans_fast_port(t32);

LAB2:    t37 = (t0 + 3728);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1192U);
    t11 = *((char **)t7);
    t7 = (t0 + 3872);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 69U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t22 = (t0 + 1512U);
    t25 = *((char **)t22);
    t22 = (t0 + 3872);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 69U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB2;

LAB8:    goto LAB2;

}


extern void work_a_1783844501_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1783844501_3212880686_p_0,(void *)work_a_1783844501_3212880686_p_1};
	xsi_register_didat("work_a_1783844501_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_1783844501_3212880686.didat");
	xsi_register_executes(pe);
}
