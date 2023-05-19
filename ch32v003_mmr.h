#include <stdint.h>

typedef struct {
	uint32_t :1;
	uint32_t PDDS :1;
	uint32_t :2;
	uint32_t PVDE :1;
	uint32_t PLS :3;
	uint32_t :24;
} pwr_ctlr_t;

typedef struct {
	uint32_t :2;
	uint32_t PVDO :1;
	uint32_t :29;
} pwr_csr_t;

typedef struct {
	uint32_t :1;
	uint32_t AWUEN :1;
	uint32_t :30;
} pwr_awucsr_t;

typedef struct {
	uint32_t AWUAPR :6;
	uint32_t :26;
} pwr_awuapr_t;

typedef struct {
	uint32_t AWUPSC :4;
	uint32_t :28;
} pwr_awupsc_t;

typedef struct {
	uint32_t HSION :1;
	uint32_t HSIRDY :1;
	uint32_t :1;
	uint32_t HSITRIM :5;
	uint32_t HSICAL :8;
	uint32_t HSEON :1;
	uint32_t HSERDY :1;
	uint32_t HSEBYP :1;
	uint32_t CSSON :1;
	uint32_t :4;
	uint32_t PLLON :1;
	uint32_t PLLRDY :1;
	uint32_t :6;
} rcc_ctlr_t;

typedef struct {
	uint32_t SW :2;
	uint32_t SWS :2;
	uint32_t HPRE :4;
	uint32_t PPRE1 :3;
	uint32_t PPRE2 :3;
	uint32_t ADCPRE :2;
	uint32_t PLLSRC :1;
	uint32_t :7;
	uint32_t MCO :3;
	uint32_t :5;
} rcc_cfgr0_t;

typedef struct {
	uint32_t LSIRDYF :1;
	uint32_t :1;
	uint32_t HSIRDYF :1;
	uint32_t HSERDYF :1;
	uint32_t PLLRDYF :1;
	uint32_t :2;
	uint32_t CSSF :1;
	uint32_t LSIRDYIE :1;
	uint32_t :1;
	uint32_t HSIRDYIE :1;
	uint32_t HSERDYIE :1;
	uint32_t PLLRDYIE :1;
	uint32_t :3;
	uint32_t LSIRDYC :1;
	uint32_t :1;
	uint32_t HSIRDYC :1;
	uint32_t HSERDYC :1;
	uint32_t PLLRDYC :1;
	uint32_t :2;
	uint32_t CSSC :1;
	uint32_t :8;
} rcc_intr_t;

typedef struct {
	uint32_t AFIORST :1;
	uint32_t :1;
	uint32_t IOPARST :1;
	uint32_t :1;
	uint32_t IOPCRST :1;
	uint32_t IOPDRST :1;
	uint32_t :3;
	uint32_t ADC1RST :1;
	uint32_t :1;
	uint32_t TIM1RST :1;
	uint32_t SPI1RST :1;
	uint32_t :1;
	uint32_t USART1RST :1;
	uint32_t :17;
} rcc_apb2prstr_t;

typedef struct {
	uint32_t :11;
	uint32_t WWDGRST :1;
	uint32_t :9;
	uint32_t I2C1RST :1;
	uint32_t :6;
	uint32_t PWRRST :1;
	uint32_t :3;
} rcc_apb1prstr_t;

typedef struct {
	uint32_t DMA1EN :1;
	uint32_t :1;
	uint32_t SRAMEN :1;
	uint32_t :29;
} rcc_ahbpcenr_t;

typedef struct {
	uint32_t AFIOEN :1;
	uint32_t :1;
	uint32_t IOPAEN :1;
	uint32_t :1;
	uint32_t IOPCEN :1;
	uint32_t IOPDEN :1;
	uint32_t :3;
	uint32_t ADC1EN :1;
	uint32_t :1;
	uint32_t TIM1EN :1;
	uint32_t SPI1EN :1;
	uint32_t :1;
	uint32_t USART1EN :1;
	uint32_t :17;
} rcc_apb2pcenr_t;

typedef struct {
	uint32_t TIM2EN :1;
	uint32_t :10;
	uint32_t WWDGEN :1;
	uint32_t :9;
	uint32_t I2C1EN :1;
	uint32_t :6;
	uint32_t PWREN :1;
	uint32_t :3;
} rcc_apb1pcenr_t;

typedef struct {
	uint32_t LSION :1;
	uint32_t LSIRDY :1;
	uint32_t :22;
	uint32_t RMVF :1;
	uint32_t :1;
	uint32_t PINRSTF :1;
	uint32_t PORRSTF :1;
	uint32_t SFTRSTF :1;
	uint32_t IWDGRSTF :1;
	uint32_t WWDGRSTF :1;
	uint32_t LPWRRSTF :1;
} rcc_rstsckr_t;

typedef struct {
	uint32_t PLL_CFG :4;
	uint32_t :2;
	uint32_t LOCKUP_EN :1;
	uint32_t LOCKUP_RESET :1;
	uint32_t :2;
	uint32_t LDO_TRIM :1;
	uint32_t FLASH_CLK_TRIM :3;
	uint32_t WR_EN :1;
	uint32_t WR_LOCK :1;
	uint32_t OPA_EN :1;
	uint32_t OPA_NSEL :1;
	uint32_t OPA_PSEL :1;
	uint32_t :13;
} extend_extend_ctr_t;

typedef struct {
	uint32_t MODE0 :2;
	uint32_t CNF0 :2;
	uint32_t MODE1 :2;
	uint32_t CNF1 :2;
	uint32_t MODE2 :2;
	uint32_t CNF2 :2;
	uint32_t MODE3 :2;
	uint32_t CNF3 :2;
	uint32_t MODE4 :2;
	uint32_t CNF4 :2;
	uint32_t MODE5 :2;
	uint32_t CNF5 :2;
	uint32_t MODE6 :2;
	uint32_t CNF6 :2;
	uint32_t MODE7 :2;
	uint32_t CNF7 :2;
} gpioa_cfglr_t;

