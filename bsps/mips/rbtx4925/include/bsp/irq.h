/**
 * @file
 *
 * @ingroup bsp_interrupt
 *
 * @brief interrupt definitions.
 */

/*
 *  COPYRIGHT (c) 1989-2012.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifndef LIBBSP_MIPS_TX4925_IRQ_H
#define LIBBSP_MIPS_TX4925_IRQ_H

#ifndef ASM
  #include <rtems.h>
  #include <rtems/irq.h>
  #include <rtems/irq-extension.h>
  #include <rtems/score/mips.h>
#endif

/**
 * @addtogroup bsp_interrupt
 *
 * @{
 */

/*
 *  Interrupt Vector Numbers
 *
 */
#define BSP_INTERRUPT_VECTOR_MIN   0
#define TX4925_IRQ_RSV1        MIPS_INTERRUPT_BASE+0
#define TX4925_IRQ_WTE         MIPS_INTERRUPT_BASE+1
#define TX4925_IRQ_INT0        MIPS_INTERRUPT_BASE+2
#define TX4925_IRQ_INT1        MIPS_INTERRUPT_BASE+3
#define TX4925_IRQ_INT2        MIPS_INTERRUPT_BASE+4
#define TX4925_IRQ_INT3        MIPS_INTERRUPT_BASE+5
#define TX4925_IRQ_INT4        MIPS_INTERRUPT_BASE+6
#define TX4925_IRQ_INT5        MIPS_INTERRUPT_BASE+7
#define TX4925_IRQ_INT6        MIPS_INTERRUPT_BASE+8
#define TX4925_IRQ_INT7        MIPS_INTERRUPT_BASE+9
#define TX4925_IRQ_RSV2        MIPS_INTERRUPT_BASE+10
#define TX4925_IRQ_NAND        MIPS_INTERRUPT_BASE+11
#define TX4925_IRQ_SIO0        MIPS_INTERRUPT_BASE+12
#define TX4925_IRQ_SIO1        MIPS_INTERRUPT_BASE+13
#define TX4925_IRQ_DMAC0       MIPS_INTERRUPT_BASE+14
#define TX4925_IRQ_DMAC1       MIPS_INTERRUPT_BASE+15
#define TX4925_IRQ_DMAC2       MIPS_INTERRUPT_BASE+16
#define TX4925_IRQ_DMAC3       MIPS_INTERRUPT_BASE+17
#define TX4925_IRQ_IRC         MIPS_INTERRUPT_BASE+18
#define TX4925_IRQ_PDMAC       MIPS_INTERRUPT_BASE+19
#define TX4925_IRQ_PCIC        MIPS_INTERRUPT_BASE+20
#define TX4925_IRQ_TMR0        MIPS_INTERRUPT_BASE+21
#define TX4925_IRQ_TMR1        MIPS_INTERRUPT_BASE+22
#define TX4925_IRQ_TMR2        MIPS_INTERRUPT_BASE+23
#define TX4925_IRQ_SPI         MIPS_INTERRUPT_BASE+24
#define TX4925_IRQ_RTC         MIPS_INTERRUPT_BASE+25
#define TX4925_IRQ_ACLC        MIPS_INTERRUPT_BASE+26
#define TX4925_IRQ_ACLCPME     MIPS_INTERRUPT_BASE+27
#define TX4925_IRQ_CHI         MIPS_INTERRUPT_BASE+28
#define TX4925_IRQ_PCIERR      MIPS_INTERRUPT_BASE+29
#define TX4925_IRQ_PCIPME      MIPS_INTERRUPT_BASE+30
#define TX4925_IRQ_RSV3        MIPS_INTERRUPT_BASE+31

#define TX4925_IRQ_SOFTWARE_1  MIPS_INTERRUPT_BASE+32
#define TX4925_IRQ_SOFTWARE_2  MIPS_INTERRUPT_BASE+33
#define TX4925_MAXIMUM_VECTORS MIPS_INTERRUPT_BASE+34

#define BSP_INTERRUPT_VECTOR_MAX TX4925_MAXIMUM_VECTORS

/** @} */

#endif /* LIBBSP_MIPS_ TX4925_IRQ_H */
