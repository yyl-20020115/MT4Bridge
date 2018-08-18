#include "stdafx.h"
#include "MT4Functions.h"

bool EventSetMillisecondTimer(int milliseconds)
{
	return false;
}

bool EventSetTimer(int seconds)
{
	return false;
}

void EventKillTimer()
{
}

bool EventChartCustom(_long chart_id, ushort custom_event_id, _long lparam, double dparam, string sparam)
{
	return false;
}

void Alert(string argument, ...)
{
}

ENUM_POINTER_TYPE CheckPointer(object * anyobject)
{
	return ENUM_POINTER_TYPE();
}

void Comment(string argument, ...)
{
}

int CryptEncode(ENUM_CRYPT_METHOD method, const uchar data[], const uchar key[], uchar result[])
{
	return 0;
}

int CryptDecode(ENUM_CRYPT_METHOD method, const uchar data[], const uchar key[], uchar result[])
{
	return 0;
}

void MT4_DebugBreak()
{
}

void ExpertRemove()
{
}

void * GetPointer(object * anyobject)
{
	return nullptr;
}

uint MT4_GetTickCount()
{
	return uint();
}

ulong GetMicrosecondCount()
{
	return ulong();
}

int MT4_MessageBox(string text, string caption, int flags)
{
	return 0;
}

int MessageBox(string text, string caption, int flags)
{
	return 0;
}

int PeriodSeconds(ENUM_TIMEFRAMES period)
{
	return 0;
}

bool PlaySound(string filename)
{
	return false;
}

void MT4_Print(string argument, ...)
{
}

void PrintFormat(string format_string, ...)
{
}

void ResetLastError()
{
}

bool ResourceCreate(const string resource_name, const string path)
{
	return false;
}

bool ResourceCreate(const string resource_name, const uint data[], uint img_width, uint img_height, uint data_xoffset, uint data_yoffset, uint data_width, ENUM_COLOR_FORMAT color_format)
{
	return false;
}

bool ResourceFree(const string resource_name)
{
	return false;
}

bool ResourceReadImage(const string resource_name, uint data[], uint & width, uint & height)
{
	return false;
}

bool ResourceSave(const string resource_name, const string file_name)
{
	return false;
}

void SetUserError(ushort user_error)
{
}

bool SendFTP(string filename, string ftp_path)
{
	return false;
}

bool SendNotification(string text)
{
	return false;
}

bool SendMail(string subject, string some_text)
{
	return false;
}

void Sleep(int milliseconds)
{
}

bool TerminalClose(int ret_code)
{
	return false;
}

double TesterStatistics(ENUM_STATISTICS statistic_id)
{
	return 0.0;
}

short TranslateKey(int key_code)
{
	return 0;
}

int WebRequest(const string method, const string url, const string cookie, const string referer, int timeout, const char data[], int data_size, char result[], string & result_headers)
{
	return 0;
}

int WebRequest(const string method, const string url, const string headers, int timeout, const char data[], char result[], string & result_headers)
{
	return 0;
}

int ArrayBsearch(const double array[], double value, int count, int start, int direction)
{
	return 0;
}

int ArrayBsearch(const float array[], float value, int count, int start, int direction)
{
	return 0;
}

int ArrayBsearch(const _long array[], _long value, int count, int start, int direction)
{
	return 0;
}

int ArrayBsearch(const int array[], int value, int count, int start, int direction)
{
	return 0;
}

int ArrayBsearch(const short array[], short value, int count, int start, int direction)
{
	return 0;
}

int ArrayBsearch(const char array[], char value, int count, int start, int direction)
{
	return 0;
}

int ArrayCopy(void * dst_array, const void * src_array, int dst_start, int src_start, int count)
{
	return 0;
}

int ArrayCompare(const void * array1, const void * array2, int start1, int start2, int count)
{
	return 0;
}

void ArrayFree(void * array)
{
}

bool ArrayGetAsSeries(const void * array)
{
	return false;
}

int ArrayInitialize(char array[], char value)
{
	return 0;
}

int ArrayInitialize(short array[], short value)
{
	return 0;
}

int ArrayInitialize(int array[], int value)
{
	return 0;
}

int ArrayInitialize(_long array[], _long value)
{
	return 0;
}

int ArrayInitialize(float array[], float value)
{
	return 0;
}

int ArrayInitialize(double array[], double value)
{
	return 0;
}

int ArrayInitialize(bool array[], bool value)
{
	return 0;
}

int ArrayInitialize(uint array[], uint value)
{
	return 0;
}

void ArrayFill(void * array, int start, int count, void * value)
{
}

bool ArrayIsDynamic(const void * array)
{
	return false;
}

bool ArrayIsSeries(const void * array)
{
	return false;
}

int ArrayMaximum(const void * array, int count, int start)
{
	return 0;
}

int ArrayMinimum(const void * array, int count, int start)
{
	return 0;
}

int ArrayRange(const void * array, int rank_index)
{
	return 0;
}

