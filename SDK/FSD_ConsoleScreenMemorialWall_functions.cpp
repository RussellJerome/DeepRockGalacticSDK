// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ConsoleScreenMemorialWall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreenMemorialWall_C::SetLinesSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed");

	UConsoleScreenMemorialWall_C_SetLinesSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ConsoleMemorialLine_C** NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConsoleScreenMemorialWall_C::RemoveLine(class UUI_ConsoleMemorialLine_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine");

	UConsoleScreenMemorialWall_C_RemoveLine_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFast                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreenMemorialWall_C::SetAnimationSpeed(bool* IsFast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed");

	UConsoleScreenMemorialWall_C_SetAnimationSpeed_Params params;
	params.IsFast = IsFast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConsoleScreenMemorialWall_C::SpawnNewLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine");

	UConsoleScreenMemorialWall_C_SpawnNewLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Row                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UConsoleScreenMemorialWall_C::GetNameFromRow(int* Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow");

	UConsoleScreenMemorialWall_C_GetNameFromRow_Params params;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreenMemorialWall_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick");

	UConsoleScreenMemorialWall_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UConsoleScreenMemorialWall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct");

	UConsoleScreenMemorialWall_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConsoleScreenMemorialWall_C::ExecuteUbergraph_ConsoleScreenMemorialWall(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall");

	UConsoleScreenMemorialWall_C_ExecuteUbergraph_ConsoleScreenMemorialWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
