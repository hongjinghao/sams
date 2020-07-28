#ifndef STATUS_H
#define STATUS_H

typedef enum 
{
    EXCEP =  1, // 执行异常
    RIGHT =  0, // 执行成功
    ERROR = -1, // 执行错误
    PRNIL = -2, // 参数为空
    SPILL = -3, // 参数过界
    IDERR = -4, // 帐号错误
    PDERR = -5  // 密码错误
}Status;

typedef enum KEYBOARD
{
	KEY_UP    		= 183,
	KEY_DOWN  		= 184,
	KEY_RIGHT 		= 185,
	KEY_LEFT  		= 186,
	KEY_BACKSPACE	= 127,
	KEY_ENTER 		= 10,
    KEY_ESC         = 27,
	KEY_0           = 48,
	KEY_1           = 49,
	KEY_2           = 50,
	KEY_3           = 51,
	KEY_4           = 52,
	KEY_5           = 53,
	KEY_6           = 54,
	KEY_7           = 55,
	KEY_8           = 56,
	KEY_9           = 57,
	KEY_A           = 65,
	KEY_B           = 66,
	KEY_C           = 67,
	KEY_D           = 68,
	KEY_E           = 69,
	KEY_F           = 70,
	KEY_G           = 71,
	KEY_H           = 72,
	KEY_I           = 73,
	KEY_J           = 74,
	KEY_K           = 75,
	KEY_L           = 76,
	KEY_M           = 77,
	KEY_N           = 78,
	KEY_O           = 79,
	KEY_P           = 80,
	KEY_Q           = 81,
	KEY_R           = 82,
	KEY_S           = 83,
	KEY_T           = 84,
	KEY_U           = 85,
	KEY_V           = 86,
	KEY_W           = 87,
	KEY_X           = 88,
	KEY_Y           = 89,
	KEY_Z           = 90,
	KEY_a           = 97,
	KEY_b           = 98,
	KEY_c           = 99,
	KEY_d           = 100,
	KEY_e           = 101, 
	KEY_f           = 102,
	KEY_g           = 103,
	KEY_h           = 104,
	KEY_i           = 105,
	KEY_j           = 106,
	KEY_k           = 107,
	KEY_l           = 108,
	KEY_m           = 109,
	KEY_n           = 110,
	KEY_o           = 111,
	KEY_p           = 112,
	KEY_q           = 113,
	KEY_r           = 114,
	KEY_s           = 115,
	KEY_t           = 116,
	KEY_u           = 117,
	KEY_v           = 118,
	KEY_w           = 119,
	KEY_x           = 120,
	KEY_y           = 121,
	KEY_z           = 122
}KEYBOARD; 

#define nil (0)

#endif//STATUS_H