int ArrayResize(void * array, int new_size, int reserve_size)
{
	return 0;
}

bool ArraySetAsSeries(const void * array, bool flag)
{
	return false;
}

int ArraySize(const void * array)
{
	return 0;
}

bool ArraySort(void * array, int count, int start, int direction)
{
	return false;
}

int ArrayCopyRates(MqlRates * rates_array, string symbol, int timeframe)
{
	return 0;
}

int ArrayCopyRates(void ** dest_array, string symbol, int timeframe)
{
	return 0;
}

int ArrayCopySeries(void * array, int series_index, string symbol, int timeframe)
{
	return 0;
}

int ArrayDimension(void * array)
{
	return 0;
}

string CharToString(uchar char_code)
{
	return string();
}

string CharArrayToString(uchar array[], int start, int count, uint codepage)
{
	return string();
}

uint ColorToARGB(color clr, uchar alpha)
{
	return uint();
}

string ColorToString(color color_value, bool color_name)
{
	return string();
}

string DoubleToString(double value, int digits)
{
	return string();
}

string EnumToString(int value)
{
	return string();
}

string IntegerToString(_long number, int str_len, ushort fill_symbol)
{
	return string();
}

string ShortToString(ushort symbol_code)
{
	return string();
}

string ShortArrayToString(ushort array[], int start, int count)
{
	return string();
}

string TimeToString(datetime value, int mode)
{
	return string();
}

double NormalizeDouble(double value, int digits)
{
	return 0.0;
}

int StringToCharArray(string text_string, uchar array[], int start, int count, uint codepage)
{
	return 0;
}

color StringToColor(string color_string)
{
	return color();
}

double StringToDouble(string value)
{
	return 0.0;
}

_long StringToInteger(string value)
{
	return _long();
}

int StringToShortArray(string text_string, ushort array[], int start, int count)
{
	return 0;
}

datetime StringToTime(string value)
{
	return datetime();
}

string StringFormat(string format, ...)
{
	return string();
}

string CharToStr(uchar char_code)
{
	return string();
}

string DoubleToStr(double value, int digits)
{
	return string();
}

double StrToDouble(string value)
{
	return 0.0;
}

int StrToInteger(string value)
{
	return 0;
}

datetime StrToTime(string value)
{
	return datetime();
}

string TimeToStr(datetime value, int mode)
{
	return string();
}

double MathAbs(double value)
{
	return 0.0;
}

double MathArccos(double val)
{
	return 0.0;
}

double MathArcsin(double val)
{
	return 0.0;
}

double MathArctan(double value)
{
	return 0.0;
}

double MathCeil(double val)
{
	return 0.0;
}

double MathCos(double value)
{
	return 0.0;
}

double MathExp(double value)
{
	return 0.0;
}

double MathFloor(double val)
{
	return 0.0;
}

double MathLog(double val)
{
	return 0.0;
}

double MathLog10(double val)
{
	return 0.0;
}

double MathMax(double value1, double value2)
{
	return 0.0;
}

double MathMin(double value1, double value2)
{
	return 0.0;
}

double MathMod(double value, double value2)
{
	return 0.0;
}

double MathPow(double base, double exponent)
{
	return 0.0;
}

int MathRand()
{
	return 0;
}

double MathRound(double value)
{
	return 0.0;
}

double MathSin(double value)
{
	return 0.0;
}

double MathSqrt(double value)
{
	return 0.0;
}

void MathSrand(int seed)
{
}

double MathTan(double rad)
{
	return 0.0;
}

bool MathIsValidNumber(double number)
{
	return false;
}

bool StringAdd(string & string_var, string add_substring)
{
	return false;
}

int StringBufferLen(string string_var)
{
	return 0;
}

int StringCompare(const string & string1, const string & string2, bool case_sensitive)
{
	return 0;
}

string StringConcatenate(void * argument1, void * argument2, ...)
{
	return string();
}

bool StringFill(string & string_var, ushort character)
{
	return false;
}

int StringFind(string string_value, string match_substring, int start_pos)
{
	return 0;
}

ushort StringGetCharacter(string string_value, int pos)
{
	return ushort();
}

bool StringInit(string & string_var, int new_len, ushort character)
{
	return false;
}

int StringLen(string string_value)
{
	return 0;
}

int StringReplace(string & str, const string find, const string replacement)
{
	return 0;
}

bool StringSetCharacter(string & string_var, int pos, ushort character)
{
	return false;
}

int StringSplit(const string string_value, const ushort separator, string result[])
{
	return 0;
}

string StringSubstr(string string_value, int start_pos, int length)
{
	return string();
}

bool StringToLower(string & string_var)
{
	return false;
}

bool StringToUpper(string & string_var)
{
	return false;
}

string StringTrimLeft(const string text)
{
	return string();
}

string StringTrimRight(const string text)
{
	return string();
}

ushort StringGetChar(string string_value, int pos)
{
	return ushort();
}