typedef struct {
	uint32_t IDR0 :1;
	uint32_t IDR1 :1;
	uint32_t IDR2 :1;
	uint32_t IDR3 :1;
	uint32_t IDR4 :1;
	uint32_t IDR5 :1;
	uint32_t IDR6 :1;
	uint32_t IDR7 :1;
	uint32_t :24;
} gpioa_indr_t;

typedef struct {
	uint32_t ODR0 :1;
	uint32_t ODR1 :1;
	uint32_t ODR2 :1;
	uint32_t ODR3 :1;
	uint32_t ODR4 :1;
	uint32_t ODR5 :1;
	uint32_t ODR6 :1;
	uint32_t ODR7 :1;
	uint32_t :24;
} gpioa_outdr_t;

typedef struct {
	uint32_t BS0 :1;
	uint32_t BS1 :1;
	uint32_t BS2 :1;
	uint32_t BS3 :1;
	uint32_t BS4 :1;
	uint32_t BS5 :1;
	uint32_t BS6 :1;
	uint32_t BS7 :1;
	uint32_t :8;
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :8;
} gpioa_bshr_t;

typedef struct {
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :24;
} gpioa_bcr_t;

typedef struct {
	uint32_t LCK0 :1;
	uint32_t LCK1 :1;
	uint32_t LCK2 :1;
	uint32_t LCK3 :1;
	uint32_t LCK4 :1;
	uint32_t LCK5 :1;
	uint32_t LCK6 :1;
	uint32_t LCK7 :1;
	uint32_t LCKK :1;
	uint32_t :23;
} gpioa_lckr_t;

typedef struct {
	uint32_t MODE0 :2;
	uint32_t CNF0 :2;
	uint32_t MODE1 :2;
	uint32_t CNF1 :2;
	uint32_t MODE2 :2;
	uint32_t CNF2 :2;
	uint32_t MODE3 :2;
	uint32_t CNF3 :2;
	uint32_t MODE4 :2;
	uint32_t CNF4 :2;
	uint32_t MODE5 :2;
	uint32_t CNF5 :2;
	uint32_t MODE6 :2;
	uint32_t CNF6 :2;
	uint32_t MODE7 :2;
	uint32_t CNF7 :2;
} gpioc_cfglr_t;

typedef struct {
	uint32_t IDR0 :1;
	uint32_t IDR1 :1;
	uint32_t IDR2 :1;
	uint32_t IDR3 :1;
	uint32_t IDR4 :1;
	uint32_t IDR5 :1;
	uint32_t IDR6 :1;
	uint32_t IDR7 :1;
	uint32_t :24;
} gpioc_indr_t;

typedef struct {
	uint32_t ODR0 :1;
	uint32_t ODR1 :1;
	uint32_t ODR2 :1;
	uint32_t ODR3 :1;
	uint32_t ODR4 :1;
	uint32_t ODR5 :1;
	uint32_t ODR6 :1;
	uint32_t ODR7 :1;
	uint32_t :24;
} gpioc_outdr_t;

typedef struct {
	uint32_t BS0 :1;
	uint32_t BS1 :1;
	uint32_t BS2 :1;
	uint32_t BS3 :1;
	uint32_t BS4 :1;
	uint32_t BS5 :1;
	uint32_t BS6 :1;
	uint32_t BS7 :1;
	uint32_t :8;
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :8;
} gpioc_bshr_t;

typedef struct {
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :24;
} gpioc_bcr_t;

typedef struct {
	uint32_t LCK0 :1;
	uint32_t LCK1 :1;
	uint32_t LCK2 :1;
	uint32_t LCK3 :1;
	uint32_t LCK4 :1;
	uint32_t LCK5 :1;
	uint32_t LCK6 :1;
	uint32_t LCK7 :1;
	uint32_t LCKK :1;
	uint32_t :23;
} gpioc_lckr_t;

typedef struct {
	uint32_t MODE0 :2;
	uint32_t CNF0 :2;
	uint32_t MODE1 :2;
	uint32_t CNF1 :2;
	uint32_t MODE2 :2;
	uint32_t CNF2 :2;
	uint32_t MODE3 :2;
	uint32_t CNF3 :2;
	uint32_t MODE4 :2;
	uint32_t CNF4 :2;
	uint32_t MODE5 :2;
	uint32_t CNF5 :2;
	uint32_t MODE6 :2;
	uint32_t CNF6 :2;
	uint32_t MODE7 :2;
	uint32_t CNF7 :2;
} gpiod_cfglr_t;

typedef struct {
	uint32_t IDR0 :1;
	uint32_t IDR1 :1;
	uint32_t IDR2 :1;
	uint32_t IDR3 :1;
	uint32_t IDR4 :1;
	uint32_t IDR5 :1;
	uint32_t IDR6 :1;
	uint32_t IDR7 :1;
	uint32_t :24;
} gpiod_indr_t;

typedef struct {
	uint32_t ODR0 :1;
	uint32_t ODR1 :1;
	uint32_t ODR2 :1;
	uint32_t ODR3 :1;
	uint32_t ODR4 :1;
	uint32_t ODR5 :1;
	uint32_t ODR6 :1;
	uint32_t ODR7 :1;
	uint32_t :24;
} gpiod_outdr_t;

typedef struct {
	uint32_t BS0 :1;
	uint32_t BS1 :1;
	uint32_t BS2 :1;
	uint32_t BS3 :1;
	uint32_t BS4 :1;
	uint32_t BS5 :1;
	uint32_t BS6 :1;
	uint32_t BS7 :1;
	uint32_t :8;
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :8;
} gpiod_bshr_t;

typedef struct {
	uint32_t BR0 :1;
	uint32_t BR1 :1;
	uint32_t BR2 :1;
	uint32_t BR3 :1;
	uint32_t BR4 :1;
	uint32_t BR5 :1;
	uint32_t BR6 :1;
	uint32_t BR7 :1;
	uint32_t :24;
} gpiod_bcr_t;

typedef struct {
	uint32_t LCK0 :1;
	uint32_t LCK1 :1;
	uint32_t LCK2 :1;
	uint32_t LCK3 :1;
	uint32_t LCK4 :1;
	uint32_t LCK5 :1;
	uint32_t LCK6 :1;
	uint32_t LCK7 :1;
	uint32_t LCKK :1;
	uint32_t :23;
} gpiod_lckr_t;

