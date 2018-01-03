#include "main.h"
#include "stm32f1xx_hal.h"



struct address_range{
	uint16_t start;
	uint16_t stop;
};

typedef struct memory_map{
	struct address_range ROM;
	struct address_range RAM;
	struct address_range display;
	struct address_range accessories;
}memory_map;