string StringSetChar(string string_var, int pos, ushort value)
{
	return string();
}

datetime TimeCurrent()
{
	return datetime();
}

datetime TimeLocal()
{
	return datetime();
}

datetime TimeGMT()
{
	return datetime();
}

int TimeDaylightSavings()
{
	return 0;
}

int TimeGMTOffset()
{
	return 0;
}

void TimeToStruct(datetime dt, MqlDateTime & dt_struct)
{
}

datetime StructToTime(MqlDateTime & dt_struct)
{
	return datetime();
}

int Seconds()
{
	return 0;
}

int Minute()
{
	return 0;
}

int Hour()
{
	return 0;
}

int Day()
{
	return 0;
}

int DayOfWeek()
{
	return 0;
}

int DayOfYear()
{
	return 0;
}

int Month()
{
	return 0;
}

int Year()
{
	return 0;
}

int TimeDay(datetime date)
{
	return 0;
}

int TimeDayOfWeek(datetime date)
{
	return 0;
}

int TimeDayOfYear(datetime date)
{
	return 0;
}

int TimeHour(datetime date)
{
	return 0;
}

int TimeMinute(datetime date)
{
	return 0;
}

int TimeMonth(datetime date)
{
	return 0;
}

int TimeSeconds(datetime date)
{
	return 0;
}

int TimeYear(datetime date)
{
	return 0;
}

double AccountInfoDouble(int property_id)
{
	return 0.0;
}

_long AccountInfoInteger(int property_id)
{
	return _long();
}

string AccountInfoString(int property_id)
{
	return string();
}

double AccountBalance()
{
	return 0.0;
}

double AccountCredit()
{
	return 0.0;
}

string AccountCompany()
{
	return string();
}

string AccountCurrency()
{
	return string();
}

double AccountEquity()
{
	return 0.0;
}

double AccountFreeMargin()
{
	return 0.0;
}

double AccountFreeMarginCheck(string symbol, int cmd, double volume)
{
	return 0.0;
}

double AccountFreeMarginMode()
{
	return 0.0;
}

int AccountLeverage()
{
	return 0;
}

double AccountMargin()
{
	return 0.0;
}

string AccountName()
{
	return string();
}

int AccountNumber()
{
	return 0;
}

double AccountProfit()
{
	return 0.0;
}

string AccountServer()
{
	return string();
}

int AccountStopoutLevel()
{
	return 0;
}

int AccountStopoutMode()
{
	return 0;
}

int MT4_GetLastError()
{
	return 0;
}

bool IsStopped()
{
	return false;
}

int UninitializeReason()
{
	return 0;
}

int MQLInfoInteger(int property_id)
{
	return 0;
}

string MQLInfoString(int property_id)
{
	return string();
}

void MQLSetInteger(int property_id, int property_value)
{
}

int TerminalInfoInteger(int property_id)
{
	return 0;
}

double TerminalInfoDouble(int property_id)
{
	return 0.0;
}

string TerminalInfoString(int property_id)
{
	return string();
}

int Digits()
{
	return 0;
}

double Point()
{
	return 0.0;
}

bool IsConnected()
{
	return false;
}

bool IsDemo()
{
	return false;
}

bool IsDllsAllowed()
{
	return false;
}

bool IsExpertEnabled()
{
	return false;
}

double OrderStopLoss()
{
	return 0.0;
}

int OrdersTotal()
{
	return 0;
}

double OrderSwap()
{
	return 0.0;
}

string OrderSymbol()
{
	return string();
}

double OrderTakeProfit()
{
	return 0.0;
}

int OrderTicket()
{
	return 0;
}

int OrderType()
{
	return 0;
}

double SignalBaseGetDouble(ENUM_SIGNAL_BASE_DOUBLE property_id)
{
	return 0.0;
}

_long SignalBaseGetInteger(ENUM_SIGNAL_BASE_INTEGER property_id)
{
	return _long();
}

string SignalBaseGetString(ENUM_SIGNAL_BASE_STRING property_id)
{
	return string();
}

bool SignalBaseSelect(int index)
{
	return false;
}

int SignalBaseTotal()
{
	return 0;
}

double SignalInfoGetDouble(ENUM_SIGNAL_INFO_DOUBLE property_id)
{
	return 0.0;
}

_long SignalInfoGetInteger(ENUM_SIGNAL_INFO_INTEGER property_id)
{
	return _long();
}

string SignalInfoGetString(ENUM_SIGNAL_INFO_STRING property_id)
{
	return string();
}

bool SignalInfoSetDouble(ENUM_SIGNAL_INFO_DOUBLE property_id, double value)
{
	return false;
}

bool SignalInfoSetInteger(ENUM_SIGNAL_INFO_INTEGER property_id, _long value)
{
	return false;
}

bool SignalSubscribe(_long signal_id)
{
	return false;
}

bool SignalUnsubscribe()
{
	return false;
}

bool GlobalVariableCheck(string name)
{
	return false;
}