typedef struct {
	uint32_t SPI1RM :1;
	uint32_t I2C1RM :1;
	uint32_t USART1RM :1;
	uint32_t :3;
	uint32_t TIM1RM :2;
	uint32_t TIM2RM :2;
	uint32_t :5;
	uint32_t PA12RM :1;
	uint32_t :1;
	uint32_t ADC1_ETRGINJ_RM :1;
	uint32_t ADC1_ETRGREG_RM :1;
	uint32_t :2;
	uint32_t USART1REMAP1 :1;
	uint32_t I2C1REMAP1 :1;
	uint32_t TIM1_IREMAP :1;
	uint32_t SWCFG :3;
	uint32_t :5;
} afio_pcfr_t;

typedef struct {
	uint32_t EXTI0 :2;
	uint32_t EXTI1 :2;
	uint32_t EXTI2 :2;
	uint32_t EXTI3 :2;
	uint32_t EXTI4 :2;
	uint32_t EXTI5 :2;
	uint32_t EXTI6 :2;
	uint32_t EXTI7 :2;
	uint32_t :16;
} afio_exticr_t;

typedef struct {
	uint32_t MR0 :1;
	uint32_t MR1 :1;
	uint32_t MR2 :1;
	uint32_t MR3 :1;
	uint32_t MR4 :1;
	uint32_t MR5 :1;
	uint32_t MR6 :1;
	uint32_t MR7 :1;
	uint32_t MR8 :1;
	uint32_t MR9 :1;
	uint32_t :22;
} exti_intenr_t;

typedef struct {
	uint32_t MR0 :1;
	uint32_t MR1 :1;
	uint32_t MR2 :1;
	uint32_t MR3 :1;
	uint32_t MR4 :1;
	uint32_t MR5 :1;
	uint32_t MR6 :1;
	uint32_t MR7 :1;
	uint32_t MR8 :1;
	uint32_t MR9 :1;
	uint32_t :22;
} exti_evenr_t;

typedef struct {
	uint32_t TR0 :1;
	uint32_t TR1 :1;
	uint32_t TR2 :1;
	uint32_t TR3 :1;
	uint32_t TR4 :1;
	uint32_t TR5 :1;
	uint32_t TR6 :1;
	uint32_t TR7 :1;
	uint32_t TR8 :1;
	uint32_t TR9 :1;
	uint32_t :22;
} exti_rtenr_t;

typedef struct {
	uint32_t TR0 :1;
	uint32_t TR1 :1;
	uint32_t TR2 :1;
	uint32_t TR3 :1;
	uint32_t TR4 :1;
	uint32_t TR5 :1;
	uint32_t TR6 :1;
	uint32_t TR7 :1;
	uint32_t TR8 :1;
	uint32_t TR9 :1;
	uint32_t :22;
} exti_ftenr_t;

typedef struct {
	uint32_t SWIER0 :1;
	uint32_t SWIER1 :1;
	uint32_t SWIER2 :1;
	uint32_t SWIER3 :1;
	uint32_t SWIER4 :1;
	uint32_t SWIER5 :1;
	uint32_t SWIER6 :1;
	uint32_t SWIER7 :1;
	uint32_t SWIER8 :1;
	uint32_t SWIER9 :1;
	uint32_t :22;
} exti_swievr_t;

typedef struct {
	uint32_t PR0 :1;
	uint32_t PR1 :1;
	uint32_t PR2 :1;
	uint32_t PR3 :1;
	uint32_t PR4 :1;
	uint32_t PR5 :1;
	uint32_t PR6 :1;
	uint32_t PR7 :1;
	uint32_t PR8 :1;
	uint32_t PR9 :1;
	uint32_t :22;
} exti_intfr_t;

typedef struct {
	uint32_t GIF1 :1;
	uint32_t TCIF1 :1;
	uint32_t HTIF1 :1;
	uint32_t TEIF1 :1;
	uint32_t GIF2 :1;
	uint32_t TCIF2 :1;
	uint32_t HTIF2 :1;
	uint32_t TEIF2 :1;
	uint32_t GIF3 :1;
	uint32_t TCIF3 :1;
	uint32_t HTIF3 :1;
	uint32_t TEIF3 :1;
	uint32_t GIF4 :1;
	uint32_t TCIF4 :1;
	uint32_t HTIF4 :1;
	uint32_t TEIF4 :1;
	uint32_t GIF5 :1;
	uint32_t TCIF5 :1;
	uint32_t HTIF5 :1;
	uint32_t TEIF5 :1;
	uint32_t GIF6 :1;
	uint32_t TCIF6 :1;
	uint32_t HTIF6 :1;
	uint32_t TEIF6 :1;
	uint32_t GIF7 :1;
	uint32_t TCIF7 :1;
	uint32_t HTIF7 :1;
	uint32_t TEIF7 :1;
	uint32_t :4;
} dma1_intfr_t;

typedef struct {
	uint32_t CGIF1 :1;
	uint32_t CTCIF1 :1;
	uint32_t CHTIF1 :1;
	uint32_t CTEIF1 :1;
	uint32_t CGIF2 :1;
	uint32_t CTCIF2 :1;
	uint32_t CHTIF2 :1;
	uint32_t CTEIF2 :1;
	uint32_t CGIF3 :1;
	uint32_t CTCIF3 :1;
	uint32_t CHTIF3 :1;
	uint32_t CTEIF3 :1;
	uint32_t CGIF4 :1;
	uint32_t CTCIF4 :1;
	uint32_t CHTIF4 :1;
	uint32_t CTEIF4 :1;
	uint32_t CGIF5 :1;
	uint32_t CTCIF5 :1;
	uint32_t CHTIF5 :1;
	uint32_t CTEIF5 :1;
	uint32_t CGIF6 :1;
	uint32_t CTCIF6 :1;
	uint32_t CHTIF6 :1;
	uint32_t CTEIF6 :1;
	uint32_t CGIF7 :1;
	uint32_t CTCIF7 :1;
	uint32_t CHTIF7 :1;
	uint32_t CTEIF7 :1;
	uint32_t :4;
} dma1_intfcr_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr1_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr1_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr2_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr2_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr3_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr3_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr4_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr4_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr5_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr5_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr6_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr6_t;

