// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_UI_ConsoleMemorialLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConsoleScreenMemorialWall_C** NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUI_ConsoleMemorialLine_C::AddBoard(class UConsoleScreenMemorialWall_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard");

	UUI_ConsoleMemorialLine_C_AddBoard_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ConsoleMemorialLine_C::SetSpeed(float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed");

	UUI_ConsoleMemorialLine_C_SetSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_ConsoleMemorialLine_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText");

	UUI_ConsoleMemorialLine_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ConsoleMemorialLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct");

	UUI_ConsoleMemorialLine_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_ConsoleMemorialLine_C::OnMoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.OnMoveFinished");

	UUI_ConsoleMemorialLine_C_OnMoveFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ConsoleMemorialLine_C::ExecuteUbergraph_UI_ConsoleMemorialLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine");

	UUI_ConsoleMemorialLine_C_ExecuteUbergraph_UI_ConsoleMemorialLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
