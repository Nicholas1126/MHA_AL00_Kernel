#ifndef __SOC_IVP_DSP_SUBSYS_CFG_INTERFACE_H__
#define __SOC_IVP_DSP_SUBSYS_CFG_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_PRID_ADDR(base) ((base) + (0x0000))
#define SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_ADDR(base) ((base) + (0x0004))
#define SOC_IVP_DSP_SUBSYS_CFG_STATVECTORSEL_ADDR(base) ((base) + (0x0008))
#define SOC_IVP_DSP_SUBSYS_CFG_RUNSTALL_ADDR(base) ((base) + (0x000C))
#define SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_ADDR(base) ((base) + (0x0010))
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_ADDR(base) ((base) + (0x0100))
#define SOC_IVP_DSP_SUBSYS_CFG_NMI_ADDR(base) ((base) + (0x0104))
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT0_ADDR(base) ((base) + (0x110))
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT1_ADDR(base) ((base) + (0x114))
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN0_ADDR(base) ((base) + (0x118))
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN1_ADDR(base) ((base) + (0x11C))
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_ADDR(base) ((base) + (0x0200))
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_ADDR(base) ((base) + (0x0204))
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_ADDR(base) ((base) + (0x0208))
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_ADDR(base) ((base) + (0x020C))
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ADDR(base) ((base) + (0x0210))
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_ADDR(base) ((base) + (0x0214))
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_ADDR(base) ((base) + (0x0218))
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_ADDR(base) ((base) + (0x021C))
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_ADDR(base) ((base) + (0x0220))
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCORE_GATE_ADDR(base) ((base) + (0x0224))
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCRE_GATE_ST_ADDR(base) ((base) + (0x0228))
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_ADDR(base) ((base) + (0x0290))
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL4_ADDR(base) ((base) + (0x0294))
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_ADDR(base) ((base) + (0x02B0))
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC1_ADDR(base) ((base) + (0x02B4))
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ADDR(base) ((base) + (0x030C))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_ADDR(base) ((base) + (0x0310))
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_ADDR(base) ((base) + (0x0320))
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_ADDR(base) ((base) + (0x0324))
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_ADDR(base) ((base) + (0x0328))
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_ADDR(base) ((base) + (0x032C))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_ADDR(base) ((base) + (0x0330))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_ADDR(base) ((base) + (0x033C))
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_ADDR(base) ((base) + (0x0340))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_ADDR(base) ((base) + (0x0400))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_CLR_ADDR(base) ((base) + (0x0404))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_ADDR(base) ((base) + (0x0408))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_ADDR(base) ((base) + (0x040C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_BASE_ADDR(base) ((base) + (0x0410))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_LEN_ADDR(base) ((base) + (0x0414))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_AWADDR_ADDR(base) ((base) + (0x0418))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_ARADDR_ADDR(base) ((base) + (0x041C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_BASE_ADDR(base) ((base) + (0x0420))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_LEN_ADDR(base) ((base) + (0x0424))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_AWADDR_ADDR(base) ((base) + (0x0428))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_ARADDR_ADDR(base) ((base) + (0x042C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_BASE_ADDR(base) ((base) + (0x0430))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_LEN_ADDR(base) ((base) + (0x0434))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_AWADDR_ADDR(base) ((base) + (0x0438))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_ARADDR_ADDR(base) ((base) + (0x043C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_BASE_ADDR(base) ((base) + (0x0440))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_LEN_ADDR(base) ((base) + (0x0444))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_AWADDR_ADDR(base) ((base) + (0x0448))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_ARADDR_ADDR(base) ((base) + (0x044C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_BASE_ADDR(base) ((base) + (0x0450))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_LEN_ADDR(base) ((base) + (0x0454))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_AWADDR_ADDR(base) ((base) + (0x0458))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_ARADDR_ADDR(base) ((base) + (0x045C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_BASE_ADDR(base) ((base) + (0x0460))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_LEN_ADDR(base) ((base) + (0x0464))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_AWADDR_ADDR(base) ((base) + (0x0468))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_ARADDR_ADDR(base) ((base) + (0x046C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_BASE_ADDR(base) ((base) + (0x0470))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_LEN_ADDR(base) ((base) + (0x0474))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_AWADDR_ADDR(base) ((base) + (0x0478))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_ARADDR_ADDR(base) ((base) + (0x047C))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_BASE_ADDR(base) ((base) + (0x0480))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_LEN_ADDR(base) ((base) + (0x0484))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_AWADDR_ADDR(base) ((base) + (0x0488))
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_ARADDR_ADDR(base) ((base) + (0x048C))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_ADDR(base) ((base) + (0x0500))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_ADDR(base) ((base) + (0x0504))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_ADDR(base) ((base) + (0x050C))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_ADDR(base) ((base) + (0x0510))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_ADDR(base) ((base) + (0x0514))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_ADDR(base) ((base) + (0x0518))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_ADDR(base) ((base) + (0x0530))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_ADDR(base) ((base) + (0x0534))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_ADDR(base) ((base) + (0x0538))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_ADDR(base) ((base) + (0x053C))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_ADDR(base) ((base) + (0x0540))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_ADDR(base) ((base) + (0x0544))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_ADDR(base) ((base) + (0x0548))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_ADDR(base) ((base) + (0x054C))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_ADDR(base) ((base) + (0x0550))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_ADDR(base) ((base) + (0x0554))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_ADDR(base) ((base) + (0x0558))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_ADDR(base) ((base) + (0x055C))
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_ADDR(base) ((base) + (0x0560))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP1_ADDR(base) ((base) + (0x0600))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP2_ADDR(base) ((base) + (0x0604))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP3_ADDR(base) ((base) + (0x0608))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP4_ADDR(base) ((base) + (0x060C))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP5_ADDR(base) ((base) + (0x0610))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP6_ADDR(base) ((base) + (0x0614))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP7_ADDR(base) ((base) + (0x0618))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP8_ADDR(base) ((base) + (0x061C))
#define SOC_IVP_DSP_SUBSYS_CFG_SUBSYS_VERSION_NUM_ADDR(base) ((base) + (0x0800))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SLV_SEC_SEL_ADDR(base) ((base) + (0x0300))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_ADDR(base) ((base) + (0x0304))
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_ADDR(base) ((base) + (0x0308))
#define SOC_IVP_DSP_SUBSYS_CFG_START_REMAP_ADDR_ADDR(base) ((base) + (0x0314))
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_LENGTH_ADDR(base) ((base) + (0x0318))
#define SOC_IVP_DSP_SUBSYS_CFG_DDR_REMAP_ADDR_ADDR(base) ((base) + (0x031C))
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_ADDR(base) ((base) + (0x0334))
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_ADDR(base) ((base) + (0x0338))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_INTEG_SEC_OVERRIDE_ADDR(base) ((base) + (0x051C))
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SPNIDEN_ADDR(base) ((base) + (0x0520))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prid : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_PRID_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_PRID_prid_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_PRID_prid_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ocdhaltonreset : 1;
        unsigned int reserved_0 : 15;
        unsigned int rpdebugenable : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_ocdhaltonreset_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_ocdhaltonreset_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_rpdebugenable_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_OCDHALTONRESET_rpdebugenable_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int statvectorsel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_STATVECTORSEL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_STATVECTORSEL_statvectorsel_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_STATVECTORSEL_statvectorsel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int runstall : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_RUNSTALL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_RUNSTALL_runstall_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_RUNSTALL_runstall_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwaitmode : 1;
        unsigned int reserved_0 : 7;
        unsigned int pdebugidma : 8;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_pwaitmode_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_pwaitmode_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_pdebugidma_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_PWAITMODE_pdebugidma_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int intr_normal_ns_ipc : 1;
        unsigned int intr0_ns_ipc : 1;
        unsigned int intr1_ns_ipc : 1;
        unsigned int intr_normal_s_ipc : 1;
        unsigned int intr0_s_ipc : 1;
        unsigned int intr1_s_ipc : 1;
        unsigned int intr_timer0_0 : 1;
        unsigned int intr_timer0_1 : 1;
        unsigned int rdvp0_buf0_end : 1;
        unsigned int rdvp0_buf1_end : 1;
        unsigned int rdvp0_mline_end : 1;
        unsigned int wrvp0_buf0_end : 1;
        unsigned int intr_uart_print : 1;
        unsigned int wrvp0_buf1_end : 1;
        unsigned int rdvp1_buf0_end : 1;
        unsigned int ivp_dsp_nmi : 1;
        unsigned int isp_to_ivp_irq0 : 1;
        unsigned int vic0_out_irq_reg : 1;
        unsigned int intr_wdg : 1;
        unsigned int rdvp1_buf1_end : 1;
        unsigned int rdvp1_mline_end : 1;
        unsigned int wrvp1_buf0_end : 1;
        unsigned int wrvp1_buf1_end : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_normal_ns_ipc_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_normal_ns_ipc_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr0_ns_ipc_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr0_ns_ipc_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr1_ns_ipc_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr1_ns_ipc_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_normal_s_ipc_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_normal_s_ipc_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr0_s_ipc_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr0_s_ipc_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr1_s_ipc_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr1_s_ipc_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_timer0_0_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_timer0_0_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_timer0_1_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_timer0_1_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_buf0_end_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_buf0_end_END (8)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_buf1_end_START (9)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_buf1_end_END (9)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_mline_end_START (10)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp0_mline_end_END (10)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp0_buf0_end_START (11)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp0_buf0_end_END (11)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_uart_print_START (12)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_uart_print_END (12)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp0_buf1_end_START (13)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp0_buf1_end_END (13)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_buf0_end_START (14)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_buf0_end_END (14)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_ivp_dsp_nmi_START (15)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_ivp_dsp_nmi_END (15)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_isp_to_ivp_irq0_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_isp_to_ivp_irq0_END (16)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_vic0_out_irq_reg_START (17)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_vic0_out_irq_reg_END (17)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_wdg_START (18)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_intr_wdg_END (18)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_buf1_end_START (19)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_buf1_end_END (19)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_mline_end_START (20)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_rdvp1_mline_end_END (20)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp1_buf0_end_START (21)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp1_buf0_end_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp1_buf1_end_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_BINTERRUPT_wrvp1_buf1_end_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nmi : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_NMI_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_NMI_nmi_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_NMI_nmi_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vic0_out_irq_mask : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT0_vic0_out_irq_mask_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT0_vic0_out_irq_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vic0_out_irq_raw : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT1_vic0_out_irq_raw_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_OUT1_vic0_out_irq_raw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vic0_in_irq_level_mask : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN0_vic0_in_irq_level_mask_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN0_vic0_in_irq_level_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vic0_in_irq_level_force : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN1_vic0_in_irq_level_force_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_VIC0_IN1_vic0_in_irq_level_force_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_debug_en : 1;
        unsigned int rst_processor_en : 1;
        unsigned int rst_jtag_en : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_debug_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_debug_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_processor_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_processor_en_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_jtag_en_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_EN_rst_jtag_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_debug_dis : 1;
        unsigned int rst_processor_dis : 1;
        unsigned int rst_jtag_dis : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_debug_dis_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_debug_dis_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_processor_dis_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_processor_dis_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_jtag_dis_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_DIS_rst_jtag_dis_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rst_debug_st : 1;
        unsigned int rst_processor_st : 1;
        unsigned int rst_jtag_st : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_debug_st_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_debug_st_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_processor_st_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_processor_st_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_jtag_st_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_DSP_CORE_RESET_STATUS_rst_jtag_st_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int refclk_sel_timer0_0 : 1;
        unsigned int refclk_sel_timer0_1 : 1;
        unsigned int refclk_sel_timer1_0 : 1;
        unsigned int refclk_sel_timer1_1 : 1;
        unsigned int refclk_sel_wdg : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer0_0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer0_0_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer0_1_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer0_1_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer1_0_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer1_0_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer1_1_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_timer1_1_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_wdg_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_REF_CLOCK_SEL_refclk_sel_wdg_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_pclk_wdg_if : 1;
        unsigned int gt_pclk_wdg_cnt : 1;
        unsigned int gt_pclk_timer0_if : 1;
        unsigned int gt_pclk_timer0_cnt : 1;
        unsigned int gt_pclk_timer1_if : 1;
        unsigned int gt_pclk_timer1_cnt : 1;
        unsigned int ivp_vp_dma_clken : 1;
        unsigned int ivp_vp_dma_cfg_clken : 1;
        unsigned int ivp_vp_x2p_cfg_clken : 1;
        unsigned int ivp_vp_cfg_clken : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_wdg_if_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_wdg_if_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_wdg_cnt_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_wdg_cnt_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer0_if_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer0_if_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer0_cnt_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer0_cnt_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer1_if_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer1_if_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer1_cnt_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_gt_pclk_timer1_cnt_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_dma_clken_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_dma_clken_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_dma_cfg_clken_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_dma_cfg_clken_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_x2p_cfg_clken_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_x2p_cfg_clken_END (8)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_cfg_clken_START (9)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_GATE_CLOCK_ivp_vp_cfg_clken_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dw_axi_m1_cg_en : 1;
        unsigned int dw_axi_m2_cg_en : 1;
        unsigned int dw_axi_s1_cg_en : 1;
        unsigned int dw_axi_s2_cg_en : 1;
        unsigned int dw_axi_s3_cg_en : 1;
        unsigned int dw_axi_s4_cg_en : 1;
        unsigned int dw_axi_s5_cg_en : 1;
        unsigned int defaut_slv_cg_en : 1;
        unsigned int x2p_pclk_cg_en : 1;
        unsigned int x2p_aclk_cg_en : 1;
        unsigned int ivp32_cfg_pclk_cg_en : 1;
        unsigned int x2x_aclk_cg_en : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_m1_cg_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_m1_cg_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_m2_cg_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_m2_cg_en_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s1_cg_en_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s1_cg_en_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s2_cg_en_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s2_cg_en_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s3_cg_en_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s3_cg_en_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s4_cg_en_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s4_cg_en_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s5_cg_en_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_dw_axi_s5_cg_en_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_defaut_slv_cg_en_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_defaut_slv_cg_en_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2p_pclk_cg_en_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2p_pclk_cg_en_END (8)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2p_aclk_cg_en_START (9)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2p_aclk_cg_en_END (9)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_ivp32_cfg_pclk_cg_en_START (10)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_ivp32_cfg_pclk_cg_en_END (10)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2x_aclk_cg_en_START (11)
#define SOC_IVP_DSP_SUBSYS_CFG_BUS_GATE_CLOCK_x2x_aclk_cg_en_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reset_timer0_en : 1;
        unsigned int reset_timer1_en : 1;
        unsigned int reset_watchdog_en : 1;
        unsigned int reset_vpdma_en : 1;
        unsigned int reset_vpdma_cfg_en : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_timer0_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_timer0_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_timer1_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_timer1_en_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_watchdog_en_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_watchdog_en_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_vpdma_en_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_vpdma_en_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_vpdma_cfg_en_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_EN_reset_vpdma_cfg_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reset_timer0_dis : 1;
        unsigned int reset_timer1_dis : 1;
        unsigned int reset_watchdog_dis : 1;
        unsigned int reset_vpdma_dis : 1;
        unsigned int reset_vpdma_cfg_dis : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_timer0_dis_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_timer0_dis_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_timer1_dis_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_timer1_dis_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_watchdog_dis_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_watchdog_dis_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_vpdma_dis_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_vpdma_dis_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_vpdma_cfg_dis_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_DIS_reset_vpdma_cfg_dis_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reset_timer0_status : 1;
        unsigned int reset_timer1_status : 1;
        unsigned int reset_watchdog_status : 1;
        unsigned int reset_vpdma_status : 1;
        unsigned int reset_vpdma_cfg_status : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_timer0_status_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_timer0_status_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_timer1_status_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_timer1_status_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_watchdog_status_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_watchdog_status_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_vpdma_status_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_vpdma_status_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_vpdma_cfg_status_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_TIMER_WDG_RST_STATUS_reset_vpdma_cfg_status_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp32_dspcore_gt : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DSPCORE_GATE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCORE_GATE_ivp32_dspcore_gt_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCORE_GATE_ivp32_dspcore_gt_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp32_dspcore_gate_st : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DSPCRE_GATE_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCRE_GATE_ST_ivp32_dspcore_gate_st_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DSPCRE_GATE_ST_ivp32_dspcore_gate_st_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vp_tp_mem_ctrl1 : 16;
        unsigned int vp_tp_mem_ctrl0 : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_vp_tp_mem_ctrl1_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_vp_tp_mem_ctrl1_END (15)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_vp_tp_mem_ctrl0_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL3_vp_tp_mem_ctrl0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reorder_mem_ctrl : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL4_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL4_reorder_mem_ctrl_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL4_reorder_mem_ctrl_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbgen : 1;
        unsigned int niden : 1;
        unsigned int spiden : 1;
        unsigned int spniden : 1;
        unsigned int ivp_cfg_reserved_a0_ctrl : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_dbgen_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_dbgen_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_niden_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_niden_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_spiden_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_spiden_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_spniden_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_spniden_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_ivp_cfg_reserved_a0_ctrl_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC0_ivp_cfg_reserved_a0_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp_cfg_reserved_a1_ctrl : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC1_ivp_cfg_reserved_a1_ctrl_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_RESERVE_FOR_EC1_ivp_cfg_reserved_a1_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp32_slv_priority : 3;
        unsigned int ddr_priority : 3;
        unsigned int peri_priority : 3;
        unsigned int smmu_cfg_priority : 3;
        unsigned int ap_cfg_priority : 3;
        unsigned int reserved_0 : 1;
        unsigned int ivp_core_priority : 3;
        unsigned int ivp_dma_priority : 3;
        unsigned int noc_cfg_priority : 3;
        unsigned int vp_intf1_priority : 3;
        unsigned int vp_intf2_priority : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp32_slv_priority_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp32_slv_priority_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ddr_priority_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ddr_priority_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_peri_priority_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_peri_priority_END (8)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_smmu_cfg_priority_START (9)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_smmu_cfg_priority_END (11)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ap_cfg_priority_START (12)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ap_cfg_priority_END (14)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp_core_priority_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp_core_priority_END (18)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp_dma_priority_START (19)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_ivp_dma_priority_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_noc_cfg_priority_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_noc_cfg_priority_END (24)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_vp_intf1_priority_START (25)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_vp_intf1_priority_END (27)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_vp_intf2_priority_START (28)
#define SOC_IVP_DSP_SUBSYS_CFG_INTERCONNECT_PRIORITY_CFG_vp_intf2_priority_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int processor_wr_qos : 4;
        unsigned int processor_rd_qos : 4;
        unsigned int micro_dma_wr_qos : 4;
        unsigned int micro_dma_rd_qos : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_processor_wr_qos_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_processor_wr_qos_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_processor_rd_qos_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_processor_rd_qos_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_micro_dma_wr_qos_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_micro_dma_wr_qos_END (11)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_micro_dma_rd_qos_START (12)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SYSTEM_QOS_CFG_micro_dma_rd_qos_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dram1_mem_ctrls : 16;
        unsigned int iram_mem_ctrls : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_dram1_mem_ctrls_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_dram1_mem_ctrls_END (15)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_iram_mem_ctrls_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL0_iram_mem_ctrls_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dcache_mem_ctrls : 16;
        unsigned int dram0_mem_ctrls : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_dcache_mem_ctrls_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_dcache_mem_ctrls_END (15)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_dram0_mem_ctrls_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL1_dram0_mem_ctrls_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icache_mem_ctrls : 16;
        unsigned int smmu_mem_ctrls : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_icache_mem_ctrls_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_icache_mem_ctrls_END (15)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_smmu_mem_ctrls_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_MEM_CTRL2_smmu_mem_ctrls_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int crg_wdg_if_gt_st : 1;
        unsigned int crg_wdg_cnt_gt_st : 1;
        unsigned int crg_timer0_if_gt_st : 1;
        unsigned int crg_timer0_cnt_gt_st : 1;
        unsigned int crg_timer1_if_gt_st : 1;
        unsigned int crg_timer1_cnt_gt_st : 1;
        unsigned int reserved : 26;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_wdg_if_gt_st_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_wdg_if_gt_st_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_wdg_cnt_gt_st_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_wdg_cnt_gt_st_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer0_if_gt_st_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer0_if_gt_st_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer0_cnt_gt_st_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer0_cnt_gt_st_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer1_if_gt_st_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer1_if_gt_st_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer1_cnt_gt_st_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_CRG_PERI_GT_ST_crg_timer1_cnt_gt_st_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_tbu_awake_bypass : 1;
        unsigned int smmu_tcu_awake_bypass : 1;
        unsigned int smmu_tbu_hwgt_bypass : 1;
        unsigned int smmu_tcu_hwgt_bypass : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tbu_awake_bypass_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tbu_awake_bypass_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tcu_awake_bypass_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tcu_awake_bypass_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tbu_hwgt_bypass_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tbu_hwgt_bypass_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tcu_hwgt_bypass_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_AWAKEBYPASS_smmu_tcu_hwgt_bypass_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_tbu_pwr_handshake_st : 1;
        unsigned int smmu_tcu_pwr_handshake_st : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_smmu_tbu_pwr_handshake_st_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_smmu_tbu_pwr_handshake_st_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_smmu_tcu_pwr_handshake_st_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_PWR_HANDSHAKE_ST_smmu_tcu_pwr_handshake_st_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dlock_bp_timer0 : 1;
        unsigned int dlock_bp_timer1 : 1;
        unsigned int dlock_bp_wdg : 1;
        unsigned int dlock_bp_vpcfg : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_timer0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_timer0_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_timer1_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_timer1_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_wdg_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_wdg_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_vpcfg_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_DLOCK_BYPASS_dlock_bp_vpcfg_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_en : 1;
        unsigned int addr_mon1_en : 1;
        unsigned int addr_mon2_en : 1;
        unsigned int addr_mon3_en : 1;
        unsigned int addr_mon4_en : 1;
        unsigned int addr_mon5_en : 1;
        unsigned int addr_mon6_en : 1;
        unsigned int addr_mon7_en : 1;
        unsigned int reserved_0 : 8;
        unsigned int wch_sel : 2;
        unsigned int rch_sel : 2;
        unsigned int reserved_1 : 4;
        unsigned int wch_illegal_remap_en : 1;
        unsigned int rch_illegal_remap_en : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon0_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon0_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon1_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon1_en_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon2_en_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon2_en_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon3_en_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon3_en_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon4_en_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon4_en_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon5_en_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon5_en_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon6_en_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon6_en_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon7_en_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_addr_mon7_en_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_wch_sel_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_wch_sel_END (17)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_rch_sel_START (18)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_rch_sel_END (19)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_wch_illegal_remap_en_START (24)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_wch_illegal_remap_en_END (24)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_rch_illegal_remap_en_START (25)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_EN_rch_illegal_remap_en_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_CLR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_CLR_addr_mon_clr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_CLR_addr_mon_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_intr_en : 1;
        unsigned int addr_mon1_intr_en : 1;
        unsigned int addr_mon2_intr_en : 1;
        unsigned int addr_mon3_intr_en : 1;
        unsigned int addr_mon4_intr_en : 1;
        unsigned int addr_mon5_intr_en : 1;
        unsigned int addr_mon6_intr_en : 1;
        unsigned int addr_mon7_intr_en : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon0_intr_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon0_intr_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon1_intr_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon1_intr_en_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon2_intr_en_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon2_intr_en_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon3_intr_en_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon3_intr_en_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon4_intr_en_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon4_intr_en_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon5_intr_en_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon5_intr_en_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon6_intr_en_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon6_intr_en_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon7_intr_en_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_EN_addr_mon7_intr_en_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon7_arhit : 1;
        unsigned int addr_mon7_awhit : 1;
        unsigned int addr_mon6_arhit : 1;
        unsigned int addr_mon6_awhit : 1;
        unsigned int addr_mon5_arhit : 1;
        unsigned int addr_mon5_awhit : 1;
        unsigned int addr_mon4_arhit : 1;
        unsigned int addr_mon4_awhit : 1;
        unsigned int addr_mon3_arhit : 1;
        unsigned int addr_mon3_awhit : 1;
        unsigned int addr_mon2_arhit : 1;
        unsigned int addr_mon2_awhit : 1;
        unsigned int addr_mon1_arhit : 1;
        unsigned int addr_mon1_awhit : 1;
        unsigned int addr_mon0_arhit : 1;
        unsigned int addr_mon0_awhit : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon7_arhit_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon7_arhit_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon7_awhit_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon7_awhit_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon6_arhit_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon6_arhit_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon6_awhit_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon6_awhit_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon5_arhit_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon5_arhit_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon5_awhit_START (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon5_awhit_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon4_arhit_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon4_arhit_END (6)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon4_awhit_START (7)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon4_awhit_END (7)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon3_arhit_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon3_arhit_END (8)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon3_awhit_START (9)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon3_awhit_END (9)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon2_arhit_START (10)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon2_arhit_END (10)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon2_awhit_START (11)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon2_awhit_END (11)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon1_arhit_START (12)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon1_arhit_END (12)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon1_awhit_START (13)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon1_awhit_END (13)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon0_arhit_START (14)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon0_arhit_END (14)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon0_awhit_START (15)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON_INTR_STAT_addr_mon0_awhit_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_BASE_addr_mon0_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_BASE_addr_mon0_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_LEN_addr_mon0_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_ADDR_LEN_addr_mon0_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_AWADDR_addr_mon0_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_AWADDR_addr_mon0_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon0_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_ARADDR_addr_mon0_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON0_HIT_ARADDR_addr_mon0_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon1_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_BASE_addr_mon1_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_BASE_addr_mon1_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon1_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_LEN_addr_mon1_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_ADDR_LEN_addr_mon1_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon1_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_AWADDR_addr_mon1_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_AWADDR_addr_mon1_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon1_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_ARADDR_addr_mon1_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON1_HIT_ARADDR_addr_mon1_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon2_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_BASE_addr_mon2_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_BASE_addr_mon2_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon2_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_LEN_addr_mon2_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_ADDR_LEN_addr_mon2_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon2_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_AWADDR_addr_mon2_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_AWADDR_addr_mon2_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon2_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_ARADDR_addr_mon2_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON2_HIT_ARADDR_addr_mon2_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon3_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_BASE_addr_mon3_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_BASE_addr_mon3_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon3_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_LEN_addr_mon3_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_ADDR_LEN_addr_mon3_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon3_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_AWADDR_addr_mon3_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_AWADDR_addr_mon3_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon3_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_ARADDR_addr_mon3_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON3_HIT_ARADDR_addr_mon3_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon4_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_BASE_addr_mon4_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_BASE_addr_mon4_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon4_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_LEN_addr_mon4_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_ADDR_LEN_addr_mon4_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon4_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_AWADDR_addr_mon4_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_AWADDR_addr_mon4_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon4_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_ARADDR_addr_mon4_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON4_HIT_ARADDR_addr_mon4_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon5_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_BASE_addr_mon5_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_BASE_addr_mon5_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon5_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_LEN_addr_mon5_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_ADDR_LEN_addr_mon5_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon5_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_AWADDR_addr_mon5_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_AWADDR_addr_mon5_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon5_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_ARADDR_addr_mon5_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON5_HIT_ARADDR_addr_mon5_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon6_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_BASE_addr_mon6_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_BASE_addr_mon6_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon6_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_LEN_addr_mon6_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_ADDR_LEN_addr_mon6_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon6_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_AWADDR_addr_mon6_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_AWADDR_addr_mon6_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon6_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_ARADDR_addr_mon6_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON6_HIT_ARADDR_addr_mon6_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon7_addr_base : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_BASE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_BASE_addr_mon7_addr_base_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_BASE_addr_mon7_addr_base_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon7_addr_len : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_LEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_LEN_addr_mon7_addr_len_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_ADDR_LEN_addr_mon7_addr_len_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon7_hit_awaddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_AWADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_AWADDR_addr_mon7_hit_awaddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_AWADDR_addr_mon7_hit_awaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_mon7_hit_araddr : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_ARADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_ARADDR_addr_mon7_hit_araddr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_ADDR_MON7_HIT_ARADDR_addr_mon7_hit_araddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gt_bclk_smmu_soft : 1;
        unsigned int gt_cclk_smmu_soft : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_gt_bclk_smmu_soft_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_gt_bclk_smmu_soft_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_gt_cclk_smmu_soft_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SW_GT_gt_cclk_smmu_soft_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int st_smmu_bclk : 1;
        unsigned int st_smmu_cclk : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_st_smmu_bclk_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_st_smmu_bclk_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_st_smmu_cclk_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_GT_ST_st_smmu_cclk_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cactive_smmu_bclk_cnt : 6;
        unsigned int cactive_smmu_cclk_cnt : 6;
        unsigned int reserved : 20;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_cactive_smmu_bclk_cnt_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_cactive_smmu_bclk_cnt_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_cactive_smmu_cclk_cnt_START (6)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_HW_GT_CNT_cactive_smmu_cclk_cnt_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int brst_smmu_en : 1;
        unsigned int crst_smmu_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_brst_smmu_en_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_brst_smmu_en_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_crst_smmu_en_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_EN_crst_smmu_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int brst_smmu_dis : 1;
        unsigned int crst_smmu_dis : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_brst_smmu_dis_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_brst_smmu_dis_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_crst_smmu_dis_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_DIS_crst_smmu_dis_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int brst_smmu_st : 1;
        unsigned int crst_smmu_st : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_brst_smmu_st_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_brst_smmu_st_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_crst_smmu_st_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_RST_ST_crst_smmu_st_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pa_msb_strm0 : 5;
        unsigned int reserved_0 : 3;
        unsigned int pa_msb_bypass : 7;
        unsigned int reserved_1 : 1;
        unsigned int pa_msb_bypass_ptw : 7;
        unsigned int reserved_2 : 1;
        unsigned int bypass_smmu_pa_msb : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_strm0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_strm0_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_bypass_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_bypass_END (14)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_bypass_ptw_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_pa_msb_bypass_ptw_END (22)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_bypass_smmu_pa_msb_START (24)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_FAMA_CTRL0_bypass_smmu_pa_msb_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr0 : 22;
        unsigned int icfg_addr_scr0_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_icfg_addr_scr0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_icfg_addr_scr0_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_icfg_addr_scr0_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_0_icfg_addr_scr0_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len0 : 22;
        unsigned int icfg_addr_len0_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_icfg_addr_len0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_icfg_addr_len0_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_icfg_addr_len0_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_1_icfg_addr_len0_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_fama_icfg_addr_dst0 : 22;
        unsigned int icfg_fama_addr_msb0 : 5;
        unsigned int icfg_addr_dst0_reserved : 5;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_fama_icfg_addr_dst0_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_fama_icfg_addr_dst0_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_fama_addr_msb0_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_fama_addr_msb0_END (26)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_addr_dst0_reserved_START (27)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP0_2_icfg_addr_dst0_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr1 : 22;
        unsigned int icfg_addr_scr1_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_icfg_addr_scr1_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_icfg_addr_scr1_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_icfg_addr_scr1_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_0_icfg_addr_scr1_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len1 : 22;
        unsigned int icfg_addr_len1_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_icfg_addr_len1_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_icfg_addr_len1_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_icfg_addr_len1_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_1_icfg_addr_len1_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst1 : 27;
        unsigned int icfg_addr_dst1_reserved : 5;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_icfg_addr_dst1_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_icfg_addr_dst1_END (26)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_icfg_addr_dst1_reserved_START (27)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP1_2_icfg_addr_dst1_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr2 : 22;
        unsigned int icfg_addr_scr2_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_icfg_addr_scr2_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_icfg_addr_scr2_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_icfg_addr_scr2_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_0_icfg_addr_scr2_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len2 : 22;
        unsigned int icfg_addr_len2_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_icfg_addr_len2_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_icfg_addr_len2_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_icfg_addr_len2_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_1_icfg_addr_len2_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst2 : 27;
        unsigned int icfg_addr_dst2_reserved : 5;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_icfg_addr_dst2_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_icfg_addr_dst2_END (26)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_icfg_addr_dst2_reserved_START (27)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP2_2_icfg_addr_dst2_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_scr3 : 22;
        unsigned int icfg_addr_scr3_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_icfg_addr_scr3_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_icfg_addr_scr3_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_icfg_addr_scr3_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_0_icfg_addr_scr3_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_len3 : 22;
        unsigned int icfg_addr_len3_reserved : 10;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_icfg_addr_len3_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_icfg_addr_len3_END (21)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_icfg_addr_len3_reserved_START (22)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_1_icfg_addr_len3_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icfg_addr_dst3 : 27;
        unsigned int icfg_addr_dst3_reserved : 5;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_icfg_addr_dst3_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_icfg_addr_dst3_END (26)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_icfg_addr_dst3_reserved_START (27)
#define SOC_IVP_DSP_SUBSYS_CFG_FAMA_ADDR_REMAP3_2_icfg_addr_dst3_reserved_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all1 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP1_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP1_pdebug_all1_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP1_pdebug_all1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all2 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP2_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP2_pdebug_all2_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP2_pdebug_all2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all3 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP3_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP3_pdebug_all3_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP3_pdebug_all3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all4 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP4_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP4_pdebug_all4_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP4_pdebug_all4_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all5 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP5_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP5_pdebug_all5_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP5_pdebug_all5_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all6 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP6_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP6_pdebug_all6_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP6_pdebug_all6_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all7 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP7_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP7_pdebug_all7_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP7_pdebug_all7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pdebug_all8 : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP8_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP8_pdebug_all8_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP_DEBUG_SIG_GRP8_pdebug_all8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int subsys_version_num : 32;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SUBSYS_VERSION_NUM_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SUBSYS_VERSION_NUM_subsys_version_num_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SUBSYS_VERSION_NUM_subsys_version_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ivp32_slv_sec_sel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP32_SLV_SEC_SEL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SLV_SEC_SEL_ivp32_slv_sec_sel_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_SLV_SEC_SEL_ivp32_slv_sec_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dma_rd_sec_sel : 1;
        unsigned int dma_wr_sec_sel : 1;
        unsigned int processor_rd_sec_sel : 1;
        unsigned int process_wr_sec_sel : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_dma_rd_sec_sel_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_dma_rd_sec_sel_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_dma_wr_sec_sel_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_dma_wr_sec_sel_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_processor_rd_sec_sel_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_processor_rd_sec_sel_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_process_wr_sec_sel_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_SEC_SEL_process_wr_sec_sel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer0_if_sec_sel : 1;
        unsigned int timer1_if_sec_sel : 1;
        unsigned int wdg_if_sec_sel : 1;
        unsigned int cfg_if_sec_sel : 1;
        unsigned int vpcfg_if_sec_sel : 1;
        unsigned int reserved_0 : 11;
        unsigned int timer0_if_sec_sel_wr_en : 1;
        unsigned int timer1_if_sec_sel_wr_en : 1;
        unsigned int wdg_if_sec_sel_wr_en : 1;
        unsigned int cfg_if_sec_sel_wr_en : 1;
        unsigned int vpcfg_if_sec_sel_wr_en : 1;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer0_if_sec_sel_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer0_if_sec_sel_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer1_if_sec_sel_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer1_if_sec_sel_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_wdg_if_sec_sel_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_wdg_if_sec_sel_END (2)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_cfg_if_sec_sel_START (3)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_cfg_if_sec_sel_END (3)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_vpcfg_if_sec_sel_START (4)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_vpcfg_if_sec_sel_END (4)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer0_if_sec_sel_wr_en_START (16)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer0_if_sec_sel_wr_en_END (16)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer1_if_sec_sel_wr_en_START (17)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_timer1_if_sec_sel_wr_en_END (17)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_wdg_if_sec_sel_wr_en_START (18)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_wdg_if_sec_sel_wr_en_END (18)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_cfg_if_sec_sel_wr_en_START (19)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_cfg_if_sec_sel_wr_en_END (19)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_vpcfg_if_sec_sel_wr_en_START (20)
#define SOC_IVP_DSP_SUBSYS_CFG_APB_IF_SEC_SEL_vpcfg_if_sec_sel_wr_en_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start_remap_addr : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_START_REMAP_ADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_START_REMAP_ADDR_start_remap_addr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_START_REMAP_ADDR_start_remap_addr_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int remap_length : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_REMAP_LENGTH_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_LENGTH_remap_length_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_LENGTH_remap_length_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_remap_addr : 14;
        unsigned int reserved : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_DDR_REMAP_ADDR_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_DDR_REMAP_ADDR_ddr_remap_addr_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_DDR_REMAP_ADDR_ddr_remap_addr_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int start_remap_addr_sec_sel : 1;
        unsigned int remap_length_sec_sel : 1;
        unsigned int ddr_remap_addr_sec_sel : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_start_remap_addr_sec_sel_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_start_remap_addr_sec_sel_END (0)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_remap_length_sec_sel_START (1)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_remap_length_sec_sel_END (1)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_ddr_remap_addr_sec_sel_START (2)
#define SOC_IVP_DSP_SUBSYS_CFG_REMAP_SECURITY_CFG_ddr_remap_addr_sec_sel_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_dsp_core_mid : 6;
        unsigned int reserved_0 : 2;
        unsigned int cfg_micro_dma_mid : 6;
        unsigned int reserved_1 : 18;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_cfg_dsp_core_mid_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_cfg_dsp_core_mid_END (5)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_cfg_micro_dma_mid_START (8)
#define SOC_IVP_DSP_SUBSYS_CFG_IVP32_MST_MID_CFG_cfg_micro_dma_mid_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int integ_sec_override : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_INTEG_SEC_OVERRIDE_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_INTEG_SEC_OVERRIDE_integ_sec_override_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_INTEG_SEC_OVERRIDE_integ_sec_override_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spniden : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IVP_DSP_SUBSYS_CFG_SMMU_SPNIDEN_UNION;
#endif
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SPNIDEN_spniden_START (0)
#define SOC_IVP_DSP_SUBSYS_CFG_SMMU_SPNIDEN_spniden_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
