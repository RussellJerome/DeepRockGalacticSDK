// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_ServerEntry_TeamLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             InIcon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           InIconTint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UITM_ServerEntry_TeamLine_C::SetPlayerData(class UTexture2D** InIcon, struct FLinearColor* InIconTint, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData");

	UITM_ServerEntry_TeamLine_C_SetPlayerData_Params params;
	params.InIcon = InIcon;
	params.InIconTint = InIconTint;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerEntry_TeamLine_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct");

	UITM_ServerEntry_TeamLine_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_ServerEntry_TeamLine_C::ExecuteUbergraph_ITM_ServerEntry_TeamLine(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine");

	UITM_ServerEntry_TeamLine_C_ExecuteUbergraph_ITM_ServerEntry_TeamLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
