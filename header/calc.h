#pragma once

#define CALCULATION_ERROR -2147483648

void calculate(void);
int add_operator(const char *name, int priority, int (*callback)(int, int));
