#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "Serial.h"

int main()
{
	OLED_Init();
	serial_Init();
	OLED_ShowString(1, 3, "Hello World!");
//	serial_SendByte('H');
//	serial_SendByte('e');
//	serial_SendByte('l');
//	serial_SendByte('l');
//	serial_SendByte('o');
//	serial_SendByte(' ');
//	serial_SendByte('W');
//	serial_SendByte('o');
//	serial_SendByte('r');
//	serial_SendByte('l');
//	serial_SendByte('d');
//	serial_SendByte('!');
//	serial_SendByte('\n');
	uint8_t arr[] = {'H','e','l','l','o'};
	serial_SendArray(arr, 5);
// \r\n组合在这里才能显示换行
	serial_SendString("\r\nWorld!\r\n");
	serial_SendNum(12345, 3);
	serial_SendString("\r\n");
	printf("Num=%d\r\n",886);
	printf("你好，世界！\r\n");
	while(1)
	{
	}
}
