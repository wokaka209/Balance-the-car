#ifndef __MPUIIC_H
#define __MPUIIC_H
#include "stm32f1xx_hal.h"
#include "main.h"

#define GPIOB_ODR_Addr    (GPIOB_BASE+12) //0x4001080C 
#define GPIOB_IDR_Addr    (GPIOB_BASE+8) //0x40010808 

#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr)) 
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 

#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //��� 
#define PBin(n)   BIT_ADDR(GPIOB_IDR_Addr,n)  //��� 

//IO��������
#define MPU_SDA_IN()  {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=8<<12;}//1000 0000
#define MPU_SDA_OUT() {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=3<<12;}


//IO��������	 
#define MPU_IIC_SCL    PBout(10) 		//SCL
#define MPU_IIC_SDA    PBout(11) 		//SDA	 
#define MPU_READ_SDA   PBin(11) 		//����SDA 

//IIC���в�������
void MPU_IIC_Delay(void);				//MPU IIC��ʱ����
void MPU_IIC_Init(void);                //��ʼ��IIC��IO��				 
void MPU_IIC_Start(void);				//����IIC��ʼ�ź�
void MPU_IIC_Stop(void);	  			//����IICֹͣ�ź�
void MPU_IIC_Send_Byte(unsigned char txd);			//IIC����һ���ֽ�
unsigned char MPU_IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
unsigned char MPU_IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void MPU_IIC_Ack(void);					//IIC����ACK�ź�
void MPU_IIC_NAck(void);				//IIC������ACK�ź�

void IMPU_IC_Write_One_Byte(unsigned char daddr,unsigned char addr,unsigned char data);
unsigned char MPU_IIC_Read_One_Byte(unsigned char daddr,unsigned char addr);	  
#endif
















