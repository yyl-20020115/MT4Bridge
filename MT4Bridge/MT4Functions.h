#pragma once

//TODO: check values
#define TIME_DATE  1
#define TIME_MINUTES 2
#define TIME_SECONDS 4
#define DOUBLE_VALUE 8
#define FLOAT_VALUE  4
#define INT_VALUE 4
#define MODE_TRADES 0
#define MODE_HISTORY 1
#define SELECT_BY_POS 0
#define SELECT_BY_TICKET 1
#define clrNONE 0
#define OP_BUY 0
#define OP_SELL 1
#define OP_BUYLIMIT 2
#define OP_BUYSTOP 3
#define OP_SELLLIMIT 4
#define OP_SELLSTOP 5


//Variables
#define _RandomSeed GetRandomSeed()
#define _Digits Digits()
#define _Point Point()
#define _LastError MT4_GetLastError()
#define _Period Period()
#define _StopFlag IsStopped()
#define _Symbol Symbol()
#define _UninitReason UninitializeReason()
#define Ask MarketInfo(Symbol(),MODE_ASK)
#define Bid MarketInfo(Symbol(),MODE_BID)
#define _Bars iBars(Symbol(),PERIOD_CURRENT)

//Typedefs
typedef wchar_t* string;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned long long ulong;
typedef void object;
typedef unsigned long long datetime;
typedef unsigned int color;
typedef long long _long;

//Structures
typedef struct _MqlTick
{
	datetime     time;          // Time of the last prices update 
	double       bid;           // Current Bid price 
	double       ask;           // Current Ask price 
	double       last;          // Price of the last deal (Last) 
	ulong        volume;        // Volume for the current Last price 
}MqlTick;

typedef struct _MqlRates
{
	datetime time;         // Period start time 
	double   open;         // Open price 
	double   high;         // The highest price of the period 
	double   low;          // The lowest price of the period 
	double   close;        // Close price 
	_long     tick_volume;  // Tick volume 
	int      spread;       // Spread 
	_long     real_volume;  // Trade volume 
}MqlRates;
typedef struct _MqlDateTime
{
	int year;           // Year 
	int mon;            // Month 
	int day;            // Day 
	int hour;           // Hour 
	int min;            // Minutes 
	int sec;            // Seconds 
	int day_of_week;    // Day of week (0-Sunday, 1-Monday, ... ,6-Saturday) 
	int day_of_year;    // Day number of the year (January 1st is assigned the number value of zero) 
}MqlDateTime;
typedef enum _ENUM_MARKET_INFO_MODE
{
	MODE_LOW  = 1,//1 Low day price
	MODE_HIGH = 2,//2 High day price
	MODE_TIME = 5,//5 The last incoming tick time(last known server time)
	MODE_BID = 9,//9 Last incoming bid price.For the current symbol, it is stored in the predefined variable Bid
	MODE_ASK = 10,//10 Last incoming ask price.For the current symbol, it is stored in the predefined variable Ask
	MODE_POINT = 11,//11 Point size in the quote currency.For the current symbol, it is stored in the predefined variable Point
	MODE_DIGITS = 12,//12 Count of digits after decimal point in the symbol prices.For the current symbol, it is stored in the predefined variable Digits
	MODE_SPREAD = 13,//13 Spread value in points
	MODE_STOPLEVEL = 14,//14 Stop level in points A zero value of MODE_STOPLEVEL means either absence of any restrictions on the minimal distance for Stop Loss / Take Profit or the fact that a trade server utilizes some external mechanisms for dynamic level control, which cannot be translated in the client terminal.In the second case, GetLastError() can return error 130, because MODE_STOPLEVEL is actually "floating" here.
	MODE_LOTSIZE = 15,//15 Lot size in the base currency
	MODE_TICKVALUE = 16,//16 Tick value in the deposit currency
	MODE_TICKSIZE = 17,//17 Tick size in points
	MODE_SWAPLONG = 18,//18 Swap of the buy order
	MODE_SWAPSHORT = 19,//19 Swap of the sell order
	MODE_STARTING = 20,//20 Market starting date(usually used for futures)
	MODE_EXPIRATION = 21,//21 Market expiration date(usually used for futures)
	MODE_TRADEALLOWED = 22,//22 Trade is allowed for the symbol
	MODE_MINLOT = 23,//23 Minimum permitted amount of a lot
	MODE_LOTSTEP = 24,//24 Step for changing lots
	MODE_MAXLOT =25,//25 Maximum permitted amount of a lot
	MODE_SWAPTYPE = 26,//26 Swap calculation method. 0 - in points; 1 - in the symbol base currency; 2 - by interest; 3 - in the margin currency
	MODE_PROFITCALCMODE = 27,//27 Profit calculation mode. 0 - Forex; 1 - CFD; 2 - Futures
	MODE_MARGINCALCMODE = 28,//28 Margin calculation mode. 0 - Forex; 1 - CFD; 2 - Futures; 3 - CFD for indices
	MODE_MARGININIT = 29,//29 Initial margin requirements for 1 lot
	MODE_MARGINMAINTENANCE = 30,//30 Margin to maintain open orders calculated for 1 lot
	MODE_MARGINHEDGED = 31,//31 Hedged margin calculated for 1 lot
	MODE_MARGINREQUIRED = 32,//32 Free margin required to open 1 lot for buying
	MODE_FREEZELEVEL = 33,//33 Order freeze level in points.If the execution price lies within the range defined by the freeze level, the order cannot be modified, cancelled or closed
	MODE_CLOSEBY_ALLOWED = 34,//34 Allowed using OrderCloseBy() to close opposite orders on a specified symbol
}ENUM_MARKET_INFO_MODE;

typedef enum _ENUM_SERIES_INFO_INTEGER
{
	SERIES_BARS_COUNT,//Bars count for the symbol - period for the current moment long
	SERIES_FIRSTDATE,//The very first date for the symbol - period for the current moment datetime
	SERIES_LASTBAR_DATE,//Open time of the last bar of the symbol - period datetime
	SERIES_SERVER_FIRSTDATE,//The very first date in the history of the symbol on the server regardless of the timeframe datetime
}ENUM_SERIES_INFO_INTEGER;
typedef enum _ENUM_DAY_OF_WEEK
{
	SUNDAY,//Sunday
	MONDAY,//Monday
	TUESDAY,//Tuesday
	WEDNESDAY,//Wednesday
	THURSDAY,//Thursday
	FRIDAY,//Friday
	SATURDAY,//Saturday
}ENUM_DAY_OF_WEEK;

typedef enum _ENUM_TIMEFRAMES
{
	PERIOD_CURRENT = 0,//0 Current timeframe
	PERIOD_M1 = 1,//1 1 minute
	PERIOD_M5 = 5,//5 5 minutes
	PERIOD_M15 = 15,//15 15 minutes
	PERIOD_M30 = 30,//30 30 minutes
	PERIOD_H1 = 60,//60 1 hour
	PERIOD_H4 = 240,//240 4 hours
	PERIOD_D1 = 1440,//1440 1 day
	PERIOD_W1 = 10080,//10080 1 week
	PERIOD_MN1 = 43200,//43200 1 month

	PERIOD_M2 = 2,//2 2 minutes
	PERIOD_M3 = 3,//3 3 minutes
	PERIOD_M4 = 4,//4 4 minutes
	PERIOD_M6 = 6,//6 6 minutes
	PERIOD_M10 = 10,//10 10 minutes
	PERIOD_M12 = 12,//12 12 minutes
	PERIOD_M20 = 20,//20 20 minutes
	PERIOD_H2 = 120,//120 2 hours
	PERIOD_H3 = 180,//180 3 hours
	PERIOD_H6 = 360,//360 6 hours
	PERIOD_H8 = 480,//480 8 hours
	PERIOD_H12 = 720, //720 12 hours
}ENUM_TIMEFRAMES;

typedef enum _ENUM_COLOR_FORMAT
{
	COLOR_FORMAT_XRGB_NOALPHA,//The component of the alpha channel is ignored
	COLOR_FORMAT_ARGB_RAW,//Color components are not handled by the terminal(must be correctly set by the user)
	COLOR_FORMAT_ARGB_NORMALIZE,//Color components are handled by the terminal
}ENUM_COLOR_FORMAT;