typedef struct {
	uint32_t EN :1;
	uint32_t TCIE :1;
	uint32_t HTIE :1;
	uint32_t TEIE :1;
	uint32_t DIR :1;
	uint32_t CIRC :1;
	uint32_t PINC :1;
	uint32_t MINC :1;
	uint32_t PSIZE :2;
	uint32_t MSIZE :2;
	uint32_t PL :2;
	uint32_t MEM2MEM :1;
	uint32_t :17;
} dma1_cfgr7_t;

typedef struct {
	uint32_t NDT :16;
	uint32_t :16;
} dma1_cntr7_t;

typedef struct {
	uint32_t KEY :16;
	uint32_t :16;
} iwdg_ctlr_t;

typedef struct {
	uint32_t PR :3;
	uint32_t :29;
} iwdg_pscr_t;

typedef struct {
	uint32_t RL :12;
	uint32_t :20;
} iwdg_rldr_t;

typedef struct {
	uint32_t PVU :1;
	uint32_t RVU :1;
	uint32_t :30;
} iwdg_statr_t;

typedef struct {
	uint32_t T :7;
	uint32_t WDGA :1;
	uint32_t :24;
} wwdg_ctlr_t;

typedef struct {
	uint32_t W :7;
	uint32_t WDGTB :2;
	uint32_t EWI :1;
	uint32_t :22;
} wwdg_cfgr_t;

typedef struct {
	uint32_t WEIF :1;
	uint32_t :31;
} wwdg_statr_t;

typedef struct {
	uint32_t CEN :1;
	uint32_t UDIS :1;
	uint32_t URS :1;
	uint32_t OPM :1;
	uint32_t DIR :1;
	uint32_t CMS :2;
	uint32_t ARPE :1;
	uint32_t CKD :2;
	uint32_t :4;
	uint32_t TMR_CAP_OV_EN :1;
	uint32_t TMR_CAP_LVL_EN :1;
	uint32_t :16;
} tim1_ctlr1_t;

typedef struct {
	uint32_t CCPC :1;
	uint32_t :1;
	uint32_t CCUS :1;
	uint32_t CCDS :1;
	uint32_t MMS :3;
	uint32_t TI1S :1;
	uint32_t OIS1 :1;
	uint32_t OIS1N :1;
	uint32_t OIS2 :1;
	uint32_t OIS2N :1;
	uint32_t OIS3 :1;
	uint32_t OIS3N :1;
	uint32_t OIS4 :1;
	uint32_t :17;
} tim1_ctlr2_t;

typedef struct {
	uint32_t SMS :3;
	uint32_t :1;
	uint32_t TS :3;
	uint32_t MSM :1;
	uint32_t ETF :4;
	uint32_t ETPS :2;
	uint32_t ECE :1;
	uint32_t ETP :1;
	uint32_t :16;
} tim1_smcfgr_t;

typedef struct {
	uint32_t UIE :1;
	uint32_t CC1IE :1;
	uint32_t CC2IE :1;
	uint32_t CC3IE :1;
	uint32_t CC4IE :1;
	uint32_t COMIE :1;
	uint32_t TIE :1;
	uint32_t BIE :1;
	uint32_t UDE :1;
	uint32_t CC1DE :1;
	uint32_t CC2DE :1;
	uint32_t CC3DE :1;
	uint32_t CC4DE :1;
	uint32_t COMDE :1;
	uint32_t TDE :1;
	uint32_t :17;
} tim1_dmaintenr_t;

typedef struct {
	uint32_t UIF :1;
	uint32_t CC1IF :1;
	uint32_t CC2IF :1;
	uint32_t CC3IF :1;
	uint32_t CC4IF :1;
	uint32_t COMIF :1;
	uint32_t TIF :1;
	uint32_t BIF :1;
	uint32_t :1;
	uint32_t CC1OF :1;
	uint32_t CC2OF :1;
	uint32_t CC3OF :1;
	uint32_t CC4OF :1;
	uint32_t :19;
} tim1_intfr_t;

typedef struct {
	uint32_t UG :1;
	uint32_t CC1G :1;
	uint32_t CC2G :1;
	uint32_t CC3G :1;
	uint32_t CC4G :1;
	uint32_t COMG :1;
	uint32_t TG :1;
	uint32_t BG :1;
	uint32_t :24;
} tim1_swevgr_t;

typedef union {
	struct {
		uint32_t CC1S :2;
		uint32_t OC1FE :1;
		uint32_t OC1PE :1;
		uint32_t OC1M :3;
		uint32_t OC1CE :1;
		uint32_t CC2S :2;
		uint32_t OC2FE :1;
		uint32_t OC2PE :1;
		uint32_t OC2M :3;
		uint32_t OC2CE :1;
		uint32_t :16;
	} chctlr1_output_bits;
	struct {
		uint32_t CC1S :2;
		uint32_t IC1PSC :2;
		uint32_t IC1F :4;
		uint32_t CC2S :2;
		uint32_t IC2PCS :2;
		uint32_t IC2F :4;
		uint32_t :16;
	} chctlr1_input_bits;
} tim1_chctlr1_t;

typedef union {
	struct {
		uint32_t CC3S :2;
		uint32_t OC3FE :1;
		uint32_t OC3PE :1;
		uint32_t OC3M :3;
		uint32_t OC3CE :1;
		uint32_t CC4S :2;
		uint32_t OC4FE :1;
		uint32_t OC4PE :1;
		uint32_t OC4M :3;
		uint32_t OC4CE :1;
		uint32_t :16;
	} chctlr2_output_bits;
	struct {
		uint32_t CC3S :2;
		uint32_t IC3PSC :2;
		uint32_t IC3F :4;
		uint32_t CC4S :2;
		uint32_t IC4PSC :2;
		uint32_t IC4F :4;
		uint32_t :16;
	} chctlr2_input_bits;
} tim1_chctlr2_t;

typedef struct {
	uint32_t CC1E :1;
	uint32_t CC1P :1;
	uint32_t CC1NE :1;
	uint32_t CC1NP :1;
	uint32_t CC2E :1;
	uint32_t CC2P :1;
	uint32_t CC2NE :1;
	uint32_t CC2NP :1;
	uint32_t CC3E :1;
	uint32_t CC3P :1;
	uint32_t CC3NE :1;
	uint32_t CC3NP :1;
	uint32_t CC4E :1;
	uint32_t CC4P :1;
	uint32_t :18;
} tim1_ccer_t;

