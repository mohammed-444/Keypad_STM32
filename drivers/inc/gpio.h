
#ifndef INCLUDE_GPIO_H_
#define INCLUDE_GPIO_H_

void GPIO_Init (GPIO_TypeDef * GPIOx,char pin,char dir,char enable_pin);
char GPIO_Write(GPIO_TypeDef * GPIOx,char pin,char state);
char GPIO_Read(GPIO_TypeDef * GPIOx,char pin);
void pull_up(GPIO_TypeDef * GPIOx,char pin);

#endif /* INCLUDE_GPIO_H_ */