typedef enum _ENUM_STATISTICS
{
	STAT_INITIAL_DEPOSIT,//The value of the initial deposit double
	STAT_PROFIT,//Net profit after testing, the sum of STAT_GROSS_PROFIT and STAT_GROSS_LOSS(STAT_GROSS_LOSS is always less than or equal to zero) double
	STAT_GROSS_PROFIT,//Total profit, the sum of all profitable(positive) trades.The value is greater than or equal to zero double
	STAT_GROSS_LOSS,//Total loss, the sum of all negative trades.The value is less than or equal to zero double
	STAT_MAX_PROFITTRADE,//Maximum profit ¨C the largest value of all profitable trades.The value is greater than or equal to zero double
	STAT_MAX_LOSSTRADE,//Maximum loss ¨C the lowest value of all losing trades.The value is less than or equal to zero double
	STAT_CONPROFITMAX,//Maximum profit in a series of profitable trades.The value is greater than or equal to zero double
	STAT_CONPROFITMAX_TRADES,//The number of trades that have formed STAT_CONPROFITMAX(maximum profit in a series of profitable trades) int
	STAT_MAX_CONWINS,//The total profit of the longest series of profitable trades double
	STAT_MAX_CONPROFIT_TRADES,//The number of trades in the longest series of profitable trades STAT_MAX_CONWINS int
	STAT_CONLOSSMAX,//Maximum loss in a series of losing trades.The value is less than or equal to zero double
	STAT_CONLOSSMAX_TRADES,//The number of trades that have formed STAT_CONLOSSMAX(maximum loss in a series of losing trades) int
	STAT_MAX_CONLOSSES,//The total loss of the longest series of losing trades double
	STAT_MAX_CONLOSS_TRADES,//The number of trades in the longest series of losing trades STAT_MAX_CONLOSSES int
	STAT_BALANCEMIN,//Minimum balance value double
	STAT_BALANCE_DD,//Maximum balance drawdown in monetary terms.In the process of trading, a balance may have numerous drawdowns; here the largest value is taken double
	STAT_BALANCEDD_PERCENT,//Balance drawdown as a percentage that was recorded at the moment of the maximum balance drawdown in monetary terms(STAT_BALANCE_DD). double
	STAT_BALANCE_DDREL_PERCENT,//Maximum balance drawdown as a percentage.In the process of trading, a balance may have numerous drawdowns, for each of which the relative drawdown value in percents is calculated.The greatest value is returned double
	STAT_BALANCE_DD_RELATIVE,//Balance drawdown in monetary terms that was recorded at the moment of the maximum balance drawdown as a percentage(STAT_BALANCE_DDREL_PERCENT). double
	STAT_EQUITYMIN,//Minimum equity value double
	STAT_EQUITY_DD,//Maximum equity drawdown in monetary terms.In the process of trading, numerous drawdowns may appear on the equity; here the largest value is taken double
	STAT_EQUITYDD_PERCENT,//Drawdown in percent that was recorded at the moment of the maximum equity drawdown in monetary terms(STAT_EQUITY_DD). double
	STAT_EQUITY_DDREL_PERCENT,//Maximum equity drawdown as a percentage.In the process of trading, an equity may have numerous drawdowns, for each of which the relative drawdown value in percents is calculated.The greatest value is returned double
	STAT_EQUITY_DD_RELATIVE,//Equity drawdown in monetary terms that was recorded at the moment of the maximum equity drawdown in percent(STAT_EQUITY_DDREL_PERCENT). double
	STAT_EXPECTED_PAYOFF,//Expected payoff double
	STAT_PROFIT_FACTOR,//Profit factor, equal to  the ratio of STAT_GROSS_PROFIT / STAT_GROSS_LOSS.If STAT_GROSS_LOSS = 0, the profit factor is equal to DBL_MAX double
	STAT_MIN_MARGINLEVEL,//Minimum value of the margin level double
	STAT_CUSTOM_ONTESTER,//The value of the calculated custom optimization criterion returned by the OnTester() function double
	STAT_TRADES,//The number of trades int
	STAT_PROFIT_TRADES,//Profitable trades int
	STAT_LOSS_TRADES,//Losing trades int
	STAT_SHORT_TRADES,//Short trades int
	STAT_LONG_TRADES,//Long trades int
	STAT_PROFIT_SHORTTRADES,//Profitable short trades int
	STAT_PROFIT_LONGTRADES,//Profitable long trades int
	STAT_PROFITTRADES_AVGCON,//Average length of a profitable series of trades int
	STAT_LOSSTRADES_AVGCON,//Average length of a losing series of trades int
}ENUM_STATISTICS;

typedef enum _ENUM_SYMBOL_INFO_DOUBLE
{
	SYMBOL_BID,//Bid - best sell offer double
	SYMBOL_BIDHIGH,//Not supported double
	SYMBOL_BIDLOW,//Not supported double
	SYMBOL_ASK,//Ask - best buy offer double
	SYMBOL_ASKHIGH,//Not supported double
	SYMBOL_ASKLOW,//Not supported double
	SYMBOL_LAST,//Not supported double
	SYMBOL_LASTHIGH,//Not supported double
	SYMBOL_LASTLOW,//Not supported double
	SYMBOL_POINT,//Symbol point value double
	SYMBOL_TRADE_TICK_VALUE,//Value of SYMBOL_TRADE_TICK_VALUE_PROFIT double
	SYMBOL_TRADE_TICK_VALUE_PROFIT,//Not supported double
	SYMBOL_TRADE_TICK_VALUE_LOSS,//Not supported double
	SYMBOL_TRADE_TICK_SIZE,//Minimal price change double
	SYMBOL_TRADE_CONTRACT_SIZE,//Trade contract size double
	SYMBOL_VOLUME_MIN,//Minimal volume for a deal double
	SYMBOL_VOLUME_MAX,//Maximal volume for a deal double
	SYMBOL_VOLUME_STEP,//Minimal volume change step for deal execution double
	SYMBOL_VOLUME_LIMIT,//Not supported double
	SYMBOL_SWAP_LONG,//Buy order swap value double
	SYMBOL_SWAP_SHORT,//Sell order swap value double
	SYMBOL_MARGIN_INITIAL,//Initial margin means the amount in the margin currency required for opening an order with the volume of one lot.It is used for checking a client's assets when he or she enters the market. double
	SYMBOL_MARGIN_MAINTENANCE,//The maintenance margin.If it is set, it sets the margin amount in the margin currency of the symbol, charged from one lot.It is used for checking a client's assets when his/her account state changes. If the maintenance margin is equal to 0, the initial margin is used. double
	SYMBOL_MARGIN_LONG,//Not supported double
	SYMBOL_MARGIN_SHORT,//Not supported double
	SYMBOL_MARGIN_LIMIT,//Not supported double
	SYMBOL_MARGIN_STOP,//Not supported double
	SYMBOL_MARGIN_STOPLIMIT,//Not supported double
	SYMBOL_SESSION_VOLUME,//Not supported double
	SYMBOL_SESSION_TURNOVER,//Not supported double
	SYMBOL_SESSION_INTEREST,//Not supported double
	SYMBOL_SESSION_BUY_ORDERS_VOLUME,//Not supported double
	SYMBOL_SESSION_SELL_ORDERS_VOLUME,//Not supported double
	SYMBOL_SESSION_OPEN,//Not supported double
	SYMBOL_SESSION_CLOSE,//Not supported double
	SYMBOL_SESSION_AW,//Not supported double
	SYMBOL_SESSION_PRICE_SETTLEMENT,//Not supported double
	SYMBOL_SESSION_PRICE_LIMIT_MIN,//Not supported double
	SYMBOL_SESSION_PRICE_LIMIT_MAX,//Not supported double
}ENUM_SYMBOL_INFO_DOUBLE;
typedef enum _ENUM_SYMBOL_INFO_INTEGER
{
	SYMBOL_SELECT,//Symbol is selected in Market Watch. Some symbols can be hidden in Market Watch, but still they are considered as selected. bool
	SYMBOL_VISIBLE,//Symbol is visible in Market Watch.Some symbols(mostly, these are cross rates required for calculation of margin requirements or profits in deposit currency) are selected automatically, but generally are not visible in Market Watch.To be displayed such symbols have to be explicitly selected. bool
	SYMBOL_SESSION_DEALS,//Not supported long
	SYMBOL_SESSION_BUY_ORDERS,//Not supported long
	SYMBOL_SESSION_SELL_ORDERS,//Not supported long
	SYMBOL_VOLUME,//Not supported long
	SYMBOL_VOLUMEHIGH,//Not supported long
	SYMBOL_VOLUMELOW,//Not supported long
	SYMBOL_TIME,//Time of the last quote datetime
	SYMBOL_DIGITS,//Digits after a decimal point int
	SYMBOL_SPREAD_FLOAT,//Indication of a floating spread bool
	SYMBOL_SPREAD,//Spread value in points int
	SYMBOL_TRADE_CALC_MODE,//Contract price calculation mode int
	SYMBOL_TRADE_MODE,//Order execution type ENUM_SYMBOL_TRADE_MODE
	SYMBOL_START_TIME,//Date of the symbol trade beginning(usually used for futures) datetime
	SYMBOL_EXPIRATION_TIME,//Date of the symbol trade end(usually used for futures) datetime
	SYMBOL_TRADE_STOPS_LEVEL,//Minimal indention in points from the current close price to place Stop orders int
	SYMBOL_TRADE_FREEZE_LEVEL,//Distance to freeze trade operations in points int
	SYMBOL_TRADE_EXEMODE,//Deal execution mode ENUM_SYMBOL_TRADE_EXECUTION
	SYMBOL_SWAP_MODE,//Swap calculation model int
	SYMBOL_SWAP_ROLLOVER3DAYS,//Day of week to charge 3 days swap rollover ENUM_DAY_OF_WEEK
	SYMBOL_EXPIRATION_MODE,//Not supported int
	SYMBOL_FILLING_MODE,//Not supported int
	SYMBOL_ORDER_MODE,//Not supported int
}ENUM_SYMBOL_INFO_INTEGER;
typedef enum _ENUM_SYMBOL_INFO_STRING
{
	SYMBOL_CURRENCY_BASE,//Basic currency of a symbol string
	SYMBOL_CURRENCY_PROFIT,//Profit currency string
	SYMBOL_CURRENCY_MARGIN,//Margin currency string
	SYMBOL_DESCRIPTION,//Symbol description string
	SYMBOL_PATH,//Path in the symbol tree string
}ENUM_SYMBOL_INFO_STRING;