typedef struct {
	uint32_t CNT :16;
	uint32_t :16;
} tim1_cnt_t;

typedef struct {
	uint32_t PSC :16;
	uint32_t :16;
} tim1_psc_t;

typedef struct {
	uint32_t ATRLR :16;
	uint32_t :16;
} tim1_atrlr_t;

typedef struct {
	uint32_t RPTCR :8;
	uint32_t :24;
} tim1_rptcr_t;

typedef struct {
	uint32_t CH1CVR :16;
	uint32_t :16;
} tim1_ch1cvr_t;

typedef struct {
	uint32_t CH2CVR :16;
	uint32_t :16;
} tim1_ch2cvr_t;

typedef struct {
	uint32_t CH3CVR :16;
	uint32_t :16;
} tim1_ch3cvr_t;

typedef struct {
	uint32_t CH4CVR :16;
	uint32_t :16;
} tim1_ch4cvr_t;

typedef struct {
	uint32_t DTG :8;
	uint32_t LOCK :2;
	uint32_t OSSI :1;
	uint32_t OSSR :1;
	uint32_t BKE :1;
	uint32_t BKP :1;
	uint32_t AOE :1;
	uint32_t MOE :1;
	uint32_t :16;
} tim1_bdtr_t;

typedef struct {
	uint32_t DBA :5;
	uint32_t :3;
	uint32_t DBL :5;
	uint32_t :19;
} tim1_dmacfgr_t;

typedef struct {
	uint32_t DMAADR :16;
	uint32_t :16;
} tim1_dmaadr_t;

typedef struct {
	uint32_t CEN :1;
	uint32_t UDIS :1;
	uint32_t URS :1;
	uint32_t OPM :1;
	uint32_t DIR :1;
	uint32_t CMS :2;
	uint32_t ARPE :1;
	uint32_t CKD :2;
	uint32_t :4;
	uint32_t TMR_CAP_OV_EN :1;
	uint32_t TMR_CAP_LVL_EN :1;
	uint32_t :16;
} tim2_ctlr1_t;

typedef struct {
	uint32_t :3;
	uint32_t CCDS :1;
	uint32_t MMS :3;
	uint32_t TI1S :1;
	uint32_t :24;
} tim2_ctlr2_t;

typedef struct {
	uint32_t SMS :3;
	uint32_t :1;
	uint32_t TS :3;
	uint32_t MSM :1;
	uint32_t ETF :4;
	uint32_t ETPS :2;
	uint32_t ECE :1;
	uint32_t ETP :1;
	uint32_t :16;
} tim2_smcfgr_t;

typedef struct {
	uint32_t UIE :1;
	uint32_t CC1IE :1;
	uint32_t CC2IE :1;
	uint32_t CC3IE :1;
	uint32_t CC4IE :1;
	uint32_t :1;
	uint32_t TIE :1;
	uint32_t :1;
	uint32_t UDE :1;
	uint32_t CC1DE :1;
	uint32_t CC2DE :1;
	uint32_t CC3DE :1;
	uint32_t CC4DE :1;
	uint32_t :1;
	uint32_t TDE :1;
	uint32_t :17;
} tim2_dmaintenr_t;

typedef struct {
	uint32_t UIF :1;
	uint32_t CC1IF :1;
	uint32_t CC2IF :1;
	uint32_t CC3IF :1;
	uint32_t CC4IF :1;
	uint32_t :1;
	uint32_t TIF :1;
	uint32_t :2;
	uint32_t CC1OF :1;
	uint32_t CC2OF :1;
	uint32_t CC3OF :1;
	uint32_t CC4OF :1;
	uint32_t :19;
} tim2_intfr_t;

typedef struct {
	uint32_t UG :1;
	uint32_t CC1G :1;
	uint32_t CC2G :1;
	uint32_t CC3G :1;
	uint32_t CC4G :1;
	uint32_t :1;
	uint32_t TG :1;
	uint32_t :25;
} tim2_swevgr_t;

typedef union {
	struct {
		uint32_t CC1S :2;
		uint32_t OC1FE :1;
		uint32_t OC1PE :1;
		uint32_t OC1M :3;
		uint32_t OC1CE :1;
		uint32_t CC2S :2;
		uint32_t OC2FE :1;
		uint32_t OC2PE :1;
		uint32_t OC2M :3;
		uint32_t OC2CE :1;
		uint32_t :16;
	} chctlr1_output_bits;
	struct {
		uint32_t CC1S :2;
		uint32_t IC1PSC :2;
		uint32_t IC1F :4;
		uint32_t CC2S :2;
		uint32_t IC2PSC :2;
		uint32_t IC2F :4;
		uint32_t :16;
	} chctlr1_input_bits;
} tim2_chctlr1_t;

typedef union {
	struct {
		uint32_t CC3S :2;
		uint32_t OC3FE :1;
		uint32_t OC3PE :1;
		uint32_t OC3M :3;
		uint32_t OC3CE :1;
		uint32_t CC4S :2;
		uint32_t OC4FE :1;
		uint32_t OC4PE :1;
		uint32_t OC4M :3;
		uint32_t OC4CE :1;
		uint32_t :16;
	} chctlr2_output_bits;
	struct {
		uint32_t CC3S :2;
		uint32_t IC3PSC :2;
		uint32_t IC3F :4;
		uint32_t CC4S :2;
		uint32_t IC4PSC :2;
		uint32_t IC4F :4;
		uint32_t :16;
	} chctlr2_input_bits;
} tim2_chctlr2_t;

typedef struct {
	uint32_t CC1E :1;
	uint32_t CC1P :1;
	uint32_t :2;
	uint32_t CC2E :1;
	uint32_t CC2P :1;
	uint32_t :2;
	uint32_t CC3E :1;
	uint32_t CC3P :1;
	uint32_t :2;
	uint32_t CC4E :1;
	uint32_t CC4P :1;
	uint32_t :18;
} tim2_ccer_t;

