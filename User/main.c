/*******************************************
	*�ļ��� ��  main.c
	*��   �ߣ�  �޳�
	*�޸�ʱ�䣺 2022.07.20
	*��   ����  v1.0
*******************************************/
#include "stm32f10x.h"                  // Device header
#include "bsp_i2c_temperature.h"
#include "bsp_usart.h"
#include "delay.h"

u16 Mlx90614_addr[10] = {0};


int main(void)
{
	SMBus_GPIO_Init();
	USART_Config();
	delay_init();
  SMBUS_SCK_L();	
	delay_ms(3);
  SMBUS_SCK_H();
	
/*********************�޸ĵ�ַ*****************************/
//	u8 SMBus_ID = 0x36;
//	SMBus_WriteMemory(SA, EEPROM_ACCESS|EEPROM_SMBus , SMBus_ID);
/**********************************************************/	
	
	while(1)
	{
//		printf("�������¶ȴ�����-1/r/n");
//		printf("Body_temporature = %f \r\n", SMBus_Read_Body_Temperature(SA_1));
//		printf("Enviroment_temporature = %f \r\n", SMBus_Read_Enviroment_Temperature(SA_1));		
//		delay_ms(1000);
//		printf("�������¶ȴ�����-2/r/n");
//		printf("Body_temporature = %f \r\n", SMBus_Read_Body_Temperature(SA_2));
//		printf("Enviroment_temporature = %f \r\n", SMBus_Read_Enviroment_Temperature(SA_2));		
//		delay_ms(1000);
		printf("�������¶ȴ�����-3/r/n");
		printf("Body_temporature = %f \r\n", SMBus_Read_Body_Temperature(SA_3));
		printf("Enviroment_temporature = %f \r\n", SMBus_Read_Enviroment_Temperature(SA_3));	
		delay_ms(1000);
	}
}
