# stm32_utils

STM32 기반 임베디드 프로젝트에서 반복적으로 사용하는 기능들을 모아놓은 유틸리티 라이브러리입니다.

## Features
### time
- delay_async : 타이머 tick 기반 비동기 딜레이
- hold_pin    : 특정 핀이 특정 상태로 일정 시간 유지되었는지 확인

### filter
- low pass filter (LPF)

### gpio
- debounce : 버튼 채터링 제거

### utils
- ring_buffer : 시리얼 데이터 버퍼