typedef struct {
	uint32_t CNT :16;
	uint32_t :16;
} tim2_cnt_t;

typedef struct {
	uint32_t PSC :16;
	uint32_t :16;
} tim2_psc_t;

typedef struct {
	uint32_t ATRLR :16;
	uint32_t :16;
} tim2_atrlr_t;

typedef struct {
	uint32_t CH1CVR :16;
	uint32_t :16;
} tim2_ch1cvr_t;

typedef struct {
	uint32_t CH2CVR :16;
	uint32_t :16;
} tim2_ch2cvr_t;

typedef struct {
	uint32_t CH3CVR :16;
	uint32_t :16;
} tim2_ch3cvr_t;

typedef struct {
	uint32_t CH4CVR :16;
	uint32_t :16;
} tim2_ch4cvr_t;

typedef struct {
	uint32_t DBA :5;
	uint32_t :3;
	uint32_t DBL :5;
	uint32_t :19;
} tim2_dmacfgr_t;

typedef struct {
	uint32_t DMAADR :16;
	uint32_t :16;
} tim2_dmaadr_t;

typedef struct {
	uint32_t PE :1;
	uint32_t :3;
	uint32_t ENARP :1;
	uint32_t ENPEC :1;
	uint32_t ENGC :1;
	uint32_t NOSTRETCH :1;
	uint32_t START :1;
	uint32_t STOP :1;
	uint32_t ACK :1;
	uint32_t POS :1;
	uint32_t PEC :1;
	uint32_t :2;
	uint32_t SWRST :1;
	uint32_t :16;
} i2c1_ctlr1_t;

typedef struct {
	uint32_t FREQ :6;
	uint32_t :2;
	uint32_t ITERREN :1;
	uint32_t ITEVTEN :1;
	uint32_t ITBUFEN :1;
	uint32_t DMAEN :1;
	uint32_t LAST :1;
	uint32_t :19;
} i2c1_ctlr2_t;

typedef struct {
	uint32_t ADD0 :1;
	uint32_t ADD7_1 :7;
	uint32_t ADD9_8 :2;
	uint32_t :5;
	uint32_t ADDMODE :1;
	uint32_t :16;
} i2c1_oaddr1_t;

typedef struct {
	uint32_t ENDUAL :1;
	uint32_t ADD2 :7;
	uint32_t :24;
} i2c1_oaddr2_t;

typedef struct {
	uint32_t DATAR :8;
	uint32_t :24;
} i2c1_datar_t;

typedef struct {
	uint32_t SB :1;
	uint32_t ADDR :1;
	uint32_t BTF :1;
	uint32_t ADD10 :1;
	uint32_t STOPF :1;
	uint32_t :1;
	uint32_t RxNE :1;
	uint32_t TxE :1;
	uint32_t BERR :1;
	uint32_t ARLO :1;
	uint32_t AF :1;
	uint32_t OVR :1;
	uint32_t PECERR :1;
	uint32_t :19;
} i2c1_star1_t;

typedef struct {
	uint32_t MSL :1;
	uint32_t BUSY :1;
	uint32_t TRA :1;
	uint32_t :1;
	uint32_t GENCALL :1;
	uint32_t :2;
	uint32_t DUALF :1;
	uint32_t PEC :8;
	uint32_t :16;
} i2c1_star2_t;

typedef struct {
	uint32_t CCR :12;
	uint32_t :2;
	uint32_t DUTY :1;
	uint32_t F_S :1;
	uint32_t :16;
} i2c1_ckcfgr_t;

typedef struct {
	uint32_t CPHA :1;
	uint32_t CPOL :1;
	uint32_t MSTR :1;
	uint32_t BR :3;
	uint32_t SPE :1;
	uint32_t LSBFIRST :1;
	uint32_t SSI :1;
	uint32_t SSM :1;
	uint32_t RXONLY :1;
	uint32_t DFF :1;
	uint32_t CRCNEXT :1;
	uint32_t CRCEN :1;
	uint32_t BIDIOE :1;
	uint32_t BIDIMODE :1;
	uint32_t :16;
} spi1_ctlr1_t;

typedef struct {
	uint32_t RXDMAEN :1;
	uint32_t TXDMAEN :1;
	uint32_t SSOE :1;
	uint32_t :2;
	uint32_t ERRIE :1;
	uint32_t RXNEIE :1;
	uint32_t TXEIE :1;
	uint32_t :24;
} spi1_ctlr2_t;

typedef struct {
	uint32_t RXNE :1;
	uint32_t TXE :1;
	uint32_t CHSID :1;
	uint32_t UDR :1;
	uint32_t CRCERR :1;
	uint32_t MODF :1;
	uint32_t OVR :1;
	uint32_t BSY :1;
	uint32_t :24;
} spi1_statr_t;

typedef struct {
	uint32_t DATAR :16;
	uint32_t :16;
} spi1_datar_t;

typedef struct {
	uint32_t CRCPOLY :16;
	uint32_t :16;
} spi1_crcr_t;

typedef struct {
	uint32_t RXCRC :16;
	uint32_t :16;
} spi1_rcrcr_t;

typedef struct {
	uint32_t TXCRC :16;
	uint32_t :16;
} spi1_tcrcr_t;

typedef struct {
	uint32_t HSRXEN :1;
	uint32_t :31;
} spi1_hscr_t;

typedef struct {
	uint32_t PE :1;
	uint32_t FE :1;
	uint32_t NE :1;
	uint32_t ORE :1;
	uint32_t IDLE :1;
	uint32_t RXNE :1;
	uint32_t TC :1;
	uint32_t TXE :1;
	uint32_t LBD :1;
	uint32_t CTS :1;
	uint32_t :22;
} usart1_statr_t;

typedef struct {
	uint32_t DR :9;
	uint32_t :23;
} usart1_datar_t;

typedef struct {
	uint32_t DIV_Fraction :4;
	uint32_t DIV_Mantissa :12;
	uint32_t :16;
} usart1_brr_t;