typedef enum _ENUM_ALIGN_MODE
{
	ALIGN_LEFT,//Left alignment
	ALIGN_CENTER,//Centered(only for the Edit object)
	ALIGN_RIGHT,//Right alignment
}ENUM_ALIGN_MODE;
typedef enum _ENUM_FILE_PROPERTY_INTEGER
{
	FILE_EXISTS,//Check the existence
	FILE_CREATE_DATE,//Date of creation
	FILE_MODIFY_DATE,//Date of the last modification
	FILE_ACCESS_DATE,//Date of the last access to the file
	FILE_SIZE,//File size in bytes
	FILE_POSITION,//Position of a pointer in the file
	FILE_END_,//Get the end of file sign
	FILE_LINE_END,//Get the end of line sign
	FILE_IS_COMMON,//The file is opened in a shared folder of all terminals(see FILE_COMMON)
	FILE_IS_TEXT,//The file is opened as a text file(see FILE_TXT)
	FILE_IS_BINARY,//The file is opened as a binary file(see FILE_BIN)
	FILE_IS_CSV,//The file is opened as CSV(see FILE_CSV)
	FILE_IS_ANSI,//The file is opened as ANSI(see FILE_ANSI)
	FILE_IS_READABLE,//The opened file is readable(see FILE_READ)
	FILE_IS_WRITABLE,//The opened file is writable(see FILE_WRITE)
}ENUM_FILE_PROPERTY_INTEGER;
typedef enum _ENUM_SIGNAL_BASE_DOUBLE
{
	SIGNAL_BASE_BALANCE,//Account balance
	SIGNAL_BASE_EQUITY,//Account equity
	SIGNAL_BASE_GAIN,//Account gain
	SIGNAL_BASE_MAX_DRAWDOWN,//Account maximum drawdown
	SIGNAL_BASE_PRICE,//Signal subscription price
	SIGNAL_BASE_ROI,//Return on Investment(%)
}ENUM_SIGNAL_BASE_DOUBLE;
typedef enum _ENUM_SIGNAL_BASE_INTEGER
{
	SIGNAL_BASE_DATE_PUBLISHED,//Publication date(date when it become available for subscription)
	SIGNAL_BASE_DATE_STARTED,//Monitoring starting date
	SIGNAL_BASE_ID,//Signal ID
	SIGNAL_BASE_LEVERAGE,//Account leverage
	SIGNAL_BASE_PIPS,//Profit in pips
	SIGNAL_BASE_RATING,//Position in rating
	SIGNAL_BASE_SUBSCRIBERS,//Number of subscribers
	SIGNAL_BASE_TRADES,//Number of trades
	SIGNAL_BASE_TRADE_MODE,//Account type(0 - real, 1 - demo, 2 - contest)
}ENUM_SIGNAL_BASE_INTEGER;
typedef enum _ENUM_SIGNAL_BASE_STRING
{
	SIGNAL_BASE_AUTHOR_LOGIN,//Author login
	SIGNAL_BASE_BROKER,//Broker name(company)
	SIGNAL_BASE_BROKER_SERVER,//Broker server
	SIGNAL_BASE_NAME,//Signal name
	SIGNAL_BASE_CURRENCY,//Signal base currency
}ENUM_SIGNAL_BASE_STRING;
typedef enum _ENUM_SIGNAL_INFO_DOUBLE
{
	SIGNAL_INFO_EQUITY_LIMIT,//Minimum equity value, below which trade copying is stopped automatically and all orders opened by subscription are closed
	SIGNAL_INFO_SLIPPAGE,//Allowable subscription when copying deals, in spreads
	SIGNAL_INFO_VOLUME_PERCENT,//Percentage of volume conversion when copying deals, r / o
}ENUM_SIGNAL_INFO_DOUBLE;
typedef enum _ENUM_SIGNAL_INFO_INTEGER
{
	SIGNAL_INFO_CONFIRMATIONS_DISABLED,//The flag enables synchronization without confirmation dialog
	SIGNAL_INFO_COPY_SLTP,//Copy Stop Loss and Take Profit flag
	SIGNAL_INFO_DEPOSIT_PERCENT,//Percentage of trading account funds used when following providers' signals (in %)
	SIGNAL_INFO_ID,//Signal id, r / o
	SIGNAL_INFO_SUBSCRIPTION_ENABLED,//"Copy trades by subscription" permission flag
	SIGNAL_INFO_TERMS_AGREE,//"Agree to terms of use of Signals service" flag, r / o
}ENUM_SIGNAL_INFO_INTEGER;
typedef enum _ENUM_SIGNAL_INFO_STRING
{
	SIGNAL_INFO_NAME
}ENUM_SIGNAL_INFO_STRING;
//Object Functions:
typedef enum _ENUM_OBJECT
{
	OBJ_VLINE,//vertical_line Vertical Line
	OBJ_HLINE,//horizonal_line Horizontal Line
	OBJ_TREND,//trend_line Trend Line
	OBJ_TRENDBYANGLE,//trend_line)by_angle Trend Line By Angle
	OBJ_CYCLES,//cycle_lines Cycle Lines
	OBJ_CHANNEL,//equidistance_channel Equidistant Channel
	OBJ_STDDEVCHANNEL,//stddeviation_channel Standard Deviation Channel
	OBJ_REGRESSION,//regression_channel Linear Regression Channel
	OBJ_PITCHFORK,//andrewspitchfork Andrews¡¯ Pitchfork
	OBJ_GANNLINE,//gann_line Gann Line
	OBJ_GANNFAN,//gann_fan Gann Fan
	OBJ_GANNGRID,//gann_grid Gann Grid
	OBJ_FIBO,//fibonacci_levels Fibonacci Retracement
	OBJ_FIBOTIMES,//fibonacci_time_zones Fibonacci Time Zones
	OBJ_FIBOFAN,//fibo_fan Fibonacci Fan
	OBJ_FIBOARC,//fibo_arc Fibonacci Arcs
	OBJ_FIBOCHANNEL,//fibo_channel Fibonacci Channel
	OBJ_EXPANSION,//fibo_expansion Fibonacci Expansion
	OBJ_RECTANGLE,//rectangle Rectangle
	OBJ_TRIANGLE,//triangle Triangle
	OBJ_ELLIPSE,//ellipse Ellipse
	OBJ_ARROW_THUMB_UP,//THUMB_UP Thumbs Up
	OBJ_ARROW_THUMB_DOWN,//THUMB_DOWN Thumbs Down
	OBJ_ARROW_UP,//arrow_up Arrow Up
	OBJ_ARROW_DOWN,//arrow_downArrow Down
	OBJ_ARROW_STOP,//stop_signal Stop Sign
	OBJ_ARROW_CHECK,//check_signal Check Sign
	OBJ_ARROW_LEFT_PRICE,//left_price_label Left Price Label
	OBJ_ARROW_RIGHT_PRICE,//right_price_label Right Price Label
	OBJ_ARROW_BUY,//buy_sign_icon Buy Sign
	OBJ_ARROW_SELL,//sell_sign_icon Sell Sign
	OBJ_ARROW,//arrow_symbol Arrow
	OBJ_TEXT,//text_object Text
	OBJ_LABEL,//label_object Label
	OBJ_BUTTON,//button_object Button
	OBJ_BITMAP_,//picture_object Bitmap
	OBJ_BITMAP_LABEL,//bitmap_object Bitmap Label
	OBJ_EDIT,//edit_object Edit
	OBJ_EVENT,//obj_event The "Event" object corresponding to an event in the economic calendar
	OBJ_RECTANGLE_LABEL,//rectangle_label The "Rectangle label" object for creating and designing the custom graphical interface.
}ENUM_OBJECT;
typedef enum _ENUM_CRYPT_METHOD
{
	CRYPT_BASE64,//BASE64
	CRYPT_AES128,//AES encryption with 128 bit key(16 bytes)
	CRYPT_AES256,//AES encryption with 256 bit key(32 bytes)
	CRYPT_DES,//DES encryption with 56 bit key(7 bytes)
	CRYPT_HASH_SHA1,//SHA1 HASH calculation
	CRYPT_HASH_SHA256,//SHA256 HASH calculation
	CRYPT_HASH_MD5,//MD5 HASH calculation
	CRYPT_ARCH_ZIP,//ZIP archives


}ENUM_CRYPT_METHOD;
typedef enum _ENUM_POINTER_TYPE
{
	POINTER_INVALID,//Incorrect pointer
	POINTER_DYNAMIC,//Pointer of the object created by the new() operator
	POINTER_AUTOMATIC
}ENUM_POINTER_TYPE;


//Events
bool  EventSetMillisecondTimer(
	int  milliseconds      // number of milliseconds 
);

bool  EventSetTimer(
	int  seconds      // number of seconds 
);

void  EventKillTimer();

bool  EventChartCustom(
	_long    chart_id,            // identifier of the event receiving chart 
	ushort  custom_event_id,     // event identifier 
	_long    lparam,              // parameter of type long 
	double  dparam,              // parameter of type double 
	string  sparam               // string parameter of the event 
);
//Common Functions
void  Alert(
	string argument,     // first value 
	...           // other values 
);



ENUM_POINTER_TYPE  CheckPointer(
	object* anyobject      // object pointer 
);

void  Comment(
	string argument,     // first value 
	...           // next values 
);


int  CryptEncode(
	ENUM_CRYPT_METHOD   method,        // method 
	const uchar        data[],        // source array 
	const uchar        key[],         // key 
	uchar             result[]       // destination array 
);
int  CryptDecode(
	ENUM_CRYPT_METHOD   method,        // method 
	const uchar        data[],        // source array 
	const uchar        key[],         // key 
	uchar              result[]       // destination array 
);

void  MT4_DebugBreak();

void  ExpertRemove();

void*  GetPointer(
	object* anyobject      // object of any class 
);

uint  MT4_GetTickCount();

ulong  GetMicrosecondCount();

int  MT4_MessageBox(
	string  text,             // message text 
	string  caption = NULL,     // box header 
	int     flags = 0           // defines set of buttons in the box 
);

int  PeriodSeconds(
	ENUM_TIMEFRAMES  period = PERIOD_CURRENT      // chart period 
);

bool  PlaySound(
	string  filename      // file name 
);
void  MT4_Print(
	string argument,     // first value 
	...           // next values 
);

void  PrintFormat(
	string format_string,   // format string 
	...                     // values of simple types 
);

void  ResetLastError();


bool  ResourceCreate(
	const string      resource_name,       // Resource name 
	const string      path                 // A relative path to the file 
);

bool  ResourceCreate(
	const string      resource_name,       // Resource name 
	const uint       data[],              // Data set as an array 
	uint              img_width,           // The width of the image resource 
	uint              img_height,          // The height of the image resource 
	uint              data_xoffset,        // The horizontal rightward offset of the upper left corner of the image 
	uint              data_yoffset,        // The vertical downward offset of the upper left corner of the image 
	uint              data_width,          // The total width of the image based on the data set 
	ENUM_COLOR_FORMAT color_format         // Color processing method 
);
bool  ResourceFree(
	const string  resource_name      // resource name 
);
bool  ResourceReadImage(
	const string      resource_name,       // graphical resource name for reading 
	uint             data[],              // array for receiving data from the resource 
	uint&             width,               // for receiving the image width in the resource 
	uint&             height               // for receiving the image height in the resource 
);

bool  ResourceSave(
	const string  resource_name,     // Resource name 
	const string  file_name          // File name 
);

void  SetUserError(
	ushort user_error   // error number 
);

bool  SendFTP(
	string  filename,          // file to be send by ftp 
	string  ftp_path = NULL      // ftp catalog 
);

bool  SendNotification(
	string  text          // Text of the notification 
);

bool  SendMail(
	string  subject,       // header 
	string  some_text      // email text 
);

void  Sleep(
	int  milliseconds      // interval 
);

bool  TerminalClose(
	int ret_code      // closing code of the client terminal 
);


double  TesterStatistics(
	ENUM_STATISTICS statistic_id      // ID 
);

short  TranslateKey(
	int  key_code      // key code for receiving a Unicode character 
);

int  WebRequest(
	const string      method,           // HTTP method  
	const string      url,              // URL 
	const string      cookie,           // cookie 
	const string      referer,          // referer 
	int               timeout,          // timeout 
	const char   data[],          // the array of the HTTP message body 
	int               data_size,        // data[] array size in bytes 
	char         result[],        // an array containing server response data 
	string            &result_headers   // headers of server response 
);

