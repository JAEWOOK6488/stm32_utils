/*
 * async_delay.h
 *
 *  Created on: Dec 3, 2025
 *      Author: jwj
 */

#ifndef ASYNC_DELAY_H_
#define ASYNC_DELAY_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    uint32_t start;
    uint32_t duration;
    uint8_t  running;
} AsyncDelay;

/**
 * @brief 비동기 딜레이 초기화
 */
void AsyncDelayInit(AsyncDelay *d);

/**
 * @brief 비동기 딜레이 시작
 * @param duration ms 단위 지연
 * @param now HAL_GetTick() 또는 custom tick
 */
void AsyncDelayStart(AsyncDelay *d, uint32_t duration, uint32_t now);

/**
 * @brief 딜레이 완료 여부 확인
 * @return 1 = 완료됨, 0 = 아직
 */
uint8_t AsyncDelayIsFinished(AsyncDelay *d, uint32_t now);

/**
 * @brief 실행 중인지 여부 확인
 */
uint8_t AsyncDelayIsRunning(AsyncDelay *d);

#ifdef __cplusplus
}
#endif

#endif /* ASYNC_DELAY_H_ */