typedef struct {
	uint32_t SBK :1;
	uint32_t RWU :1;
	uint32_t RE :1;
	uint32_t TE :1;
	uint32_t IDLEIE :1;
	uint32_t RXNEIE :1;
	uint32_t TCIE :1;
	uint32_t TXEIE :1;
	uint32_t PEIE :1;
	uint32_t PS :1;
	uint32_t PCE :1;
	uint32_t WAKE :1;
	uint32_t M :1;
	uint32_t UE :1;
	uint32_t :18;
} usart1_ctlr1_t;

typedef struct {
	uint32_t ADD :4;
	uint32_t :1;
	uint32_t LBDL :1;
	uint32_t LBDIE :1;
	uint32_t :1;
	uint32_t LBCL :1;
	uint32_t CPHA :1;
	uint32_t CPOL :1;
	uint32_t CLKEN :1;
	uint32_t STOP :2;
	uint32_t LINEN :1;
	uint32_t :17;
} usart1_ctlr2_t;

typedef struct {
	uint32_t EIE :1;
	uint32_t IREN :1;
	uint32_t IRLP :1;
	uint32_t HDSEL :1;
	uint32_t NACK :1;
	uint32_t SCEN :1;
	uint32_t DMAR :1;
	uint32_t DMAT :1;
	uint32_t RTSE :1;
	uint32_t CTSE :1;
	uint32_t CTSIE :1;
	uint32_t :21;
} usart1_ctlr3_t;

typedef struct {
	uint32_t PSC :8;
	uint32_t GT :8;
	uint32_t :16;
} usart1_gpr_t;

typedef struct {
	uint32_t AWD :1;
	uint32_t EOC :1;
	uint32_t JEOC :1;
	uint32_t JSTRT :1;
	uint32_t STRT :1;
	uint32_t :27;
} adc1_statr_t;

typedef struct {
	uint32_t AWDCH :5;
	uint32_t EOCIE :1;
	uint32_t AWDIE :1;
	uint32_t JEOCIE :1;
	uint32_t SCAN :1;
	uint32_t AWDSGL :1;
	uint32_t JAUTO :1;
	uint32_t DISCEN :1;
	uint32_t JDISCEN :1;
	uint32_t DISCNUM :3;
	uint32_t :6;
	uint32_t JAWDEN :1;
	uint32_t AWDEN :1;
	uint32_t :1;
	uint32_t ADC_CAL_VOL :2;
	uint32_t :5;
} adc1_ctlr1_t;

typedef struct {
	uint32_t ADON :1;
	uint32_t CONT :1;
	uint32_t CAL :1;
	uint32_t RSTCAL :1;
	uint32_t :4;
	uint32_t DMA :1;
	uint32_t :2;
	uint32_t ALIGN :1;
	uint32_t JEXTSEL :3;
	uint32_t JEXTTRIG :1;
	uint32_t :1;
	uint32_t EXTSEL :3;
	uint32_t EXTTRIG :1;
	uint32_t JSWSTART :1;
	uint32_t SWSTART :1;
	uint32_t :9;
} adc1_ctlr2_t;

typedef struct {
	uint32_t SMP10_TKCG10 :3;
	uint32_t SMP11_TKCG11 :3;
	uint32_t SMP12_TKCG12 :3;
	uint32_t SMP13_TKCG13 :3;
	uint32_t SMP14_TKCG14 :3;
	uint32_t SMP15_TKCG15 :3;
	uint32_t :14;
} adc1_samptr1_charge1_t;

typedef struct {
	uint32_t SMP0_TKCG0 :3;
	uint32_t SMP1_TKCG1 :3;
	uint32_t SMP2_TKCG2 :3;
	uint32_t SMP3_TKCG3 :3;
	uint32_t SMP4_TKCG4 :3;
	uint32_t SMP5_TKCG5 :3;
	uint32_t SMP6_TKCG6 :3;
	uint32_t SMP7_TKCG7 :3;
	uint32_t SMP8_TKCG8 :3;
	uint32_t SMP9_TKCG9 :3;
	uint32_t :2;
} adc1_samptr2_charge2_t;

typedef struct {
	uint32_t JOFFSET1 :10;
	uint32_t :22;
} adc1_iofr1_t;

typedef struct {
	uint32_t JOFFSET2 :10;
	uint32_t :22;
} adc1_iofr2_t;

typedef struct {
	uint32_t JOFFSET3 :10;
	uint32_t :22;
} adc1_iofr3_t;

typedef struct {
	uint32_t JOFFSET4 :10;
	uint32_t :22;
} adc1_iofr4_t;

typedef struct {
	uint32_t HT :10;
	uint32_t :22;
} adc1_wdhtr_t;

typedef struct {
	uint32_t LT :10;
	uint32_t :22;
} adc1_wdltr_t;

typedef struct {
	uint32_t SQ13 :5;
	uint32_t SQ14 :5;
	uint32_t SQ15 :5;
	uint32_t SQ16 :5;
	uint32_t L :4;
	uint32_t :8;
} adc1_rsqr1_t;

typedef struct {
	uint32_t SQ7 :5;
	uint32_t SQ8 :5;
	uint32_t SQ9 :5;
	uint32_t SQ10 :5;
	uint32_t SQ11 :5;
	uint32_t SQ12 :5;
	uint32_t :2;
} adc1_rsqr2_t;

typedef struct {
	uint32_t SQ1 :5;
	uint32_t SQ2 :5;
	uint32_t SQ3 :5;
	uint32_t SQ4 :5;
	uint32_t SQ5 :5;
	uint32_t SQ6 :5;
	uint32_t :2;
} adc1_rsqr3_t;

typedef struct {
	uint32_t JSQ1 :5;
	uint32_t JSQ2 :5;
	uint32_t JSQ3 :5;
	uint32_t JSQ4 :5;
	uint32_t JL :2;
	uint32_t :10;
} adc1_isqr_t;

typedef struct {
	uint32_t IDATA :16;
	uint32_t :16;
} adc1_idatar1_t;

typedef struct {
	uint32_t IDATA :16;
	uint32_t :16;
} adc1_idatar2_t;

typedef struct {
	uint32_t IDATA :16;
	uint32_t :16;
} adc1_idatar3_t;

typedef struct {
	uint32_t IDATA :16;
	uint32_t :16;
} adc1_idatar4_t;

typedef struct {
	uint32_t DLYVLU :9;
	uint32_t DLYSRC :1;
	uint32_t :22;
} adc1_dlyr_t;

