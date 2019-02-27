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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_3920545046_3212880686_init();
    work_a_0290344353_3212880686_init();
    work_a_3327597146_3212880686_init();
    work_a_1850167486_3212880686_init();
    work_a_1783844501_3212880686_init();
    work_a_0200802635_3212880686_init();
    work_a_4014607063_3212880686_init();
    work_a_1772501877_3212880686_init();
    work_a_1274177957_3212880686_init();
    work_a_3211060057_3212880686_init();
    work_a_2866912756_3212880686_init();
    work_a_3439423592_3212880686_init();
    work_a_3380519096_3212880686_init();
    work_a_2625023044_3212880686_init();
    work_a_1610014721_3212880686_init();
    work_a_2564831407_3212880686_init();
    work_a_1153420228_3212880686_init();
    work_a_0523696726_3212880686_init();
    work_a_1956806361_3212880686_init();
    work_a_2307516613_3212880686_init();
    work_a_3612398034_3212880686_init();
    work_a_0403206054_3212880686_init();
    work_a_2349786450_3212880686_init();
    work_a_2500812502_3212880686_init();
    work_a_3719318131_3212880686_init();
    work_a_1949178628_2372691052_init();


    xsi_register_tops("work_a_1949178628_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