datetime GlobalVariableTime(string name)
{
	return datetime();
}

bool GlobalVariableDel(string name)
{
	return false;
}

double GlobalVariableGet(string name)
{
	return 0.0;
}

bool GlobalVariableGet(string name, double & double_var)
{
	return false;
}

string GlobalVariableName(int index)
{
	return string();
}

datetime GlobalVariableSet(string name, double value)
{
	return datetime();
}

void GlobalVariablesFlush()
{
}

bool GlobalVariableTemp(string name)
{
	return false;
}

bool GlobalVariableSetOnCondition(string name, double value, double check_value)
{
	return false;
}

int GlobalVariablesDeleteAll(string prefix_name, datetime limit_data)
{
	return 0;
}

int GlobalVariablesTotal()
{
	return 0;
}

_long FileFindFirst(const string file_filter, string & returned_filename, int common_flag)
{
	return _long();
}

bool FileFindNext(_long search_handle, string & returned_filename)
{
	return false;
}

void FileFindClose(_long search_handle)
{
}

bool FileIsExist(const string file_name, int common_flag)
{
	return false;
}

int FileOpen(string file_name, int open_flags, short delimiter, uint codepage)
{
	return 0;
}

void FileClose(int file_handle)
{
}

bool FileCopy(const string src_file_name, int common_flag, const string dst_file_name, int mode_flags)
{
	return false;
}

bool FileDelete(const string file_name, int common_flag)
{
	return false;
}

bool FileMove(const string src_file_name, int common_flag, const string dst_file_name, int mode_flags)
{
	return false;
}

void FileFlush(int file_handle)
{
}

_long FileGetInteger(int file_handle, ENUM_FILE_PROPERTY_INTEGER property_id)
{
	return _long();
}

_long FileGetInteger(const string file_name, ENUM_FILE_PROPERTY_INTEGER property_id, bool common_folder)
{
	return _long();
}

bool FileIsEnding(int file_handle)
{
	return false;
}

bool FileIsLineEnding(int file_handle)
{
	return false;
}

uint FileReadArray(int file_handle, void * array, int start, int count)
{
	return uint();
}

bool FileReadBool(int file_handle)
{
	return false;
}

datetime FileReadDatetime(int file_handle)
{
	return datetime();
}

double FileReadDouble(int file_handle, int size)
{
	return 0.0;
}

float FileReadFloat(int file_handle)
{
	return 0.0f;
}

int FileReadInteger(int file_handle, int size)
{
	return 0;
}

_long FileReadLong(int file_handle)
{
	return _long();
}

double FileReadNumber(int file_handle)
{
	return 0.0;
}

string FileReadString(int file_handle, int length)
{
	return string();
}

uint FileReadStruct(int file_handle, const void * struct_object, int size)
{
	return uint();
}

bool FileSeek(int file_handle, _long offset, ENUM_FILE_POSITION origin)
{
	return false;
}

ulong FileSize(int file_handle)
{
	return ulong();
}

ulong FileTell(int file_handle)
{
	return ulong();
}

uint FileWrite(int file_handle, ...)
{
	return uint();
}

uint FileWriteArray(int file_handle, const void * array, int start, int count)
{
	return uint();
}

uint FileWriteDouble(int file_handle, double value)
{
	return uint();
}

uint FileWriteFloat(int file_handle, float value)
{
	return uint();
}

uint FileWriteInteger(int file_handle, int value, int size)
{
	return uint();
}

uint FileWriteLong(int file_handle, _long value)
{
	return uint();
}

uint FileWriteString(int file_handle, const string text_string, int length)
{
	return uint();
}

uint FileWriteStruct(int file_handle, const void * struct_object, int size)
{
	return uint();
}

bool FolderCreate(string folder_name, int common_flag)
{
	return false;
}

bool FolderDelete(string folder_name, int common_flag)
{
	return false;
}

bool FolderClean(string folder_name, int common_flag)
{
	return false;
}

int FileOpenHistory(int filename, int mode, int delimiter)
{
	return 0;
}

void HideTestIndicators(bool hide)
{
}

bool IndicatorSetDouble(int prop_id, double prop_value)
{
	return false;
}

bool IndicatorSetDouble(int prop_id, int prop_modifier, double prop_value)
{
	return false;
}

bool IndicatorSetInteger(int prop_id, int prop_value)
{
	return false;
}

bool IndicatorSetInteger(int prop_id, int prop_modifier, int prop_value)
{
	return false;
}

bool IndicatorSetString(int prop_id, string prop_value)
{
	return false;
}

bool IndicatorSetString(int prop_id, int prop_modifier, string prop_value)
{
	return false;
}

bool SetIndexBuffer(int index, double buffer[], ENUM_INDEXBUFFER_TYPE data_type)
{
	return false;
}

bool SetIndexBuffer(int index, double buffer[])
{
	return false;
}

bool IndicatorBuffers(int count)
{
	return false;
}