typedef struct {
	uint32_t DEG_IWDG :1;
	uint32_t DEG_WWDG :1;
	uint32_t DEG_I2C1 :1;
	uint32_t :1;
	uint32_t DEG_TIM1 :1;
	uint32_t DEG_TIM2 :1;
	uint32_t :26;
} dbg_cfgr1_t;

typedef struct {
	uint32_t DBG_SLEEP :1;
	uint32_t DBG_STOP :1;
	uint32_t DBG_STANDBY :1;
	uint32_t :29;
} dbg_cfgr2_t;

typedef struct {
	uint32_t LATENCY :1;
	uint32_t :31;
} flash_actlr_t;

typedef struct {
	uint32_t BSY :1;
	uint32_t :3;
	uint32_t WRPRTERR :1;
	uint32_t EOP :1;
	uint32_t :8;
	uint32_t BOOT_MODE :1;
	uint32_t BOOT_LOCK :1;
	uint32_t :16;
} flash_statr_t;

typedef struct {
	uint32_t PG :1;
	uint32_t PER :1;
	uint32_t MER :1;
	uint32_t :1;
	uint32_t OBPG :1;
	uint32_t OBER :1;
	uint32_t STRT :1;
	uint32_t LOCK :1;
	uint32_t :1;
	uint32_t OBWRE :1;
	uint32_t ERRIE :1;
	uint32_t :1;
	uint32_t EOPIE :1;
	uint32_t :2;
	uint32_t FLOCK :1;
	uint32_t PAGE_PG :1;
	uint32_t PAGE_ER :1;
	uint32_t BUFLOAD :1;
	uint32_t BUFRST :1;
	uint32_t :12;
} flash_ctlr_t;

typedef struct {
	uint32_t OBERR :1;
	uint32_t RDPRT :1;
	uint32_t IWDG_SW :1;
	uint32_t STOP_RST :1;
	uint32_t STANDY_RST :1;
	uint32_t CFG_RST_MODE :2;
	uint32_t :3;
	uint32_t DATA0 :8;
	uint32_t DATA1 :8;
	uint32_t :6;
} flash_obr_t;

typedef struct {
	uint32_t :2;
	uint32_t INTENSTA2_3 :2;
	uint32_t :8;
	uint32_t INTENSTA12_31 :20;
} pfic_isr1_t;

typedef struct {
	uint32_t INTENSTA :8;
	uint32_t :24;
} pfic_isr4_t;

typedef struct {
	uint32_t :2;
	uint32_t PENDSTA2_3 :2;
	uint32_t :8;
	uint32_t PENDSTA12_31 :20;
} pfic_ipr1_t;

typedef struct {
	uint32_t PENDSTA :8;
	uint32_t :24;
} pfic_ipr4_t;

typedef struct {
	uint32_t THRESHOLD :8;
	uint32_t :24;
} pfic_ithresdr_t;

typedef struct {
	uint32_t :7;
	uint32_t RESETSYS :1;
	uint32_t :8;
	uint32_t KEYCODE :16;
} pfic_cfgr_t;

typedef struct {
	uint32_t NESTSTA :8;
	uint32_t GACTSTA :1;
	uint32_t GPENDSTA :1;
	uint32_t :22;
} pfic_gisr_t;

typedef struct {
	uint32_t VTFID0 :8;
	uint32_t VTFID1 :8;
	uint32_t VTFID2 :8;
	uint32_t VTFID3 :8;
} pfic_vtfidr_t;

typedef struct {
	uint32_t VTF0EN :1;
	uint32_t  ADDR0 :31;
} pfic_vtfaddrr0_t;

typedef struct {
	uint32_t VTF1EN :1;
	uint32_t  ADDR1 :31;
} pfic_vtfaddrr1_t;

typedef struct {
	uint32_t VTF2EN :1;
	uint32_t  ADDR2 :31;
} pfic_vtfaddrr2_t;

typedef struct {
	uint32_t VTF3EN :1;
	uint32_t  ADDR3 :31;
} pfic_vtfaddrr3_t;

typedef struct {
	uint32_t :12;
	uint32_t INTEN :20;
} pfic_ienr1_t;

typedef struct {
	uint32_t INTEN :8;
	uint32_t :24;
} pfic_ienr4_t;

typedef struct {
	uint32_t :12;
	uint32_t INTRSET :20;
} pfic_irer1_t;

typedef struct {
	uint32_t INTRSET :8;
	uint32_t :24;
} pfic_irer4_t;

typedef struct {
	uint32_t :2;
	uint32_t PENDSET2_3 :2;
	uint32_t :8;
	uint32_t PENDSET12_31 :20;
} pfic_ipsr1_t;

typedef struct {
	uint32_t PENDSET :8;
	uint32_t :24;
} pfic_ipsr4_t;

typedef struct {
	uint32_t :2;
	uint32_t PENDRESET2_3 :2;
	uint32_t :8;
	uint32_t PENDRESET12_31 :20;
} pfic_iprr1_t;

typedef struct {
	uint32_t PENDRESET :8;
	uint32_t :24;
} pfic_iprr4_t;

typedef struct {
	uint32_t :2;
	uint32_t IACTS2_3 :2;
	uint32_t :8;
	uint32_t IACTS12_31 :20;
} pfic_iactr1_t;

typedef struct {
	uint32_t IACTS :8;
	uint32_t :24;
} pfic_iactr4_t;

typedef struct {
	uint32_t :1;
	uint32_t SLEEPONEXIT :1;
	uint32_t SLEEPDEEP :1;
	uint32_t WFITOWFE :1;
	uint32_t SEVONPEND :1;
	uint32_t SETEVENT :1;
	uint32_t :25;
	uint32_t SYSRESET :1;
} pfic_sctlr_t;

typedef struct {
	uint32_t STE :1;
	uint32_t STIE :1;
	uint32_t STCLK :1;
	uint32_t STRE :1;
	uint32_t MODE :1;
	uint32_t INIT :1;
	uint32_t :25;
	uint32_t SWIE :1;
} pfic_stk_ctlr_t;

typedef struct {
	uint32_t CNTIF :1;
	uint32_t :31;
} pfic_stk_sr_t;