int  WebRequest(
	const string      method,           // HTTP method 
	const string      url,              // URL 
	const string      headers,          // headers  
	int               timeout,          // timeout 
	const char   data[],          // the array of the HTTP message body 
	char         result[],        // an array containing server response data 
	string            &result_headers   // headers of server response 
);

//void  ZeroMemory(
//	void* variable      // reset variable 
//);
//NOTICE: values maybe wrong
#define WHOLE_ARRAY 0
#define MODE_ASCEND +1
#define MODE_DESCEND -1
#define EMPTY -1

//NULL Zero for any types.Also indicates empty state of the string 0
//EMPTY Indicates empty state of the parameter - 1
//EMPTY_VALUE Empty value in an indicator buffer.Default custom indicator empty value 2147483647 (0x7FFFFFFF)
//CLR_NONE, clrNONE Absence of color.Indicates empty state of colors - 1
//CHARTS_MAX The maximum possible number of simultaneously open charts in the terminal 100
//INVALID_HANDLE Incorrect handle - 1
//IS_DEBUG_MODE Flag that a mql4 - program operates in debug mode non zero in debug mode, otherwise zero
//IS_PROFILE_MODE Flag that a mql4 - program operates in profiling mode non zero in profiling mode, otherwise zero
//WHOLE_ARRAY Used with array functions.Indicates that all array elements will be processed.Means the number of items remaining until the end of the array, i.e., the entire array will be processed 0
//WRONG_VALUE The constant can be implicitly cast to any enumeration type - 1

//Array Functions
int  ArrayBsearch(
	const double   array[],               // array for search 
	double          value,                 // what is searched for 
	int             count = WHOLE_ARRAY,     // count of elements to search for 
	int             start = 0,               // starting position 
	int             direction = MODE_ASCEND  // search direction 
);
int  ArrayBsearch(
	const float    array[],               // array for search 
	float           value,                 // what is searched for 
	int             count = WHOLE_ARRAY,     // count of elements to search for 
	int             start = 0,               // starting position 
	int             direction = MODE_ASCEND  // search direction 
);
int  ArrayBsearch(
	const _long    array[],               // array for search 
	_long           value,                 // what is searched for 
	int            count = WHOLE_ARRAY,     // count of elements to search for 
	int            start = 0,               // starting position 
	int            direction = MODE_ASCEND  // search direction 
);

int  ArrayBsearch(
	const int   array[],               // array for search 
	int           value,                 // what is searched for 
	int           count = WHOLE_ARRAY,     // count of elements to search for 
	int           start = 0,               // starting position 
	int           direction = MODE_ASCEND  // search direction 
);

int  ArrayBsearch(
	const short   array[],               // array for search 
	short          value,                 // what is searched for 
	int            count = WHOLE_ARRAY,     // count of elements to search for 
	int            start = 0,               // starting position 
	int            direction = MODE_ASCEND  // search direction 
);

int  ArrayBsearch(
	const char    array[],               // array for search 
	char           value,                 // what is searched for 
	int            count = WHOLE_ARRAY,     // count of elements to search for 
	int            start = 0,               // starting position 
	int            direction = MODE_ASCEND  // search direction 
);

int  ArrayCopy(
	void*        dst_array/*[]*/,         // destination array 
	const void*  src_array/*[]*/,         // source array 
	int          dst_start = 0,         // index starting from which write into destination array 
	int          src_start = 0,         // first index of a source array 
	int          count = WHOLE_ARRAY    // number of elements 
);

int  ArrayCompare(
	const void*  array1/*[]*/,            // first array 
	const void*  array2/*[]*/,            // second array 
	int          start1 = 0,            // initial offset in the first array 
	int          start2 = 0,            // initial offset in the second array 
	int          count = WHOLE_ARRAY    // number of elements for comparison 
);
void  ArrayFree(
	void*  array/*[]*/      // array 
);

bool  ArrayGetAsSeries(
	const void*  array/*[]*/    // array for checking 
);
int  ArrayInitialize(
	char    array[],     // initialized array 
	char    value        // value that will be set 
);
int  ArrayInitialize(
	short   array[],     // initialized array 
	short   value        // value that will be set 
);
int  ArrayInitialize(
	int     array[],     // initialized array 
	int     value        // value that will be set 
);
int  ArrayInitialize(
	_long    array[],     // initialized array 
	_long    value        // value that will be set 
);

int  ArrayInitialize(
	float   array[],     // initialized array 
	float   value        // value that will be set 
);
int  ArrayInitialize(
	double  array[],     // initialized array 
	double  value        // value that will be set 
);
int  ArrayInitialize(
	bool    array[],     // initialized array 
	bool    value        // value that will be set 
);
int  ArrayInitialize(
	uint    array[],     // initialized array 
	uint    value        // value that will be set 
);
void  ArrayFill(
	void*  array/*[]*/,      // array 
	int    start,        // starting index 
	int    count,        // number of elements to fill 
	void*   value         // value 
);
bool  ArrayIsDynamic(
	const void*  array/*[]*/    // checked array 
);

bool  ArrayIsSeries(
	const void*  array/*[]*/    // checked array 
);

int  ArrayMaximum(
	const void*  array/*[]*/,             // array for search 
	int           count = WHOLE_ARRAY,   // number of checked elements 
	int           start = 0              // index to start checking with 
);

int  ArrayMinimum(
	const void*  array/*[]*/,             // array for search 
	int           count = WHOLE_ARRAY,   // number of checked elements 
	int           start = 0              // index to start checking with 
);
int  ArrayRange(
	const void*  array/*[]*/,      // array for check 
	int           rank_index    // index of dimension 
);

int  ArrayResize(
	void*  array/*[]*/,              // array passed by reference 
	int    new_size,             // new array size 
	int    reserve_size = 0        // reserve size value (excess) 
);
bool  ArraySetAsSeries(
	const void*  array/*[]*/,    // array by reference 
	bool         flag        // true denotes reverse order of indexing 
);

int  ArraySize(
	const void*  array/*[]*/   // checked array 
);
bool  ArraySort(
	void*  array/*[]*/,                // array for sorting 
	int         count = WHOLE_ARRAY,      // count 
	int         start = 0,                // starting index 
	int         direction = MODE_ASCEND   // sort direction 
);

int  ArrayCopyRates(
	MqlRates*  rates_array/*[]*/,   // MqlRates array, passed by reference 
	string     symbol = NULL,     // symbol 
	int        timeframe = 0      // timeframe 
);
int  ArrayCopyRates(
	void**     dest_array/*[][]*/,    // destination array, passed by reference 
	string    symbol = NULL,       // symbol 
	int       timeframe = 0        // timeframe 
);
int  ArrayCopySeries(
	void*  array/*[]*/,           // destination array 
	int    series_index,      // series array identifier 
	string symbol = NULL,       // symbol 
	int    timeframe = 0        // timeframe 
);
int  ArrayDimension(
	void*  array/*[]*/           // array 
);

//Conversions
string  CharToString(
	uchar  char_code      // numeric code of symbol 
);

string  CharArrayToString(
	uchar  array[],              // array 
	int    start = 0,              // starting position in the array 
	int    count = -1,             // number of symbols 
	uint   codepage = CP_ACP       // code page 
);
uint  ColorToARGB(
	color  clr,          // converted color in color format 
	uchar  alpha = 255     // alpha channel managing color transparency 
);

string  ColorToString(
	color  color_value,     // color value 
	bool   color_name       // show color name or not 
);
string  DoubleToString(
	double  value,      // number 
	int     digits = 8    // number of digits after decimal point 
);
string  EnumToString(
	/*any_enum */int  value      // any type enumeration value 
);
string  IntegerToString(
	_long    number,              // number 
	int     str_len = 0,           // length of result string 
	ushort  fill_symbol = ' '      // filler 
);
string  ShortToString(
	ushort  symbol_code      // symbol 
);
string  ShortArrayToString(
	ushort  array[],      // array 
	int     start = 0,      // starting position in the array 
	int     count = -1      // number of symbols 
);
string  TimeToString(
	datetime  value,                           // number 
	int       mode = TIME_DATE | TIME_MINUTES      // output format 
);
double  NormalizeDouble(
	double  value,      // normalized number 
	int     digits      // number of digits after decimal point 
);
int  StringToCharArray(
	string  text_string,         // source string 
	uchar  array[],             // array 
	int     start = 0,             // starting position in the array 
	int     count = -1,            // number of symbols 
	uint    codepage = CP_ACP      // code page 
);
color  StringToColor(
	string  color_string      // string representation of color 
);
double  StringToDouble(
	string  value      // string 
);
_long  StringToInteger(
	string  value      // string 
);
int  StringToShortArray(
	string  text_string,     // source string 
	ushort array[],         // array 
	int     start = 0,         // starting position in the array 
	int     count = -1         // number of symbols 
);
datetime  StringToTime(
	string  value      // date string 
);

