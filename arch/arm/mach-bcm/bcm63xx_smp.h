#ifndef __BCM63XX_SMP_H
#define __BCM63XX_SMP_H

struct device_node;

extern void bcm63138_secondary_startup(void);
extern int bcm63xx_pmb_power_on_cpu(struct device_node *dn);

#endif /* __BCM63XX_SMP_H */
