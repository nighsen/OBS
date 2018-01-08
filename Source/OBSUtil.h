#pragma once

inline UINT ConvertMSTo100NanoSec(UINT ms)
{
    return ms * 1000 * 10; //1000 microseconds, then 10 "100nanosecond" segments
}