string  StringFormat(
	string  format,     // string with format description 
	...              // parameters 
);
string  CharToStr(
	uchar  char_code     // ASCII-code 
);
string  DoubleToStr(
	double  value,     // value 
	int     digits     // precision 
);
double  StrToDouble(
	string  value      // value 
);
int  StrToInteger(
	string  value      // string 
);
datetime  StrToTime(
	string  value      // string 
);
string  TimeToStr(
	datetime  value,                           // value 
	int       mode = TIME_DATE | TIME_MINUTES      // format 
);
//Math Functions
double  MathAbs(
	double  value      // numeric value 
);
double  MathArccos(
	double  val     // -1<val<1 
);
double  MathArcsin(
	double  val      // -1<value<1 
);
double  MathArctan(
	double  value      // tangent 
);
double  MathCeil(
	double  val      // number 
);
double  MathCos(
	double  value      // number 
);
double  MathExp(
	double  value      // power for the number e 
);
double  MathFloor(
	double  val     // number 
);
double  MathLog(
	double  val      // value to take the logarithm 
);
double  MathLog10(
	double  val      // number to take logarithm 
);
double  MathMax(
	double  value1,     // first value 
	double  value2      // second value 
);
double  MathMin(
	double  value1,     // first value 
	double  value2      // second value 
);
double  MathMod(
	double  value,      // dividend value 
	double  value2      // divisor value 
);
double  MathPow(
	double  base,         // base  
	double  exponent      // exponent value 
);
int  MathRand();
double  MathRound(
	double  value      // value to be rounded 
);
double  MathSin(
	double  value      // argument in radians 
);
double  MathSqrt(
	double  value      // positive number 
);
void  MathSrand(
	int  seed      // initializing number 
);
double  MathTan(
	double  rad      // argument in radians 
);
bool  MathIsValidNumber(
	double  number      // number to check 
);
bool  StringAdd(
	string&  string_var,        // string, to which we add 
	string   add_substring      // string, which is added 
);
int  StringBufferLen(
	string  string_var      // string 
);
int  StringCompare(
	const string&  string1,                 // the first string in the comparison 
	const string&  string2,                 // the second string in the comparison 
	bool           case_sensitive = true      // case sensitivity mode selection for the comparison 
);
string  StringConcatenate(
	void* argument1,        // first parameter of any simple type 
	void* argument2,        // second parameter of any simple type 
	...                    // next parameter of any simple type 
);
bool  StringFill(
	string&   string_var,       // string to fill 
	ushort    character         // symbol that will fill the string 
);
int  StringFind(
	string  string_value,        // string in which search is made 
	string  match_substring,     // what is searched 
	int     start_pos = 0          // from what position search starts 
);
ushort  StringGetCharacter(
	string  string_value,     // string 
	int     pos               // symbol position in the string 
);
bool  StringInit(
	string&   string_var,       // string to initialize 
	int       new_len = 0,        // required string length after initialization 
	ushort    character = 0       // symbol, by which the string will be filled 
);
int  StringLen(
	string  string_value      // string 
);
int  StringReplace(
	string&         str,              // the string in which substrings will be replaced 
	const string    find,             // the searched substring 
	const string    replacement       // the substring that will be inserted to the found positions 
);
bool  StringSetCharacter(
	string&   string_var,       // string 
	int       pos,              // position 
	ushort    character         // character 
);
int  StringSplit(
	const string   string_value,       // A string to search in 
	const ushort   separator,          // A separator using which substrings will be searched 
	string    result[]          // An array passed by reference to get the found substrings 
);

string  StringSubstr(
	string  string_value,     // string 
	int     start_pos,        // position to start with 
	int     length = 0          // length of extracted string 
);

bool  StringToLower(
	string&  string_var      // string to process 
);
bool  StringToUpper(
	string&  string_var      // string to process 
);
string  StringTrimLeft(
	const string  text      // string to cut 
);
string  StringTrimRight(
	const string  text      // string to cut 
);
ushort  StringGetChar(
	string  string_value,     // string 
	int     pos               // position 
);
string  StringSetChar(
	string    string_var,       // string 
	int       pos,              // position 
	ushort    value             // char code 
);
datetime  TimeCurrent();
datetime  TimeLocal();
datetime  TimeGMT();
int  TimeDaylightSavings();
int  TimeGMTOffset();
void  TimeToStruct(
	datetime      dt,            // date and time 
	MqlDateTime&  dt_struct      // structure for the adoption of values 
);
datetime  StructToTime(
	MqlDateTime&  dt_struct      // structure of the date and time 
);
int  Seconds();
int  Minute();
int  Hour();
int  Day();
int  DayOfWeek();
int  DayOfYear();
int  Month();
int  Year();
int  TimeDay(
	datetime      date            // date and time 
);
int  TimeDayOfWeek(
	datetime      date            // date and time 
);
int  TimeDayOfYear(
	datetime      date            // date and time 
);
int  TimeHour(
	datetime      date            // date and time 
);
int  TimeMinute(
	datetime      date            // date and time 
);
int  TimeMonth(
	datetime      date            // date and time 
);
int  TimeSeconds(
	datetime      date            // date and time 
);
int  TimeYear(
	datetime      date            // date and time 
);

//Account Functions

double  AccountInfoDouble(
	int  property_id      // identifier of the property 
);
_long  AccountInfoInteger(
	int  property_id      // Identifier of the property 
);
string  AccountInfoString(
	int  property_id      // Identifier of the property 
);
double  AccountBalance();
double  AccountCredit();
string  AccountCompany();
string  AccountCurrency();
double  AccountEquity();
double  AccountFreeMargin();
double  AccountFreeMarginCheck(
	string  symbol,     // symbol 
	int     cmd,        // trade operation 
	double  volume      // volume 
);
double  AccountFreeMarginMode();
int  AccountLeverage();
double  AccountMargin();
string  AccountName();
int  AccountNumber();
double  AccountProfit();
string  AccountServer();
int  AccountStopoutLevel();
int  AccountStopoutMode();

//Checkup Functions
int  MT4_GetLastError();
bool  IsStopped();
int  UninitializeReason();
int  MQLInfoInteger(
	int  property_id      // identifier of a property 
);
string  MQLInfoString(
	int  property_id      // Identifier of a property 
);
void  MQLSetInteger(
	int  property_id,         // identifier of a property 
	int  property_value       // value to be set 
);
int  TerminalInfoInteger(
	int  property_id      // identifier of a property 
);
double  TerminalInfoDouble(
	int  property_id      // identifier of a property 
);
string  TerminalInfoString(
	int  property_id      // identifier of a property 
);

int  Digits();
double  Point();
bool  IsConnected();
bool  IsDemo();
bool  IsDllsAllowed();
bool  IsExpertEnabled();
bool  IsLibrariesAllowed();
bool  IsOptimization();
bool  IsTesting();
bool  IsTradeAllowed();
bool  IsTradeContextBusy();
bool  IsVisualMode();
string  TerminalCompany();
string  TerminalName();
string  TerminalPath();

//Market Info Functions:
double  MarketInfo(
	string           symbol,     // symbol 
	int              type        // information type 
);
int  SymbolsTotal(
	bool  selected      // True - only symbols in MarketWatch 
);
string  SymbolName(
	int   pos,          // number in the list 
	bool  selected      // true - only symbols in MarketWatch 
);
bool  SymbolSelect(
	string  name,       // symbol name 
	bool    select      // add or remove 
);

double  SymbolInfoDouble(
	string                   name,       // symbol 
	ENUM_SYMBOL_INFO_DOUBLE  prop_id     // identifier of the property 
);
_long  SymbolInfoInteger(
	string                    name,      // symbol 
	ENUM_SYMBOL_INFO_INTEGER  prop_id    // identifier of a property 

);
bool  SymbolInfoInteger(
	string                    name,      // symbol 
	ENUM_SYMBOL_INFO_INTEGER  prop_id,   // identifier of a property 
	_long&                     long_var   // here we accept the property value 
);
string  SymbolInfoString(
	string                   name,        // Symbol 
	ENUM_SYMBOL_INFO_STRING  prop_id      // Property identifier 
);

bool  SymbolInfoString(
	string                   name,        // Symbol 
	ENUM_SYMBOL_INFO_STRING  prop_id,     // Property identifier 
	string&                  string_var   // Here we accept the property value 
);

bool  SymbolInfoTick(
	string    symbol,     // symbol name 
	MqlTick&  tick        // reference to a structure 
);

bool  SymbolInfoSessionQuote(
	string            name,                // symbol name 
	ENUM_DAY_OF_WEEK  day_of_week,         // day of the week 
	uint              session_index,       // session index 
	datetime&         from,                // time of the session beginning 
	datetime&         to                   // time of the session end 
);

bool  SymbolInfoSessionTrade(
	string            name,                // symbol name 
	ENUM_DAY_OF_WEEK  day_of_week,         // day of the week 
	uint              session_index,       // session index 
	datetime&         from,                // session beginning time 
	datetime&         to                   // session end time 
);

//Time series and indicator access functions:
_long  SeriesInfoInteger(
	string                     symbol_name,     // symbol name 
	ENUM_TIMEFRAMES            timeframe,       // period 
	ENUM_SERIES_INFO_INTEGER   prop_id          // property identifier 
);
bool  SeriesInfoInteger(
	string                     symbol_name,     // symbol name 
	ENUM_TIMEFRAMES            timeframe,       // period 
	ENUM_SERIES_INFO_INTEGER   prop_id,         // property ID 
	_long&                      long_var         // variable for getting info 
);
bool  RefreshRates();
int  CopyRates(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	int              start_pos,         // start position 
	int              count,             // data count to copy 
	MqlRates         rates_array[]      // target array to copy 
);
int  CopyRates(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	datetime         start_time,        // start date and time 
	int              count,             // data count to copy 
	MqlRates         rates_array[]      // target array to copy 
);
int  CopyRates(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	datetime         start_time,        // start date and time 
	datetime         stop_time,         // end date and time 
	MqlRates         rates_array[]      // target array to copy 
);
int  CopyTime(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	int              start_pos,       // start position 
	int              count,           // data count to copy 
	datetime         time_array[]     // target array to copy open times 
);
int  CopyTime(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	int              count,           // data count to copy 
	datetime         time_array[]     // target array to copy  open times 
);
int  CopyTime(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	datetime         stop_time,       // stop date and time 
	datetime         time_array[]     // target array to copy open times 
);
int  CopyOpen(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	int              start_pos,       // start position 
	int              count,           // data count to copy 
	double           open_array[]     // target array to copy open prices 
);
int  CopyOpen(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	int              count,           // data count to copy 
	double           open_array[]     // target array for bar open prices 
);
int  CopyOpen(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	datetime         stop_time,       // stop date and time 
	double           open_array[]     // target array for bar open values 
);
int  CopyHigh(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	int              start_pos,        // start position 
	int              count,            // data count to copy 
	double           high_array[]      // target array to copy 
);