int IndicatorCounted()
{
	return 0;
}

void IndicatorDigits(int digits)
{
}

void IndicatorShortName(string name)
{
}

void SetIndexArrow(int index, int code)
{
}

void SetIndexDrawBegin(int index, int begin)
{
}

void SetIndexEmptyValue(int index, double value)
{
}

void SetIndexLabel(int index, string text)
{
}

void SetIndexShift(int index, int shift)
{
}

void SetIndexStyle(int index, int type, int style, int width, color clr)
{
}

void SetLevelStyle(int draw_style, int line_width, color clr)
{
}

void SetLevelValue(int level, double value)
{
}

bool ObjectCreate(_long chart_id, string object_name, ENUM_OBJECT object_type, int sub_window, datetime time1, double price1, ...)
{
	return false;
}

bool ObjectCreate(string object_name, ENUM_OBJECT object_type, int sub_window, datetime time1, double price1, datetime time2, double price2, datetime time3, double price3)
{
	return false;
}

string ObjectName(int object_index)
{
	return string();
}

bool ObjectDelete(_long chart_id, string object_name)
{
	return false;
}

bool ObjectDelete(string object_name)
{
	return false;
}

int ObjectsDeleteAll(_long chart_id, int sub_window, int object_type)
{
	return 0;
}

int ObjectsDeleteAll(int sub_window, int object_type)
{
	return 0;
}

int ObjectsDeleteAll(_long chart_id, const string prefix, int sub_window, int object_type)
{
	return 0;
}

int ObjectFind(_long chart_id, string object_name)
{
	return 0;
}

int ObjectFind(string object_name)
{
	return 0;
}

datetime ObjectGetTimeByValue(_long chart_id, string object_name, double value, int line_id)
{
	return datetime();
}

double ObjectGetValueByTime(_long chart_id, string object_name, datetime time, int line_id)
{
	return 0.0;
}

bool ObjectMove(string object_name, int point_index, datetime time, double price)
{
	return false;
}

int ObjectsTotal(_long chart_id, int sub_window, int type)
{
	return 0;
}

int ObjectsTotal(int type)
{
	return 0;
}

double ObjectGetDouble(_long chart_id, string object_name, int prop_id, int prop_modifier)
{
	return 0.0;
}

bool ObjectGetDouble(_long chart_id, string object_name, int prop_id, int prop_modifier, double & double_var)
{
	return false;
}

_long ObjectGetInteger(_long chart_id, string object_name, int prop_id, int prop_modifier)
{
	return _long();
}

bool ObjectGetInteger(_long chart_id, string object_name, int prop_id, int prop_modifier, _long & long_var)
{
	return false;
}

string ObjectGetString(_long chart_id, string object_name, int prop_id, int prop_modifier)
{
	return string();
}

bool ObjectGetString(_long chart_id, string object_name, int prop_id, int prop_modifier, string & string_var)
{
	return false;
}

bool ObjectSetDouble(_long chart_id, string object_name, int prop_id, double prop_value)
{
	return false;
}

bool ObjectSetDouble(_long chart_id, string object_name, int prop_id, int prop_modifier, double prop_value)
{
	return false;
}

bool ObjectSetInteger(_long chart_id, string object_name, int prop_id, _long prop_value)
{
	return false;
}

bool ObjectSetInteger(_long chart_id, string object_name, int prop_id, int prop_modifier, _long prop_value)
{
	return false;
}

bool ObjectSetString(_long chart_id, string object_name, int prop_id, string prop_value)
{
	return false;
}

bool ObjectSetString(_long chart_id, string object_name, int prop_id, int prop_modifier, string prop_value)
{
	return false;
}

bool TextSetFont(const string name, int size, uint flags, int orientation)
{
	return false;
}

bool TextOut(const string text, int x, int y, uint anchor, uint data[], uint width, uint height, uint color, ENUM_COLOR_FORMAT color_format)
{
	return false;
}

bool TextGetSize(const string text, uint & width, uint & height)
{
	return false;
}

string ObjectDescription(string object_name)
{
	return string();
}

double ObjectGet(string object_name, int index)
{
	return 0.0;
}

string ObjectGetFiboDescription(string object_name, int index)
{
	return string();
}

int ObjectGetShiftByValue(string object_name, double value)
{
	return 0;
}

double ObjectGetValueByShift(string object_name, int shift)
{
	return 0.0;
}

bool ObjectSet(string object_name, int index, double value)
{
	return false;
}

bool ObjectSetFiboDescription(string object_name, int index, string text)
{
	return false;
}

bool ObjectSetText(string object_name, string text, int font_size, string font_name, color text_color)
{
	return false;
}

int ObjectType(string object_name)
{
	return 0;
}

double iAC(string symbol, int timeframe, int shift)
{
	return 0.0;
}

double iAD(string symbol, int timeframe, int shift)
{
	return 0.0;
}

double iADX(string symbol, int timeframe, int period, int applied_price, int mode, int shift)
{
	return 0.0;
}

