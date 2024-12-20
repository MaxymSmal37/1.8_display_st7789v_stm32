
#include "LCD_Test.h"
#include "LCD_1in8.h"
#include "DEV_Config.h"

void LCD_1in8_test()
{
	printf("LCD_1IN8_test Demo\r\n");
	DEV_Module_Init();

  printf("LCD_1IN8_ Init and Clear...\r\n");
	LCD_1IN8_SetBackLight(1000);
	LCD_1IN8_Init(SCAN_DIR_DFT);
	LCD_1IN8_Clear(BLACK);

  printf("Paint_NewImage\r\n");
	Paint_NewImage(LCD_1IN8_WIDTH,LCD_1IN8_HEIGHT, 0, WHITE);

  printf("Set Clear and Display Funtion\r\n");
	Paint_SetClearFuntion(LCD_1IN8_Clear);
	Paint_SetDisplayFuntion(LCD_1IN8_DrawPaint);

  printf("Paint_Clear\r\n");
	Paint_Clear(WHITE);
  DEV_Delay_ms(1000);

  Paint_DrawString_EN(1, 50, "Sdarova Bandit", &Font16, 0xF000, 0x0FFF);
  DEV_Delay_ms(10000);
	//DEV_Module_Exit();
  
}