int  CopyHigh(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	datetime         start_time,       // start date and time 
	int              count,            // data count to copy 
	double           high_array[]      // target array to copy 
);
int  CopyHigh(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	datetime         start_time,       // start date and time 
	datetime         stop_time,        // stop date and time 
	double           high_array[]      // target array to copy 
);
int  CopyLow(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	int              start_pos,       // start position 
	int              count,           // data count to copy 
	double           low_array[]      // target array to copy 
);
int  CopyLow(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	int              count,           // data count to copy 
	double           low_array[]      // target array to copy 
);
int  CopyLow(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	datetime         stop_time,       // stop date and time 
	double           low_array[]      // target array to copy 
);
int  CopyClose(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	int              start_pos,         // start position 
	int              count,             // data count to copy 
	double           close_array[]      // target array to copy 
);
int  CopyClose(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	datetime         start_time,        // start date and time 
	int              count,             // data count to copy 
	double           close_array[]      // target array to copy 
);
int  CopyClose(
	string           symbol_name,       // symbol name 
	ENUM_TIMEFRAMES  timeframe,         // period 
	datetime         start_time,        // start date and time 
	datetime         stop_time,         // stop date and time 
	double           close_array[]      // target array to copy 
);
int  CopyTickVolume(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	int              start_pos,        // start position 
	int              count,            // data count to copy 
	_long             volume_array[]    // target array for tick volumes 
);
int  CopyTickVolume(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	datetime         start_time,       // start date and time 
	int              count,            // data count to copy 
	_long             volume_array[]    // target array for tick volumes 
);
int  CopyTickVolume(
	string           symbol_name,      // symbol name 
	ENUM_TIMEFRAMES  timeframe,        // period 
	datetime         start_time,       // start date and time 
	datetime         stop_time,        // stop date and time 
	_long             volume_array[]    // target array for tick volumes 
);
int  Bars(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe        // period 
);
int  Bars(
	string           symbol_name,     // symbol name 
	ENUM_TIMEFRAMES  timeframe,       // period 
	datetime         start_time,      // start date and time 
	datetime         stop_time        // end date and time 
);
int  iBars(
	string           symbol,          // symbol 
	int              timeframe        // timeframe 
);
int  iBarShift(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	datetime         time,            // time 
	bool             exact = false      // mode 
);
double  iClose(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);
double  iHigh(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);
int  iHighest(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              type,            // timeseries 
	int              count,           // cont 
	int              start            // start 
);
double  iLow(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);
int  iLowest(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              type,            // timeseries id 
	int              count,           // count 
	int              start            // starting index 
);
double  iOpen(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);
datetime  iTime(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);
_long  iVolume(
	string           symbol,          // symbol 
	int              timeframe,       // timeframe 
	int              shift            // shift 
);

//Chart Operations
bool  ChartApplyTemplate(
	_long          chart_id,     // Chart ID 
	const string  filename      // Template file name 
);
bool  ChartSaveTemplate(
	_long          chart_id,     // Chart ID 
	const string  filename      // Filename to save the template 
);
int  ChartWindowFind(
	_long     chart_id,                  // chart identifier 
	string   indicator_shortname        // short indicator name, see INDICATOR_SHORTNAME 
);
int  ChartWindowFind();
bool  ChartTimePriceToXY(
	_long           chart_id,     // Chart ID 
	int            sub_window,   // The number of the subwindow 
	datetime       time,         // Time on the chart 
	double         price,        // Price on the chart 
	int&           x,            // The X coordinate for the time on the chart 
	int&           y             // The Y coordinates for the price on the chart 
);
bool  ChartXYToTimePrice(
	_long           chart_id,     // Chart ID 
	int            x,            // The X coordinate on the chart 
	int            y,            // The Y coordinate on the chart 
	int&           sub_window,   // The number of the subwindow 
	datetime&      time,         // Time on the chart 
	double&        price         // Price on the chart 
);
_long  ChartOpen(
	string           symbol,     // Symbol name 
	ENUM_TIMEFRAMES  period      // Period 
);
_long  ChartFirst();
_long  ChartNext(
	_long  chart_id      // Chart ID 
);
bool  ChartClose(
	_long  chart_id = 0      // Chart ID 
);
string  ChartSymbol(
	_long  chart_id = 0      // Chart ID 
);
ENUM_TIMEFRAMES  ChartPeriod(
	_long  chart_id = 0      // Chart ID 
);
void  ChartRedraw(
	_long  chart_id = 0      // Chart ID 
);
bool  ChartSetDouble(
	_long    chart_id,     // Chart ID 
	int     prop_id,      // Property ID 
	double  value         // Value 
);
bool  ChartSetInteger(
	_long   chart_id,     // Chart ID 
	int    prop_id,      // Property ID 
	_long   value         // Value 
);
bool  ChartSetInteger(
	_long   chart_id,     // Chart ID 
	int    property_id,  // Property ID 
	uint   sub_window,   // Chart subwindow 
	_long   value         // Value 
);
bool  ChartSetString(
	_long     chart_id,      // Chart ID 
	int      prop_id,       // Property ID 
	string   str_value      // Value 
);
double  ChartGetDouble(
	_long  chart_id,          // Chart ID 
	int   prop_id,           // Property ID 
	int   sub_window = 0       // subwindow number, if necessary 
);

bool  ChartGetDouble(
	_long    chart_id,        // Chart ID 
	int     prop_id,         // Property ID 
	int     sub_window,      // Subwindow number 
	double& double_var       // Target variable for the chart property 
);
_long  ChartGetInteger(
	_long  chart_id,          // Chart ID 
	int   prop_id,           // Property ID 
	int   sub_window = 0       // subwindow number, if necessary 
);
bool  ChartGetInteger(
	_long    chart_id,        // Chart ID 
	int     prop_id,         // Property ID 
	int     sub_window,      // subwindow number 
	_long&   long_var         // Target variable for the property 
);
string  ChartGetString(
	_long  chart_id,          // Chart ID 
	int   prop_id            // Property ID 
);
bool  ChartGetString(
	_long    chart_id,        // Chart ID 
	int     prop_id,         // Property ID 
	string& string_var       // Target variable for the property 
);
bool  ChartNavigate(
	_long  chart_id,     // Chart ID 
	int   position,     // Position 
	int   shift = 0       // Shift value 
);
_long  ChartID();
bool  ChartIndicatorDelete(
	_long           chart_id,              // chart id 
	int            sub_window,            // number of the subwindow 
	const string   indicator_shortname    // short name of the indicator 
);
string  ChartIndicatorName(
	_long  chart_id,      // chart id 
	int   sub_window,    // number of the subwindow 
	int   index          // index of the indicator in the list of indicators added to the chart subwindow 
);
int  ChartIndicatorsTotal(
	_long  chart_id,      // chart id 
	int   sub_window     // number of the subwindow 
);
int  ChartWindowOnDropped();
double  ChartPriceOnDropped();
datetime  ChartTimeOnDropped();
int  ChartXOnDropped();
int  ChartYOnDropped();
bool  ChartSetSymbolPeriod(
	_long             chart_id,     // Chart ID 
	string           symbol,       // Symbol name 
	ENUM_TIMEFRAMES  period        // Period 
);

bool  ChartScreenShot(
	_long             chart_id,                   // Chart ID 
	string           filename,                   // Symbol name 
	int              width,                      // Width 
	int              height,                     // Height 
	ENUM_ALIGN_MODE  align_mode = ALIGN_RIGHT      // Alignment type 
);
int  Period();
string  Symbol();
int  WindowBarsPerChart();
string  WindowExpertName();
int  WindowFind(
	string       name   // name 
);
int  WindowFirstVisibleBar();
int  WindowHandle(
	string       symbol,     // symbol 
	int          timeframe   // timeframe 
);
int  WindowIsVisible(
	int       index     // subwindow 
);
int  WindowOnDropped();
int  WindowPriceMax(
	int       index = 0   // subwindow 
);
int  WindowPriceMin(
	int       index = 0   // subwindow 
);
double  WindowPriceOnDropped();
void  WindowRedraw();

bool  WindowScreenShot(
	string           filename,                   // file name 
	int              size_x,                     // width 
	int              size_y,                     // height 
	int              start_bar = -1,               // first visible bar 
	int              chart_scale = -1,             // scale 
	int              chart_mode = -1               // mode 
);
datetime  WindowTimeOnDropped();
int  WindowsTotal();
int  WindowXOnDropped();
int  WindowYOnDropped();

//Order Functions:
bool  OrderClose(
	int        ticket,      // ticket 
	double     lots,        // volume 
	double     price,       // close price 
	int        slippage,    // slippage 
	color      arrow_color  // color 
);
bool  OrderCloseBy(
	int        ticket,      // ticket to close 
	int        opposite,    // opposite ticket 
	color      arrow_color  // color 
);
double  OrderClosePrice();
datetime  OrderCloseTime();
string  OrderComment();
double  OrderCommission();
bool  OrderDelete(
	int        ticket,      // ticket 
	color      arrow_color  // color 
);
datetime  OrderExpiration();
double  OrderLots();
int  OrderMagicNumber();
bool  OrderModify(
	int        ticket,      // ticket 
	double     price,       // price 
	double     stoploss,    // stop loss 
	double     takeprofit,  // take profit 
	datetime   expiration,  // expiration 
	color      arrow_color  // color 
);
double  OrderOpenPrice();
datetime  OrderOpenTime();
void  OrderPrint();
double  OrderProfit();



bool  OrderSelect(
	int     index,            // index or order ticket 
	int     select,           // flag 
	int     pool = MODE_TRADES  // mode 
);
int  OrderSend(
	string   symbol,              // symbol 
	int      cmd,                 // operation 
	double   volume,              // volume 
	double   price,               // price 
	int      slippage,            // slippage 
	double   stoploss,            // stop loss 
	double   takeprofit,          // take profit 
	string   comment = NULL,        // comment 
	int      magic = 0,             // magic number 
	datetime expiration = 0,        // pending order expiration 
	color    arrow_color = clrNONE  // color 
);
int  OrdersHistoryTotal();
double  OrderStopLoss();
int  OrdersTotal();
double  OrderSwap();
string  OrderSymbol();
double  OrderTakeProfit();
int  OrderTicket();
int  OrderType();

//Trade Signals:
double  SignalBaseGetDouble(
	ENUM_SIGNAL_BASE_DOUBLE     property_id     // property identifier 
);
_long  SignalBaseGetInteger(
	ENUM_SIGNAL_BASE_INTEGER     property_id     // property identifier 
);
string  SignalBaseGetString(
	ENUM_SIGNAL_BASE_STRING     property_id     // property identifier 
);
bool  SignalBaseSelect(
	int     index     // signal index 
);
int  SignalBaseTotal();

double  SignalInfoGetDouble(
	ENUM_SIGNAL_INFO_DOUBLE     property_id     // property identifier 
);
_long  SignalInfoGetInteger(
	ENUM_SIGNAL_INFO_INTEGER     property_id     // property identifier 
);
string  SignalInfoGetString(
	ENUM_SIGNAL_INFO_STRING     property_id     // property identifier 
);
bool  SignalInfoSetDouble(
	ENUM_SIGNAL_INFO_DOUBLE      property_id,     // property identifier 
	double                       value            // new value 
);
bool  SignalInfoSetInteger(
	ENUM_SIGNAL_INFO_INTEGER     property_id,     // property identifier 
	_long                         value            // new value 
);
bool  SignalSubscribe(
	_long     signal_id     // signal id  
);
bool  SignalUnsubscribe();

