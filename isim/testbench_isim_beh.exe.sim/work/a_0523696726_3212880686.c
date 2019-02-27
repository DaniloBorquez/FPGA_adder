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
static const char *ng0 = "/home/dborquez/XilinxProjects/RK4/block_adder.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0523696726_3212880686_p_0(char *t0)
{
    char t8[16];
    char t9[16];
    char t16[16];
    char t18[16];
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t10;
    char *t11;
    char *t13;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB3;

LAB4:
LAB7:    t35 = (t0 + 2792U);
    t36 = *((char **)t35);
    t35 = (t0 + 5352);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t36, 57U);
    xsi_driver_first_trans_fast_port(t35);

LAB2:    t41 = (t0 + 5240);
    *((int *)t41) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2792U);
    t10 = *((char **)t1);
    t1 = (t0 + 8120U);
    t11 = (t0 + 8436);
    t13 = (t0 + 8492);
    t17 = ((IEEE_P_2592010699) + 4000);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 55;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (55 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t23 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 0;
    t24 = (t20 + 4U);
    *((int *)t24) = 0;
    t24 = (t20 + 8U);
    *((int *)t24) = 1;
    t25 = (0 - 0);
    t22 = (t25 * 1);
    t22 = (t22 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t11, t18, (char)97, t13, t23, (char)101);
    t24 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t9, t10, t1, t15, t16);
    t26 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t8, t24, t9, (unsigned char)3);
    t27 = (t8 + 12U);
    t22 = *((unsigned int *)t27);
    t28 = (1U * t22);
    t29 = (57U != t28);
    if (t29 == 1)
        goto LAB5;

LAB6:    t30 = (t0 + 5352);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t26, 57U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB2;

LAB5:    xsi_size_not_matching(57U, t28, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_0523696726_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t9 = (t6 != t8);
    if (t9 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 3272U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t14 = (t0 + 5416);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast_port(t14);

LAB2:    t21 = (t0 + 5256);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5416);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0523696726_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5480);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5272);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0523696726_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0523696726_3212880686_p_0,(void *)work_a_0523696726_3212880686_p_1,(void *)work_a_0523696726_3212880686_p_2};
	xsi_register_didat("work_a_0523696726_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_0523696726_3212880686.didat");
	xsi_register_executes(pe);
}
