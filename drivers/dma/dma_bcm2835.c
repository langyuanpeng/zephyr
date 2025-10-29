#include "dma_bcm2835.h"



#define DT_DRV_COMPAT brcm_bcm2835_dma

#define DEFINE_DMA_BCM2835(index)   \
    

DT_INST_FOREACH_STATUS_OKAY(DEFINE_DMA_BCM2835)