#ifndef  _BSP_USCAT_
#define  _BSP_USCAT_

#include<stm32f10x.h>
#include<stdio.h>

#define DEBUG_USARTx                      USART2
#define DEBUG_USART_CLK                   RCC_APB1Periph_USART2//RCC_APB2Periph_USART1
#define DEBUG_USART_GPIO_CLK              RCC_APB2Periph_GPIOA
#define DEBUG_USART_BAUDRATE              115200

#define DEBUG_USART_APBxClkCmd            RCC_APB1PeriphClockCmd//RCC_APB2PeriphClockCmd
#define DEBUG_USART_GPIO_APBxClkCmd       RCC_APB2PeriphClockCmd

#define DEBUG_USART_TX_GPIO_PORT          GPIOA
#define DEBUG_USART_TX_GPIO_PIN           GPIO_Pin_2

#define DEBUG_USART_RX_GPIO_PORT          GPIOA
#define DEBUG_USART_RX_GPIO_PIN           GPIO_Pin_3

#define DEBUG_USART_IRQ                   USART1_IRQn
#define DEBUG_USART_IRQHandler            USART1_IRQHandler

/* ´®¿ÚÍ¨Ñ¶ÃØÔ¿ */

#define USART_ON                            0x1a
#define USART_OFF                           0x2a

void DEBUG_USART_Confog(void);
void USART_Gpio_Config(void);
void USART_Clock_Config(void);
void USART_NVIC_Config(void);
void USART_SendByte(USART_TypeDef* USARTx ,uint8_t data);
void USART_Config(void);

void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
void USART_Init(USART_TypeDef* USARTx, USART_InitTypeDef* USART_InitStruct);
void USART_ClockInit(USART_TypeDef* USARTx, USART_ClockInitTypeDef* USART_ClockInitStruct);
void NVIC_PriorityGroupConfig(uint32_t NVIC_PriorityGroup);
void NVIC_Init(NVIC_InitTypeDef* NVIC_InitStruct);
void USART_Cmd(USART_TypeDef* USARTx, FunctionalState NewState);
void USART_ITConfig(USART_TypeDef* USARTx, uint16_t USART_IT, FunctionalState NewState);
void USART_SendData(USART_TypeDef* USARTx, uint16_t Data);
FlagStatus USART_GetFlagStatus(USART_TypeDef* USARTx, uint16_t USART_FLAG);


#endif /*_BSP_USCAT_*/