double iAlligator(string symbol, int timeframe, int jaw_period, int jaw_shift, int teeth_period, int teeth_shift, int lips_period, int lips_shift, int ma_method, int applied_price, int mode, int shift)
{
	return 0.0;
}

double iAO(string symbol, int timeframe, int shift)
{
	return 0.0;
}

double iATR(string symbol, int timeframe, int period, int shift)
{
	return 0.0;
}

double iBearsPower(string symbol, int timeframe, int period, int applied_price, int shift)
{
	return 0.0;
}

double iBands(string symbol, int timeframe, int period, double deviation, int bands_shift, int applied_price, int mode, int shift)
{
	return 0.0;
}

double iBandsOnArray(double array[], int total, int period, double deviation, int bands_shift, int mode, int shift)
{
	return 0.0;
}

double iBullsPower(string symbol, int timeframe, int period, int applied_price, int shift)
{
	return 0.0;
}

double iCCI(string symbol, int timeframe, int period, int applied_price, int shift)
{
	return 0.0;
}

double iCCIOnArray(double array[], int total, int period, int shift)
{
	return 0.0;
}

double iCustom(string symbol, int timeframe, string name, ...)
{
	return 0.0;
}

double iDeMarker(string symbol, int timeframe, int period, int shift)
{
	return 0.0;
}

double iEnvelopes(string symbol, int timeframe, int ma_period, int ma_method, int ma_shift, int applied_price, double deviation, int mode, int shift)
{
	return 0.0;
}

double iEnvelopesOnArray(double array[], int total, int ma_period, int ma_method, int ma_shift, double deviation, int mode, int shift)
{
	return 0.0;
}

double iForce(string symbol, int timeframe, int period, int ma_method, int applied_price, int shift)
{
	return 0.0;
}

double iFractals(string symbol, int timeframe, int mode, int shift)
{
	return 0.0;
}

double iGator(string symbol, int timeframe, int jaw_period, int jaw_shift, int teeth_period, int teeth_shift, int lips_period, int lips_shift, int ma_method, int applied_price, int mode, int shift)
{
	return 0.0;
}

double iIchimoku(string symbol, int timeframe, int tenkan_sen, int kijun_sen, int senkou_span_b, int mode, int shift)
{
	return 0.0;
}

double iBWMFI(string symbol, int timeframe, int shift)
{
	return 0.0;
}

double iMomentum(string symbol, int timeframe, int period, int applied_price, int shift)
{
	return 0.0;
}

double iMomentumOnArray(double array[], int total, int period, int shift)
{
	return 0.0;
}

double iMFI(string symbol, int timeframe, int period, int shift)
{
	return 0.0;
}

double iMA(string symbol, int timeframe, int ma_period, int ma_shift, int ma_method, int applied_price, int shift)
{
	return 0.0;
}

double iMAOnArray(double array[], int total, int ma_period, int ma_shift, int ma_method, int shift)
{
	return 0.0;
}

double iOsMA(string symbol, int timeframe, int fast_ema_period, int slow_ema_period, int signal_period, int applied_price, int shift)
{
	return 0.0;
}

double iMACD(string symbol, int timeframe, int fast_ema_period, int slow_ema_period, int signal_period, int applied_price, int mode, int shift)
{
	return 0.0;
}

double iOBV(string symbol, int timeframe, int applied_price, int shift)
{
	return 0.0;
}

double iSAR(string symbol, int timeframe, double step, double maximum, int shift)
{
	return 0.0;
}

double iRSI(string symbol, int timeframe, int period, int applied_price, int shift)
{
	return 0.0;
}

double iRSIOnArray(double array[], int total, int period, int shift)
{
	return 0.0;
}

double iRVI(string symbol, int timeframe, int period, int mode, int shift)
{
	return 0.0;
}

double iStdDev(string symbol, int timeframe, int ma_period, int ma_shift, int ma_method, int applied_price, int shift)
{
	return 0.0;
}

double iStdDevOnArray(double array[], int total, int ma_period, int ma_shift, int ma_method, int shift)
{
	return 0.0;
}

double iStochastic(string symbol, int timeframe, int Kperiod, int Dperiod, int slowing, int method, int price_field, int mode, int shift)
{
	return 0.0;
}

double iWPR(string symbol, int timeframe, int period, int shift)
{
	return 0.0;
}

double MarketInfo(string symbol, int type)
{
	return 0.0;
}

int SymbolsTotal(bool selected)
{
	return 0;
}

string SymbolName(int pos, bool selected)
{
	return string();
}

bool SymbolSelect(string name, bool select)
{
	return false;
}

double SymbolInfoDouble(string name, ENUM_SYMBOL_INFO_DOUBLE prop_id)
{
	return 0.0;
}

_long SymbolInfoInteger(string name, ENUM_SYMBOL_INFO_INTEGER prop_id)
{
	return _long();
}

