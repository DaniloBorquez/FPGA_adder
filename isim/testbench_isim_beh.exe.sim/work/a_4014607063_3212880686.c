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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/mux_adder.vhd";
extern char *IEEE_P_3620187407;



static void work_a_4014607063_3212880686_p_0(char *t0)
{
    char t6[16];
    char t15[16];
    char t29[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10218);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10220);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t25 = (t0 + 2952U);
    t26 = *((char **)t25);
    t25 = (t0 + 9888U);
    t27 = (t0 + 10222);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t10 = (t32 * 1);
    t10 = (t10 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t10;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t26, t25, t27, t29);
    if (t33 != 0)
        goto LAB8;

LAB9:
LAB10:    t39 = (t0 + 10224);
    t41 = (t0 + 6784);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t39, 57U);
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6624);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 2312U);
    t20 = *((char **)t17);
    t17 = (t0 + 6784);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 57U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t31 = (t0 + 2632U);
    t34 = *((char **)t31);
    t31 = (t0 + 6784);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t34, 57U);
    xsi_driver_first_trans_fast_port(t31);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_4014607063_3212880686_p_1(char *t0)
{
    char t6[16];
    char t15[16];
    char t29[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10281);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10283);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t25 = (t0 + 2952U);
    t26 = *((char **)t25);
    t25 = (t0 + 9888U);
    t27 = (t0 + 10285);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t10 = (t32 * 1);
    t10 = (t10 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t10;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t26, t25, t27, t29);
    if (t33 != 0)
        goto LAB8;

LAB9:
LAB10:    t39 = (t0 + 10287);
    t41 = (t0 + 6848);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t39, 57U);
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6640);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 2472U);
    t20 = *((char **)t17);
    t17 = (t0 + 6848);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 57U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t31 = (t0 + 2792U);
    t34 = *((char **)t31);
    t31 = (t0 + 6848);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t34, 57U);
    xsi_driver_first_trans_fast_port(t31);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_4014607063_3212880686_p_2(char *t0)
{
    char t6[16];
    char t15[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10344);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10346);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t26 = (t0 + 2952U);
    t27 = *((char **)t26);
    t26 = (t0 + 9888U);
    t28 = (t0 + 10348);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (1 - 0);
    t10 = (t33 * 1);
    t10 = (t10 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t10;
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t26, t28, t30);
    if (t34 != 0)
        goto LAB8;

LAB9:
LAB10:    t41 = (t0 + 6912);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6656);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 1672U);
    t20 = *((char **)t17);
    t21 = *((unsigned char *)t20);
    t17 = (t0 + 6912);
    t22 = (t17 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t32 = (t0 + 1832U);
    t35 = *((char **)t32);
    t36 = *((unsigned char *)t35);
    t32 = (t0 + 6912);
    t37 = (t32 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_4014607063_3212880686_p_3(char *t0)
{
    char t6[16];
    char t15[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10350);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10352);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t26 = (t0 + 2952U);
    t27 = *((char **)t26);
    t26 = (t0 + 9888U);
    t28 = (t0 + 10354);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (1 - 0);
    t10 = (t33 * 1);
    t10 = (t10 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t10;
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t26, t28, t30);
    if (t34 != 0)
        goto LAB8;

LAB9:
LAB10:    t41 = (t0 + 6976);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6672);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 1032U);
    t20 = *((char **)t17);
    t21 = *((unsigned char *)t20);
    t17 = (t0 + 6976);
    t22 = (t17 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t32 = (t0 + 1352U);
    t35 = *((char **)t32);
    t36 = *((unsigned char *)t35);
    t32 = (t0 + 6976);
    t37 = (t32 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_4014607063_3212880686_p_4(char *t0)
{
    char t6[16];
    char t15[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t31;
    char *t32;
    int t33;
    unsigned char t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10356);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10358);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t26 = (t0 + 2952U);
    t27 = *((char **)t26);
    t26 = (t0 + 9888U);
    t28 = (t0 + 10360);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t33 = (1 - 0);
    t10 = (t33 * 1);
    t10 = (t10 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t10;
    t34 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t27, t26, t28, t30);
    if (t34 != 0)
        goto LAB8;

LAB9:
LAB10:    t41 = (t0 + 7040);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6688);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 1192U);
    t20 = *((char **)t17);
    t21 = *((unsigned char *)t20);
    t17 = (t0 + 7040);
    t22 = (t17 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t32 = (t0 + 1512U);
    t35 = *((char **)t32);
    t36 = *((unsigned char *)t35);
    t32 = (t0 + 7040);
    t37 = (t32 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t32);
    goto LAB2;

LAB11:    goto LAB2;

}

static void work_a_4014607063_3212880686_p_5(char *t0)
{
    char t6[16];
    char t15[16];
    char t29[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9888U);
    t4 = (t0 + 10362);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 2952U);
    t12 = *((char **)t8);
    t8 = (t0 + 9888U);
    t13 = (t0 + 10364);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (1 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t25 = (t0 + 2952U);
    t26 = *((char **)t25);
    t25 = (t0 + 9888U);
    t27 = (t0 + 10366);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t10 = (t32 * 1);
    t10 = (t10 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t10;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t26, t25, t27, t29);
    if (t33 != 0)
        goto LAB8;

LAB9:
LAB10:    t39 = (t0 + 10368);
    t41 = (t0 + 7104);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t39, 11U);
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 6704);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 1992U);
    t20 = *((char **)t17);
    t17 = (t0 + 7104);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 11U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t31 = (t0 + 2152U);
    t34 = *((char **)t31);
    t31 = (t0 + 7104);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t34, 11U);
    xsi_driver_first_trans_fast_port(t31);
    goto LAB2;

LAB11:    goto LAB2;

}


extern void work_a_4014607063_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4014607063_3212880686_p_0,(void *)work_a_4014607063_3212880686_p_1,(void *)work_a_4014607063_3212880686_p_2,(void *)work_a_4014607063_3212880686_p_3,(void *)work_a_4014607063_3212880686_p_4,(void *)work_a_4014607063_3212880686_p_5};
	xsi_register_didat("work_a_4014607063_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_4014607063_3212880686.didat");
	xsi_register_executes(pe);
}
