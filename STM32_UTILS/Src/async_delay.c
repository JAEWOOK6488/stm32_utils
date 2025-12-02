/*
 * async_delay.c
 *
 *  Created on: Dec 3, 2025
 *      Author: jwj
 */

#include "async_delay.h"

void AsyncDelayInit(AsyncDelay *d)
{
    d->start    = 0;
    d->duration = 0;
    d->running  = 0;
}

void AsyncDelayStart(AsyncDelay *d, uint32_t duration, uint32_t now)
{
    d->start    = now;
    d->duration = duration;
    d->running  = 1;
}

uint8_t AsyncDelayIsFinished(AsyncDelay *d, uint32_t now)
{
    if (!d->running)
        return 1;

    if ((uint32_t)(now - d->start) >= d->duration)
    {
        d->running = 0;
        return 1;
    }

    return 0;
}

uint8_t AsyncDelayIsRunning(AsyncDelay *d)
{
    return d->running;
}
/*
 * async_delay.c
 *
 *  Created on: Dec 3, 2025
 *      Author: jwj
 */


