#ifndef __MPUIIC_H
#define __MPUIIC_H
#include "stm32f1xx_hal.h"
#include "main.h"

#define GPIOB_ODR_Addr    (GPIOB_BASE+12) //0x4001080C 
#define GPIOB_IDR_Addr    (GPIOB_BASE+8) //0x40010808 

#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr)) 
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 

#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //输出 
#define PBin(n)   BIT_ADDR(GPIOB_IDR_Addr,n)  //输出 

//IO方向设置
#define MPU_SDA_IN()  {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=8<<12;}//1000 0000
#define MPU_SDA_OUT() {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=3<<12;}


//IO操作函数	 
#define MPU_IIC_SCL    PBout(10) 		//SCL
#define MPU_IIC_SDA    PBout(11) 		//SDA	 
#define MPU_READ_SDA   PBin(11) 		//输入SDA 

//IIC所有操作函数
void MPU_IIC_Delay(void);				//MPU IIC延时函数
void MPU_IIC_Init(void);                //初始化IIC的IO口				 
void MPU_IIC_Start(void);				//发送IIC开始信号
void MPU_IIC_Stop(void);	  			//发送IIC停止信号
void MPU_IIC_Send_Byte(unsigned char txd);			//IIC发送一个字节
unsigned char MPU_IIC_Read_Byte(unsigned char ack);//IIC读取一个字节
unsigned char MPU_IIC_Wait_Ack(void); 				//IIC等待ACK信号
void MPU_IIC_Ack(void);					//IIC发送ACK信号
void MPU_IIC_NAck(void);				//IIC不发送ACK信号

void IMPU_IC_Write_One_Byte(unsigned char daddr,unsigned char addr,unsigned char data);
unsigned char MPU_IIC_Read_One_Byte(unsigned char daddr,unsigned char addr);	  
#endif
















