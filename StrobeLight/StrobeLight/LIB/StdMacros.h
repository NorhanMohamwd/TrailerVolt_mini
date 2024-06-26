/*
 * StdMacros.h
 *
 * Created: 4/7/2024 7:10:56 PM
 *  Author: Norhan Mohamed - https://github.com/NorhanMohamwd
 *  Author : Nada Salloum - https://github.com/nadasalloum
 */      


#ifndef STDMACROS_H_
#define STDMACROS_H_

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLEAR_BIT(REG,BIT) (REG &=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOGGLE_BIT(REG,BIT) (REG ^=(1<<BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

// Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


/* Read a certain bit in any register */
#define  GET_BIT(REG,BIT)  ((REG>>BIT)&1)
/* Toggle the whole register at once */
#define  TOG_REG(REG)       (REG=REG^0XFF)
/* Read the whole register at once */
#define GET_REG(REG)        (REG&0XFF)

#endif /* STDMACROS_H_ */