//Global Variables
bool  GlobalVariableCheck(
	string  name      // Global variable name 
);
datetime  GlobalVariableTime(
	string  name      // name 
);
bool  GlobalVariableDel(
	string  name      // Global variable name 
);
double  GlobalVariableGet(
	string  name      // Global variable name 
);
bool  GlobalVariableGet(
	string  name,              // Global variable name 
	double& double_var         // This variable will contain the value of the global variable 
);
string  GlobalVariableName(
	int  index      // Global variable number in the list of global variables 
);
datetime  GlobalVariableSet(
	string  name,      // Global variable name 
	double  value      // Value to set 
);
void  GlobalVariablesFlush();
bool  GlobalVariableTemp(
	string  name      // Global variable name 
);
bool  GlobalVariableSetOnCondition(
	string  name,            // Global variable name 
	double  value,           // New value for variable if condition is true 
	double  check_value      // Check value condition 
);
int  GlobalVariablesDeleteAll(
	string     prefix_name = NULL,     // All global variables with names beginning with the prefix 
	datetime   limit_data = 0          // All global variables that were changed before this date 
);
int  GlobalVariablesTotal();

//File Functions:
_long  FileFindFirst(
	const string   file_filter,          // String - search filter 
	string&        returned_filename,    // Name of the file or subdirectory found 
	int            common_flag = 0         // Defines the search 
);
bool  FileFindNext(
	_long      search_handle,         // Search handle 
	string&   returned_filename      // Name of the file or subdirectory found 
);
void  FileFindClose(
	_long  search_handle      //  Search handle 
);
bool  FileIsExist(
	const string  file_name,       // File name 
	int           common_flag = 0    // Search area 
);
int  FileOpen(
	string  file_name,           // File name 
	int     open_flags,          // Combination of flags 
	short   delimiter = ';',       // Delimiter 
	uint    codepage = CP_ACP      // Code page 
);
void  FileClose(
	int  file_handle      // File handle 
);
bool  FileCopy(
	const string  src_file_name,     // Name of a source file 
	int           common_flag,       // Location 
	const string  dst_file_name,     // Name of the destination file 
	int           mode_flags         // Access mode 
);
bool  FileDelete(
	const string  file_name,     // File name to delete  
	int           common_flag = 0  // Location of the file to delete 
);
bool  FileMove(
	const string  src_file_name,    // File name for the move operation 
	int           common_flag,      // Location 
	const string  dst_file_name,    // Name of the destination file 
	int           mode_flags        // Access mode 
);
void  FileFlush(
	int  file_handle      // File handle 
);
_long  FileGetInteger(
	int                         file_handle,   // File handle 
	ENUM_FILE_PROPERTY_INTEGER  property_id    // Property ID 
);
_long  FileGetInteger(
	const string                file_name,            // File name 
	ENUM_FILE_PROPERTY_INTEGER  property_id,          // Property ID 
	bool                        common_folder = false   // The file is viewed in a local folder (false) 
);
bool  FileIsEnding(
	int  file_handle      // File handle 
);
bool  FileIsLineEnding(
	int  file_handle      // File handle 
);
uint  FileReadArray(
	int    file_handle,               // File handle 
	void*  array/*[]*/,                   // Array to record 
	int    start = 0,                   // start array position to write 
	int    count = WHOLE_ARRAY          // count to read 
);
bool  FileReadBool(
	int  file_handle    // File handle 
);
datetime  FileReadDatetime(
	int  file_handle    // File handle 
);
double  FileReadDouble(
	int  file_handle,       // File handle 
	int  size = DOUBLE_VALUE  // Size 
);
float  FileReadFloat(
	int  file_handle    // File handle 
);
int  FileReadInteger(
	int  file_handle,        // File handle 
	int  size = INT_VALUE      // Size of an integer in bytes 
);
_long  FileReadLong(
	int  file_handle    // File handle 
);
double  FileReadNumber(
	int  file_handle    // File handle 
);
string  FileReadString(
	int  file_handle,     // File handle 
	int  length = 0         // Length of the string 
);
uint  FileReadStruct(
	int          file_handle,        // file handle 
	const void*  struct_object,      // target structure to which the contents are read 
	int          size = -1             // structure size in bytes 
);
typedef enum _ENUM_FILE_POSITION
{
	SEEK_SET_,//File beginning
	SEEK_CUR_,//Current position of a file pointer
	SEEK_END_,//File end
}ENUM_FILE_POSITION;
bool  FileSeek(
	int                  file_handle,     // File handle 
	_long                 offset,          // In bytes 
	ENUM_FILE_POSITION   origin           // Position for reference 
);
ulong  FileSize(
	int  file_handle    // File handle 
);
ulong  FileTell(
	int  file_handle    // File handle 
);
uint  FileWrite(
	int  file_handle,   // File handle 
	...                 // List of recorded parameters 
);
uint  FileWriteArray(
	int          file_handle,         // File handle 
	const void*  array/*[]*/,             // Array 
	int          start = 0,             // Start index in the array 
	int          count = WHOLE_ARRAY    // Number of elements 
);
uint  FileWriteDouble(
	int     file_handle,     // File handle 
	double  value            // Value to write 
);
uint  FileWriteFloat(
	int    file_handle,     // File handle 
	float  value            // Value to be written 
);
uint  FileWriteInteger(
	int  file_handle,        // File handle 
	int  value,              // Value to be written 
	int  size = INT_VALUE      // Size in bytes 
);
uint  FileWriteLong(
	int   file_handle,     // File handle 
	_long  value            // Value to be written 
);
uint  FileWriteString(
	int           file_handle,    // File handle 
	const string  text_string,    // string to write 
	int           length = 0       // number of symbols 
);
uint  FileWriteStruct(
	int          file_handle,       // File handle 
	const void*  struct_object,     // link to an object 
	int          size = -1            // size to be written in bytes 
);
bool  FolderCreate(
	string  folder_name,       // String with the name of the new folder 
	int     common_flag = 0      // Scope 
);
bool  FolderDelete(
	string  folder_name,       // String with the name of the folder to delete 
	int     common_flag = 0      // Scope 
);
bool  FolderClean(
	string  folder_name,       // String with the name of the deleted folder 
	int     common_flag = 0      // Scope 
);
int  FileOpenHistory(
	int       filename,       // file name 
	int       mode,           // open mode 
	int       delimiter = ';'   // delimiter 
);
//Custom Indicators Functions:
void  HideTestIndicators(
	bool      hide     // flag 
);
bool  IndicatorSetDouble(
	int     prop_id,           // identifier 
	double  prop_value         // value to be set 
);
bool  IndicatorSetDouble(
	int     prop_id,           // identifier 
	int     prop_modifier,     // modifier 
	double  prop_value         // value to be set 
);
bool  IndicatorSetInteger(
	int  prop_id,           // identifier 
	int  prop_value         // value to be set 
);
bool  IndicatorSetInteger(
	int  prop_id,           // identifier 
	int  prop_modifier,     // modifier 
	int  prop_value         // value to be set 
);
bool  IndicatorSetString(
	int     prop_id,           // identifier 
	string  prop_value         // value to be set 
);
bool  IndicatorSetString(
	int     prop_id,           // identifier 
	int     prop_modifier,     // modifier 
	string  prop_value         // value to be set 
);
typedef enum _ENUM_INDEXBUFFER_TYPE
{

}ENUM_INDEXBUFFER_TYPE;
bool  SetIndexBuffer(
	int                    index,         // buffer index 
	double                 buffer[],      // array 
	ENUM_INDEXBUFFER_TYPE  data_type      // what will be stored 
);
bool  SetIndexBuffer(
	int                    index,         // buffer index 
	double                 buffer[]       // array 
);
bool  IndicatorBuffers(
	int     count         // buffers 
);
int  IndicatorCounted();
void  IndicatorDigits(
	int     digits         // digits 
);
void  IndicatorShortName(
	string     name         // name 
);
void  SetIndexArrow(
	int     index,       // line index 
	int     code         // code 
);
void  SetIndexDrawBegin(
	int     index,       // line index 
	int     begin        // position 
);
void  SetIndexEmptyValue(
	int     index,       // line index 
	double  value        // new "empty value" 
);
void  SetIndexLabel(
	int     index,       // line index 
	string  text         // text 
);
void  SetIndexShift(
	int     index,       // line index 
	int     shift        // shift 
);
void  SetIndexStyle(
	int     index,       // line index 
	int     type,        // line type 
	int     style = EMPTY, // line style 
	int     width = EMPTY, // line width 
	color   clr = clrNONE  // line color 
);
void  SetLevelStyle(
	int     draw_style,       // drawing style 
	int     line_width,       // line width 
	color   clr               // color 
);
void  SetLevelValue(
	int     level,       // level 
	double  value        // value 
);

bool  ObjectCreate(
	_long          chart_id,      // chart ID 
	string        object_name,   // object name 
	ENUM_OBJECT   object_type,   // object type 
	int           sub_window,    // window index 
	datetime      time1,         // time of the first anchor point 
	double        price1,        // price of the first anchor point 
	...
	//datetime      timeN = 0,       // time of the N-th anchor point 
	//double        priceN = 0       // price of the N-th anchor point 
);

bool  ObjectCreate(
	string        object_name,   // object name 
	ENUM_OBJECT   object_type,   // object type 
	int           sub_window,    // window index 
	datetime      time1,         // time of the first anchor point 
	double        price1,        // price of the first anchor point 
	datetime      time2 = 0,       // time of the second anchor point 
	double        price2 = 0,      // price of the second anchor point 
	datetime      time3 = 0,       // time of the third anchor point 
	double        price3 = 0       // price of the third anchor point 
);
string  ObjectName(
	int   object_index   // object index 
);
bool  ObjectDelete(
	_long     chart_id,     // chart ID 
	string   object_name   // object name 
);
bool  ObjectDelete(
	string   object_name   // object name 
);
int  ObjectsDeleteAll(
	_long   chart_id,           // chart ID 
	int    sub_window = EMPTY,   // window index 
	int    object_type = EMPTY   // object type 
);
int  ObjectsDeleteAll(
	int    sub_window = EMPTY,   // window index 
	int    object_type = EMPTY   // object type 
);
int  ObjectsDeleteAll(
	_long           chart_id,   // chart ID 
	const string     prefix,   // prefix in object name 
	int    sub_window = EMPTY,   // window index 
	int    object_type = EMPTY   // object type 
);
int  ObjectFind(
	_long     chart_id,     // chart ID 
	string   object_name   // object name 
);
int  ObjectFind(
	string   object_name   // object name 
);
datetime  ObjectGetTimeByValue(
	_long     chart_id,      // chart ID 
	string   object_name,   // object name 
	double   value,         // price 
	int      line_id = 0      // line identifier 
);
double  ObjectGetValueByTime(
	_long       chart_id,      // chart ID 
	string     object_name,   // object name 
	datetime   time,          // time 
	int        line_id = 0      // line ID 
);
bool  ObjectMove(
	string     object_name,   // object name 
	int        point_index,   // anchor point number 
	datetime   time,          // Time 
	double     price          // Price 
);