bool SymbolInfoInteger(string name, ENUM_SYMBOL_INFO_INTEGER prop_id, _long & long_var)
{
	return false;
}

string SymbolInfoString(string name, ENUM_SYMBOL_INFO_STRING prop_id)
{
	return string();
}

bool SymbolInfoString(string name, ENUM_SYMBOL_INFO_STRING prop_id, string & string_var)
{
	return false;
}

bool SymbolInfoTick(string symbol, MqlTick & tick)
{
	return false;
}

bool SymbolInfoSessionQuote(string name, ENUM_DAY_OF_WEEK day_of_week, uint session_index, datetime & from, datetime & to)
{
	return false;
}

bool SymbolInfoSessionTrade(string name, ENUM_DAY_OF_WEEK day_of_week, uint session_index, datetime & from, datetime & to)
{
	return false;
}

_long SeriesInfoInteger(string symbol_name, ENUM_TIMEFRAMES timeframe, ENUM_SERIES_INFO_INTEGER prop_id)
{
	return _long();
}

bool SeriesInfoInteger(string symbol_name, ENUM_TIMEFRAMES timeframe, ENUM_SERIES_INFO_INTEGER prop_id, _long & long_var)
{
	return false;
}

bool RefreshRates()
{
	return false;
}

int CopyRates(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, MqlRates rates_array[])
{
	return 0;
}

int CopyRates(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, MqlRates rates_array[])
{
	return 0;
}

int CopyRates(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, MqlRates rates_array[])
{
	return 0;
}

int CopyTime(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, datetime time_array[])
{
	return 0;
}

int CopyTime(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, datetime time_array[])
{
	return 0;
}

int CopyTime(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, datetime time_array[])
{
	return 0;
}

int CopyOpen(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, double open_array[])
{
	return 0;
}

int CopyOpen(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, double open_array[])
{
	return 0;
}

int CopyOpen(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, double open_array[])
{
	return 0;
}

int CopyHigh(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, double high_array[])
{
	return 0;
}

int CopyHigh(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, double high_array[])
{
	return 0;
}

int CopyHigh(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, double high_array[])
{
	return 0;
}

int CopyLow(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, double low_array[])
{
	return 0;
}

int CopyLow(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, double low_array[])
{
	return 0;
}

int CopyLow(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, double low_array[])
{
	return 0;
}

int CopyClose(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, double close_array[])
{
	return 0;
}

int CopyClose(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, double close_array[])
{
	return 0;
}

int CopyClose(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, double close_array[])
{
	return 0;
}

int CopyTickVolume(string symbol_name, ENUM_TIMEFRAMES timeframe, int start_pos, int count, _long volume_array[])
{
	return 0;
}

int CopyTickVolume(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, int count, _long volume_array[])
{
	return 0;
}

int CopyTickVolume(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time, _long volume_array[])
{
	return 0;
}

int Bars(string symbol_name, ENUM_TIMEFRAMES timeframe)
{
	return 0;
}

int Bars(string symbol_name, ENUM_TIMEFRAMES timeframe, datetime start_time, datetime stop_time)
{
	return 0;
}

int iBars(string symbol, int timeframe)
{
	return 0;
}

int iBarShift(string symbol, int timeframe, datetime time, bool exact)
{
	return 0;
}

double iClose(string symbol, int timeframe, int shift)
{
	return 0.0;
}

double iHigh(string symbol, int timeframe, int shift)
{
	return 0.0;
}

int iHighest(string symbol, int timeframe, int type, int count, int start)
{
	return 0;
}

double iLow(string symbol, int timeframe, int shift)
{
	return 0.0;
}

int iLowest(string symbol, int timeframe, int type, int count, int start)
{
	return 0;
}

double iOpen(string symbol, int timeframe, int shift)
{
	return 0.0;
}

datetime iTime(string symbol, int timeframe, int shift)
{
	return datetime();
}

_long iVolume(string symbol, int timeframe, int shift)
{
	return _long();
}

bool ChartApplyTemplate(_long chart_id, const string filename)
{
	return false;
}

bool ChartSaveTemplate(_long chart_id, const string filename)
{
	return false;
}

int ChartWindowFind(_long chart_id, string indicator_shortname)
{
	return 0;
}

int ChartWindowFind()
{
	return 0;
}

bool ChartTimePriceToXY(_long chart_id, int sub_window, datetime time, double price, int & x, int & y)
{
	return false;
}

bool ChartXYToTimePrice(_long chart_id, int x, int y, int & sub_window, datetime & time, double & price)
{
	return false;
}

_long ChartOpen(string symbol, ENUM_TIMEFRAMES period)
{
	return _long();
}

_long ChartFirst()
{
	return _long();
}

_long ChartNext(_long chart_id)
{
	return _long();
}

bool ChartClose(_long chart_id)
{
	return false;
}

string ChartSymbol(_long chart_id)
{
	return string();
}

ENUM_TIMEFRAMES ChartPeriod(_long chart_id)
{
	return ENUM_TIMEFRAMES();
}

