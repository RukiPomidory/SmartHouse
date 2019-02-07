#ifndef SETTINGS
#define SETTINGS

//-------------------------
// | Параметры термометра |
//-------------------------------
const double room_t0 = 298.15;  // Эталонная комнатная температура (как правило, 25 °C)
const double beta = 4520.0;     // Табличный коэффициент термистора (корректируется эмпирически)
const double balanceR = 330.0;  // Сопротивление резистора делителя напряжения
const double defaultR = 10000.0; // Сопротивление термистора при комнатной температуре
//--^--^--^--^--^--^--^--^--^--^-


//--------------------------------
// | Параметры датчиков давления |
//--------------------------------
const double biasF = 150;   // Смещение. Нужно для вычета веса самого чайника
const double kF = 0.0077;    // Коэффициент. Отношение объема к значению с АЦП

const double biasR = 850;   // Для правого датчика
const double kR = 0.025;    // 

const double biasL = 850;   // Для левого датчика
const double kL = 0.025;    // 

const double K = 1;         // Общий коэффициент. Его выделение при наличии отдельных коэффициентов удобно при настройке.
//--^--^--^--^--^--^--^--^--^--^--


// ------- Коэффициенты сглаживания для датчиков ------
double temperatureSensorAlpha = 0.02;
double pressureSensorAlphaF = 0.1;  // Передний
double pressureSensorAlphaR = 0.1;  // Правый
double pressureSensorAlphaL = 0.1;  // Левый
// --^--^--^--^--^--^--^--^--^--^--^--^--^--^--^--^--^-

// Пауза между отправками данных
int sendDataDelay = 256;

// Температура отключения нагревателя (°C)
double maxTemperature = 100;

// Минимальный уровень воды (в литрах)
double minWaterAmount = 0.5;

// Максимальный уровень воды (в литрах)
double maxWaterAmount = 2;

#endif