int  ObjectsTotal(
	_long  chart_id,          // chart identifier 
	int   sub_window = -1,     // window index 
	int   type = -1            // object type 
);
int  ObjectsTotal(
	int    type = EMPTY        // object type 
);
double  ObjectGetDouble(
	_long     chart_id,         // chart identifier 
	string   object_name,      // object name 
	int      prop_id,          // property identifier 
	int      prop_modifier = 0   // property modifier, if required 
);
bool  ObjectGetDouble(
	_long      chart_id,        // chart identifier 
	string    object_name,     // object name 
	int       prop_id,         // property identifier 
	int       prop_modifier,   // property modifier 
	double&   double_var       // here we accept the property value 
);
_long  ObjectGetInteger(
	_long     chart_id,         // chart identifier 
	string   object_name,      // object name 
	int      prop_id,          // property identifier 
	int      prop_modifier = 0   // property modifier, if required 
);
bool  ObjectGetInteger(
	_long     chart_id,         // chart identifier 
	string   object_name,      // object name 
	int      prop_id,          // property identifier 
	int      prop_modifier,    // property modifier 
	_long&    long_var          // here we accept the property value 
);
string  ObjectGetString(
	_long    chart_id,          // chart identifier 
	string  object_name,       // object name 
	int     prop_id,           // property identifier 
	int     prop_modifier = 0    // property modifier, if required 
);

bool  ObjectGetString(
	_long    chart_id,          // chart identifier 
	string  object_name,       // object name 
	int     prop_id,           // property identifier 
	int     prop_modifier,     // property modifier 
	string& string_var         // here we accept the property value 
);

bool  ObjectSetDouble(
	_long     chart_id,        // chart identifier 
	string   object_name,     // object name 
	int      prop_id,         // property 
	double   prop_value       // value 
);
bool  ObjectSetDouble(
	_long     chart_id,        // chart identifier 
	string   object_name,     // object name 
	int      prop_id,         // property 
	int      prop_modifier,   // modifier 
	double   prop_value       // value 
);
bool  ObjectSetInteger(
	_long     chart_id,       // chart identifier 
	string   object_name,    // object name 
	int      prop_id,        // property 
	_long     prop_value      // value 
);
bool  ObjectSetInteger(
	_long     chart_id,        // chart identifier 
	string   object_name,     // object name 
	int      prop_id,         // property 
	int      prop_modifier,   // modifier 
	_long     prop_value       // value 
);
bool  ObjectSetString(
	_long     chart_id,        // chart identifier 
	string   object_name,     // object name 
	int      prop_id,         // property 
	string   prop_value       // value 
);
bool  ObjectSetString(
	_long     chart_id,        // chart identifier 
	string   object_name,     // object name 
	int      prop_id,         // property 
	int      prop_modifier,   // modifier 
	string   prop_value       // value 
);
bool  TextSetFont(
	const string  name,            // font name or path to font file on the disk 
	int           size,            // font size 
	uint          flags = 0,         // combination of flags 
	int           orientation = 0    // text slope angle 
);
bool  TextOut(
	const string        text,          // displayed text 
	int                 x,             // X coordinate  
	int                 y,             // Y coordinate  
	uint                anchor,        // anchor type 
	uint           data[],       // output buffer 
	uint                width,         // buffer width in pixels 
	uint                height,        // buffer height in pixels 
	uint                color,         // text color 
	ENUM_COLOR_FORMAT   color_format   // color format for output 
);
bool  TextGetSize(
	const string   text,    // text string 
	uint&          width,   // buffer width in pixels 
	uint&          height   // buffer height in pixels 
);
string  ObjectDescription(
	string   object_name   // object name 
);
double  ObjectGet(
	string   object_name,   // object name 
	int      index          // object property 
);
string  ObjectGetFiboDescription(
	string   object_name,   // object name 
	int      index          // level index 
);
int  ObjectGetShiftByValue(
	string   object_name,   // object name 
	double   value          // price 
);
double  ObjectGetValueByShift(
	string   object_name,   // object name 
	int      shift          // bar index 
);
bool  ObjectSet(
	string   object_name,   // object name 
	int      index,         // property index 
	double   value          // value 
);
bool  ObjectSetFiboDescription(
	string   object_name,   // object name 
	int      index,         // level index 
	string   text           // new description 
);
bool  ObjectSetText(
	string   object_name,         // object name 
	string   text,                // description 
	int      font_size = 0,         // font size 
	string   font_name = NULL,      // font name 
	color    text_color = clrNONE   // text color 
);
int  ObjectType(
	string   object_name   // object name 
);

//Indicators
double  iAC(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          shift       // shift 
);
double  iAD(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          shift       // shift 
);
double  iADX(
	string       symbol,        // symbol 
	int          timeframe,     // timeframe 
	int          period,        // averaging period 
	int          applied_price, // applied price 
	int          mode,          // line index 
	int          shift          // shift 
);
double  iAlligator(
	string       symbol,            // symbol 
	int          timeframe,         // timeframe 
	int          jaw_period,        // Jaw line averaging period 
	int          jaw_shift,         // Jaw line shift 
	int          teeth_period,      // Teeth line averaging period 
	int          teeth_shift,       // Teeth line shift 
	int          lips_period,       // Lips line averaging period 
	int          lips_shift,        // Lips line shift 
	int          ma_method,         // averaging method 
	int          applied_price,     // applied price 
	int          mode,              // line index 
	int          shift              // shift 
);
double  iAO(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          shift       // shift 
);
double  iATR(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          period,     // averaging period 
	int          shift       // shift 
);
double  iBearsPower(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iBands(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	double       deviation,        // standard deviations 
	int          bands_shift,      // bands shift 
	int          applied_price,    // applied price 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iBandsOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          period,           // averaging period 
	double       deviation,        // deviation 
	int          bands_shift,      // bands shift 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iBullsPower(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iCCI(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iCCIOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          period,           // averaging period 
	int          shift             // shift 
);

double  iCustom(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	string       name,             // path/name of the custom indicator compiled program 
	...                            // custom indicator input parameters (if necessary) 
	//int          mode,             // line index 
	//int          shift             // shift 
);
double  iDeMarker(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          period,     // averaging period 
	int          shift       // shift 
);
double  iEnvelopes(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          ma_period,        // MA averaging period 
	int          ma_method,        // MA averaging method 
	int          ma_shift,         // moving average shift 
	int          applied_price,    // applied price 
	double       deviation,        // deviation (in percents) 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iEnvelopesOnArray(
	double       array[],          // array with data 
	int          total,            // number of elemements 
	int          ma_period,        // MA averaging period 
	int          ma_method,        // MA averaging method 
	int          ma_shift,         // MA shift 
	double       deviation,        // deviation (in percents) 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iForce(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          ma_method,        // averaging method 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iFractals(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iGator(
	string       symbol,            // symbol 
	int          timeframe,         // timeframe 
	int          jaw_period,        // Jaw line period 
	int          jaw_shift,         // Jaw line shift 
	int          teeth_period,      // Teeth line period 
	int          teeth_shift,       // Teeth line shift 
	int          lips_period,       // Lips line period 
	int          lips_shift,        // Lips line shift 
	int          ma_method,         // MA averaging method 
	int          applied_price,     // applied price 
	int          mode,              // line index 
	int          shift              // shift 
);
double  iIchimoku(
	string       symbol,            // symbol 
	int          timeframe,         // timeframe 
	int          tenkan_sen,        // period of Tenkan-sen line 
	int          kijun_sen,         // period of Kijun-sen line 
	int          senkou_span_b,     // period of Senkou Span B line 
	int          mode,              // line index 
	int          shift              // shift 
);
double  iBWMFI(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          shift       // shift 
);
double  iMomentum(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iMomentumOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          period,           // averaging period 
	int          shift             // shift 
);
double  iMFI(
	string       symbol,     // symbol 
	int          timeframe,  // timeframe 
	int          period,     // averaging period 
	int          shift       // shift 
);
double  iMA(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          ma_period,        // MA averaging period 
	int          ma_shift,         // MA shift 
	int          ma_method,        // averaging method 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iMAOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          ma_period,        // MA averaging period 
	int          ma_shift,         // MA shift 
	int          ma_method,        // MA averaging method 
	int          shift             // shift 
);
double  iOsMA(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          fast_ema_period,  // Fast EMA period 
	int          slow_ema_period,  // Slow EMA period 
	int          signal_period,    // Signal line period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iMACD(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          fast_ema_period,  // Fast EMA period 
	int          slow_ema_period,  // Slow EMA period 
	int          signal_period,    // Signal line period 
	int          applied_price,    // applied price 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iOBV(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iSAR(
	string       symbol,            // symbol 
	int          timeframe,         // timeframe 
	double       step,              // price increment step - acceleration factor 
	double       maximum,           // maximum value of step 
	int          shift              // shift 
);
double  iRSI(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // period 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iRSIOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          period,           // averaging period 
	int          shift             // shift 
);
double  iRVI(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // averaging period 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iStdDev(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          ma_period,        // MA averaging period 
	int          ma_shift,         // MA shift 
	int          ma_method,        // MA averaging method 
	int          applied_price,    // applied price 
	int          shift             // shift 
);
double  iStdDevOnArray(
	double       array[],          // array with data 
	int          total,            // number of elements 
	int          ma_period,        // MA averaging period 
	int          ma_shift,         // MA shift 
	int          ma_method,        // MA averaging method 
	int          shift             // shift 
);
double  iStochastic(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          Kperiod,          // K line period 
	int          Dperiod,          // D line period 
	int          slowing,          // slowing 
	int          method,           // averaging method 
	int          price_field,      // price (Low/High or Close/Close) 
	int          mode,             // line index 
	int          shift             // shift 
);
double  iWPR(
	string       symbol,           // symbol 
	int          timeframe,        // timeframe 
	int          period,           // period 
	int          shift             // shift 
);