void ChartRedraw(_long chart_id)
{
}

bool ChartSetDouble(_long chart_id, int prop_id, double value)
{
	return false;
}

bool ChartSetInteger(_long chart_id, int prop_id, _long value)
{
	return false;
}

bool ChartSetInteger(_long chart_id, int property_id, uint sub_window, _long value)
{
	return false;
}

bool ChartSetString(_long chart_id, int prop_id, string str_value)
{
	return false;
}

double ChartGetDouble(_long chart_id, int prop_id, int sub_window)
{
	return 0.0;
}

bool ChartGetDouble(_long chart_id, int prop_id, int sub_window, double & double_var)
{
	return false;
}

_long ChartGetInteger(_long chart_id, int prop_id, int sub_window)
{
	return _long();
}

bool ChartGetInteger(_long chart_id, int prop_id, int sub_window, _long & long_var)
{
	return false;
}

string ChartGetString(_long chart_id, int prop_id)
{
	return string();
}

bool ChartGetString(_long chart_id, int prop_id, string & string_var)
{
	return false;
}

bool ChartNavigate(_long chart_id, int position, int shift)
{
	return false;
}

_long ChartID()
{
	return _long();
}

bool ChartIndicatorDelete(_long chart_id, int sub_window, const string indicator_shortname)
{
	return false;
}

string ChartIndicatorName(_long chart_id, int sub_window, int index)
{
	return string();
}

int ChartIndicatorsTotal(_long chart_id, int sub_window)
{
	return 0;
}

int ChartWindowOnDropped()
{
	return 0;
}

double ChartPriceOnDropped()
{
	return 0.0;
}

datetime ChartTimeOnDropped()
{
	return datetime();
}

int ChartXOnDropped()
{
	return 0;
}

int ChartYOnDropped()
{
	return 0;
}

bool ChartSetSymbolPeriod(_long chart_id, string symbol, ENUM_TIMEFRAMES period)
{
	return false;
}

bool ChartScreenShot(_long chart_id, string filename, int width, int height, ENUM_ALIGN_MODE align_mode)
{
	return false;
}

int Period()
{
	return 0;
}

string Symbol()
{
	return string();
}

int WindowBarsPerChart()
{
	return 0;
}

string WindowExpertName()
{
	return string();
}

int WindowFind(string name)
{
	return 0;
}

int WindowFirstVisibleBar()
{
	return 0;
}

int WindowHandle(string symbol, int timeframe)
{
	return 0;
}

int WindowIsVisible(int index)
{
	return 0;
}

int WindowOnDropped()
{
	return 0;
}

int WindowPriceMax(int index)
{
	return 0;
}

int WindowPriceMin(int index)
{
	return 0;
}

double WindowPriceOnDropped()
{
	return 0.0;
}

void WindowRedraw()
{
}

bool WindowScreenShot(string filename, int size_x, int size_y, int start_bar, int chart_scale, int chart_mode)
{
	return false;
}

datetime WindowTimeOnDropped()
{
	return datetime();
}

int WindowsTotal()
{
	return 0;
}

int WindowXOnDropped()
{
	return 0;
}

int WindowYOnDropped()
{
	return 0;
}

bool OrderClose(int ticket, double lots, double price, int slippage, color arrow_color)
{
	return false;
}

bool OrderCloseBy(int ticket, int opposite, color arrow_color)
{
	return false;
}

double OrderClosePrice()
{
	return 0.0;
}

datetime OrderCloseTime()
{
	return datetime();
}

string OrderComment()
{
	return string();
}

double OrderCommission()
{
	return 0.0;
}

bool OrderDelete(int ticket, color arrow_color)
{
	return false;
}

datetime OrderExpiration()
{
	return datetime();
}

double OrderLots()
{
	return 0.0;
}

int OrderMagicNumber()
{
	return 0;
}

bool OrderModify(int ticket, double price, double stoploss, double takeprofit, datetime expiration, color arrow_color)
{
	return false;
}

double OrderOpenPrice()
{
	return 0.0;
}

datetime OrderOpenTime()
{
	return datetime();
}

void OrderPrint()
{
}

double OrderProfit()
{
	return 0.0;
}

bool OrderSelect(int index, int select, int pool)
{
	return false;
}

int OrderSend(string symbol, int cmd, double volume, double price, int slippage, double stoploss, double takeprofit, string comment, int magic, datetime expiration, color arrow_color)
{
	return 0;
}

int OrdersHistoryTotal()
{
	return 0;
}

bool IsLibrariesAllowed()
{
	return false;
}

bool IsOptimization()
{
	return false;
}

bool IsTesting()
{
	return false;
}

bool IsTradeAllowed()
{
	return false;
}

bool IsTradeContextBusy()
{
	return false;
}

bool IsVisualMode()
{
	return false;
}

string TerminalCompany()
{
	return string();
}

string TerminalName()
{
	return string();
}

string TerminalPath()
{
	return string();
}
